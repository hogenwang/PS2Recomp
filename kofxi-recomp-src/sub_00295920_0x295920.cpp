#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00295920
// Address: 0x295920 - 0x295ad8
void sub_00295920_0x295920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295920_0x295920");
#endif

    switch (ctx->pc) {
        case 0x295978u: goto label_295978;
        case 0x2959c8u: goto label_2959c8;
        case 0x295a94u: goto label_295a94;
        default: break;
    }

    ctx->pc = 0x295920u;

    // 0x295920: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x295920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x295924: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x295924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x295928: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x295928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29592c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x29592cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295930: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x295930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x295934: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x295934u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295938: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x295938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x29593c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x29593cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x295940: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x295940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x295944: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
    ctx->pc = 0x295944u;
    {
        const bool branch_taken_0x295944 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x295948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295944u;
            // 0x295948: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295944) {
            ctx->pc = 0x2959B4u;
            goto label_2959b4;
        }
    }
    ctx->pc = 0x29594Cu;
    // 0x29594c: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x29594cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x295950: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x295950u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295954: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x295954u;
    {
        const bool branch_taken_0x295954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295954u;
            // 0x295958: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295954) {
            ctx->pc = 0x2959A0u;
            goto label_2959a0;
        }
    }
    ctx->pc = 0x29595Cu;
    // 0x29595c: 0x309400ff  andi        $s4, $a0, 0xFF
    ctx->pc = 0x29595cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x295960: 0x30b20fff  andi        $s2, $a1, 0xFFF
    ctx->pc = 0x295960u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x295964: 0x30d30fff  andi        $s3, $a2, 0xFFF
    ctx->pc = 0x295964u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4095);
    // 0x295968: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x295968u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29596c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x29596cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x295970: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x295970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x295974: 0x0  nop
    ctx->pc = 0x295974u;
    // NOP
label_295978:
    // 0x295978: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x295978u;
    {
        const bool branch_taken_0x295978 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x29597Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295978u;
            // 0x29597c: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295978) {
            ctx->pc = 0x295984u;
            goto label_295984;
        }
    }
    ctx->pc = 0x295980u;
    // 0x295980: 0x2224021  addu        $t0, $s1, $v0
    ctx->pc = 0x295980u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_295984:
    // 0x295984: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x295984u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295988: 0x2271021  addu        $v0, $s1, $a3
    ctx->pc = 0x295988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x29598c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x29598cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x295990: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x295990u;
    {
        const bool branch_taken_0x295990 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x295994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295990u;
            // 0x295994: 0x2402002f  addiu       $v0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295990) {
            ctx->pc = 0x295978u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_295978;
        }
    }
    ctx->pc = 0x295998u;
    // 0x295998: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x295998u;
    {
        const bool branch_taken_0x295998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29599Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295998u;
            // 0x29599c: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295998) {
            ctx->pc = 0x2959C0u;
            goto label_2959c0;
        }
    }
    ctx->pc = 0x2959A0u;
label_2959a0:
    // 0x2959a0: 0x309400ff  andi        $s4, $a0, 0xFF
    ctx->pc = 0x2959a0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2959a4: 0x30b20fff  andi        $s2, $a1, 0xFFF
    ctx->pc = 0x2959a4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x2959a8: 0x30d30fff  andi        $s3, $a2, 0xFFF
    ctx->pc = 0x2959a8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4095);
    // 0x2959ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2959ACu;
    {
        const bool branch_taken_0x2959ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2959B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2959ACu;
            // 0x2959b0: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2959ac) {
            ctx->pc = 0x2959C0u;
            goto label_2959c0;
        }
    }
    ctx->pc = 0x2959B4u;
label_2959b4:
    // 0x2959b4: 0x309400ff  andi        $s4, $a0, 0xFF
    ctx->pc = 0x2959b4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2959b8: 0x30b20fff  andi        $s2, $a1, 0xFFF
    ctx->pc = 0x2959b8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x2959bc: 0x30d30fff  andi        $s3, $a2, 0xFFF
    ctx->pc = 0x2959bcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4095);
label_2959c0:
    // 0x2959c0: 0xc0a5762  jal         func_295D88
    ctx->pc = 0x2959C0u;
    SET_GPR_U32(ctx, 31, 0x2959C8u);
    ctx->pc = 0x295D88u;
    if (runtime->hasFunction(0x295D88u)) {
        auto targetFn = runtime->lookupFunction(0x295D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2959C8u; }
        if (ctx->pc != 0x2959C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295D88_0x295d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2959C8u; }
        if (ctx->pc != 0x2959C8u) { return; }
    }
    ctx->pc = 0x2959C8u;
label_2959c8:
    // 0x2959c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2959c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2959cc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2959ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2959d0: 0x8e020188  lw          $v0, 0x188($s0)
    ctx->pc = 0x2959d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
    // 0x2959d4: 0x8e05018c  lw          $a1, 0x18C($s0)
    ctx->pc = 0x2959d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 396)));
    // 0x2959d8: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x2959d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2959dc: 0xc4182a  slt         $v1, $a2, $a0
    ctx->pc = 0x2959dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2959e0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2959e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2959e4: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2959e4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x2959e8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2959e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x2959ec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2959ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2959f0: 0x821823  subu        $v1, $a0, $v0
    ctx->pc = 0x2959f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2959f4: 0x14650009  bne         $v1, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2959F4u;
    {
        const bool branch_taken_0x2959f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x2959F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2959F4u;
            // 0x2959f8: 0xae030188  sw          $v1, 0x188($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2959f4) {
            ctx->pc = 0x295A1Cu;
            goto label_295a1c;
        }
    }
    ctx->pc = 0x2959FCu;
    // 0x2959fc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2959fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x295a00: 0xc2202a  slt         $a0, $a2, $v0
    ctx->pc = 0x295a00u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x295a04: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x295a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x295a08: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x295a08u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x295a0c: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x295a0cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x295a10: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x295a10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x295a14: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x295a14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x295a18: 0xae02018c  sw          $v0, 0x18C($s0)
    ctx->pc = 0x295a18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 2));
label_295a1c:
    // 0x295a1c: 0x8e040188  lw          $a0, 0x188($s0)
    ctx->pc = 0x295a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
    // 0x295a20: 0x121338  dsll        $v0, $s2, 12
    ctx->pc = 0x295a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << 12);
    // 0x295a24: 0x141e38  dsll        $v1, $s4, 24
    ctx->pc = 0x295a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << 24);
    // 0x295a28: 0x26120088  addiu       $s2, $s0, 0x88
    ctx->pc = 0x295a28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
    // 0x295a2c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x295a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x295a30: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x295a30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x295a34: 0x2631825  or          $v1, $s3, $v1
    ctx->pc = 0x295a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    // 0x295a38: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x295a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x295a3c: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x295a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x295a40: 0x8e020188  lw          $v0, 0x188($s0)
    ctx->pc = 0x295a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
    // 0x295a44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x295a44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x295a48: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x295a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x295a4c: 0xac510108  sw          $s1, 0x108($v0)
    ctx->pc = 0x295a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 264), GPR_U32(ctx, 17));
    // 0x295a50: 0x8e030188  lw          $v1, 0x188($s0)
    ctx->pc = 0x295a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
    // 0x295a54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x295a54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x295a58: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x295a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x295a5c: 0xac750148  sw          $s5, 0x148($v1)
    ctx->pc = 0x295a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 328), GPR_U32(ctx, 21));
    // 0x295a60: 0x8e050188  lw          $a1, 0x188($s0)
    ctx->pc = 0x295a60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
    // 0x295a64: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x295a64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x295a68: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x295a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x295a6c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x295a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x295a70: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x295A70u;
    {
        const bool branch_taken_0x295a70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x295A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295A70u;
            // 0x295a74: 0x261100c8  addiu       $s1, $s0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295a70) {
            ctx->pc = 0x295AA8u;
            goto label_295aa8;
        }
    }
    ctx->pc = 0x295A78u;
    // 0x295a78: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x295a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x295a7c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x295a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x295a80: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x295a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x295a84: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x295A84u;
    {
        const bool branch_taken_0x295a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295A84u;
            // 0x295a88: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295a84) {
            ctx->pc = 0x295AACu;
            goto label_295aac;
        }
    }
    ctx->pc = 0x295A8Cu;
    // 0x295a8c: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x295A8Cu;
    SET_GPR_U32(ctx, 31, 0x295A94u);
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295A94u; }
        if (ctx->pc != 0x295A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3028_0x2a3028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295A94u; }
        if (ctx->pc != 0x295A94u) { return; }
    }
    ctx->pc = 0x295A94u;
label_295a94:
    // 0x295a94: 0x8e020188  lw          $v0, 0x188($s0)
    ctx->pc = 0x295a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
    // 0x295a98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x295a98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x295a9c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x295a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x295aa0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x295aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x295aa4: 0x8e050188  lw          $a1, 0x188($s0)
    ctx->pc = 0x295aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
label_295aa8:
    // 0x295aa8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x295aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_295aac:
    // 0x295aac: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x295aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x295ab0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x295ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x295ab4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x295ab4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x295ab8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x295ab8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x295abc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x295abcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x295ac0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x295ac0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x295ac4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x295ac4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x295ac8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x295ac8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x295acc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x295accu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x295ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x295AD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295AD0u;
            // 0x295ad4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x295AD8u;
    ctx->pc = 0x295ad8u;
}
