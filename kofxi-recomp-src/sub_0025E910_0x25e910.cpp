#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025E910
// Address: 0x25e910 - 0x25ead0
void sub_0025E910_0x25e910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E910_0x25e910");
#endif

    switch (ctx->pc) {
        case 0x25e958u: goto label_25e958;
        case 0x25e968u: goto label_25e968;
        case 0x25e97cu: goto label_25e97c;
        case 0x25e9c8u: goto label_25e9c8;
        case 0x25e9e0u: goto label_25e9e0;
        case 0x25ea0cu: goto label_25ea0c;
        case 0x25ea38u: goto label_25ea38;
        default: break;
    }

    ctx->pc = 0x25e910u;

    // 0x25e910: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x25e910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x25e914: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x25e914u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e918: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x25e918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x25e91c: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x25e91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x25e920: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x25e920u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e924: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x25e924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x25e928: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x25e928u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e92c: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x25e92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x25e930: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x25e930u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e934: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x25e934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x25e938: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25e938u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e93c: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x25e93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x25e940: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x25e940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x25e944: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x25e944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x25e948: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x25e948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x25e94c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x25e94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x25e950: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x25e950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x25e954: 0xafa80004  sw          $t0, 0x4($sp)
    ctx->pc = 0x25e954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
label_25e958:
    // 0x25e958: 0x1a60004a  blez        $s3, . + 4 + (0x4A << 2)
    ctx->pc = 0x25E958u;
    {
        const bool branch_taken_0x25e958 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x25E95Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E958u;
            // 0x25e95c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e958) {
            ctx->pc = 0x25EA84u;
            goto label_25ea84;
        }
    }
    ctx->pc = 0x25E960u;
    // 0x25e960: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x25e960u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x25e964: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x25e964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
label_25e968:
    // 0x25e968: 0x8ef10000  lw          $s1, 0x0($s7)
    ctx->pc = 0x25e968u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x25e96c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x25e96cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e970: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x25e970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e974: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x25e974u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e978: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_25e97c:
    if (ctx->pc == 0x25E97Cu) {
        ctx->pc = 0x25E97Cu;
            // 0x25e97c: 0x30450001  andi        $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x25E980u;
        goto label_fallthrough_0x25e978;
    }
    ctx->pc = 0x25E978u;
    {
        const bool branch_taken_0x25e978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E97Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E978u;
            // 0x25e97c: 0x30450001  andi        $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e978) {
            ctx->pc = 0x25E998u;
            goto label_25e998;
        }
    }
label_fallthrough_0x25e978:
    ctx->pc = 0x25E980u;
    // 0x25e980: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x25e980u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x25e984: 0x0  nop
    ctx->pc = 0x25e984u;
    // NOP
    // 0x25e988: 0x0  nop
    ctx->pc = 0x25e988u;
    // NOP
    // 0x25e98c: 0x0  nop
    ctx->pc = 0x25e98cu;
    // NOP
    // 0x25e990: 0x10a0fffa  beqz        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x25E990u;
    {
        const bool branch_taken_0x25e990 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E990u;
            // 0x25e994: 0x21042  srl         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e990) {
            ctx->pc = 0x25E97Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25e97c;
        }
    }
    ctx->pc = 0x25E998u;
label_25e998:
    // 0x25e998: 0x12000035  beqz        $s0, . + 4 + (0x35 << 2)
    ctx->pc = 0x25E998u;
    {
        const bool branch_taken_0x25e998 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E998u;
            // 0x25e99c: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e998) {
            ctx->pc = 0x25EA70u;
            goto label_25ea70;
        }
    }
    ctx->pc = 0x25E9A0u;
    // 0x25e9a0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x25e9a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x25e9a4: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x25e9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x25e9a8: 0x93102a  slt         $v0, $a0, $s3
    ctx->pc = 0x25e9a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x25e9ac: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x25E9ACu;
    {
        const bool branch_taken_0x25e9ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E9ACu;
            // 0x25e9b0: 0x8fa50008  lw          $a1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e9ac) {
            ctx->pc = 0x25EA70u;
            goto label_25ea70;
        }
    }
    ctx->pc = 0x25E9B4u;
    // 0x25e9b4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x25e9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x25e9b8: 0x24421760  addiu       $v0, $v0, 0x1760
    ctx->pc = 0x25e9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5984));
    // 0x25e9bc: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x25e9bcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25e9c0: 0xa2a821  addu        $s5, $a1, $v0
    ctx->pc = 0x25e9c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x25e9c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25e9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25e9c8:
    // 0x25e9c8: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x25e9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x25e9cc: 0x2051004  sllv        $v0, $a1, $s0
    ctx->pc = 0x25e9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 16) & 0x1F));
    // 0x25e9d0: 0x7fa70020  sq          $a3, 0x20($sp)
    ctx->pc = 0x25e9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 7));
    // 0x25e9d4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x25e9d4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x25e9d8: 0xc08c0ca  jal         func_230328
    ctx->pc = 0x25E9D8u;
    SET_GPR_U32(ctx, 31, 0x25E9E0u);
    ctx->pc = 0x25E9DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25E9D8u;
            // 0x25e9dc: 0x2228824  and         $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230328u;
    if (runtime->hasFunction(0x230328u)) {
        auto targetFn = runtime->lookupFunction(0x230328u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E9E0u; }
        if (ctx->pc != 0x25E9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230328_0x230328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E9E0u; }
        if (ctx->pc != 0x25E9E0u) { return; }
    }
    ctx->pc = 0x25E9E0u;
label_25e9e0:
    // 0x25e9e0: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x25e9e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e9e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25E9E4u;
    {
        const bool branch_taken_0x25e9e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E9E4u;
            // 0x25e9e8: 0x7ba70020  lq          $a3, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e9e4) {
            ctx->pc = 0x25E9F4u;
            goto label_25e9f4;
        }
    }
    ctx->pc = 0x25E9ECu;
    // 0x25e9ec: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x25E9ECu;
    {
        const bool branch_taken_0x25e9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E9F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E9ECu;
            // 0x25e9f0: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e9ec) {
            ctx->pc = 0x25EA9Cu;
            goto label_25ea9c;
        }
    }
    ctx->pc = 0x25E9F4u;
label_25e9f4:
    // 0x25e9f4: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x25e9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x25e9f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x25e9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e9fc: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x25e9fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ea00: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x25ea00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x25ea04: 0xc08c04a  jal         func_230128
    ctx->pc = 0x25EA04u;
    SET_GPR_U32(ctx, 31, 0x25EA0Cu);
    ctx->pc = 0x25EA08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25EA04u;
            // 0x25ea08: 0x7fa70020  sq          $a3, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230128u;
    if (runtime->hasFunction(0x230128u)) {
        auto targetFn = runtime->lookupFunction(0x230128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25EA0Cu; }
        if (ctx->pc != 0x25EA0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230128_0x230128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25EA0Cu; }
        if (ctx->pc != 0x25EA0Cu) { return; }
    }
    ctx->pc = 0x25EA0Cu;
label_25ea0c:
    // 0x25ea0c: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x25ea0cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ea10: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25EA10u;
    {
        const bool branch_taken_0x25ea10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EA14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EA10u;
            // 0x25ea14: 0x7ba70020  lq          $a3, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ea10) {
            ctx->pc = 0x25EA2Cu;
            goto label_25ea2c;
        }
    }
    ctx->pc = 0x25EA18u;
    // 0x25ea18: 0x21e1014  dsllv       $v0, $fp, $s0
    ctx->pc = 0x25ea18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) << (GPR_U32(ctx, 16) & 0x3F));
    // 0x25ea1c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x25ea1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x25ea20: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x25ea20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x25ea24: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x25ea24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x25ea28: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x25ea28u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_25ea2c:
    // 0x25ea2c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x25ea2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ea30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25ea30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ea34: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_25ea38:
    if (ctx->pc == 0x25EA38u) {
        ctx->pc = 0x25EA38u;
            // 0x25ea38: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x25EA3Cu;
        goto label_fallthrough_0x25ea34;
    }
    ctx->pc = 0x25EA34u;
    {
        const bool branch_taken_0x25ea34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EA38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EA34u;
            // 0x25ea38: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ea34) {
            ctx->pc = 0x25EA54u;
            goto label_25ea54;
        }
    }
label_fallthrough_0x25ea34:
    ctx->pc = 0x25EA3Cu;
    // 0x25ea3c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x25ea3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x25ea40: 0x0  nop
    ctx->pc = 0x25ea40u;
    // NOP
    // 0x25ea44: 0x0  nop
    ctx->pc = 0x25ea44u;
    // NOP
    // 0x25ea48: 0x0  nop
    ctx->pc = 0x25ea48u;
    // NOP
    // 0x25ea4c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x25EA4Cu;
    {
        const bool branch_taken_0x25ea4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EA50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EA4Cu;
            // 0x25ea50: 0x42042  srl         $a0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ea4c) {
            ctx->pc = 0x25EA38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25ea38;
        }
    }
    ctx->pc = 0x25EA54u;
label_25ea54:
    // 0x25ea54: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x25EA54u;
    {
        const bool branch_taken_0x25ea54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ea54) {
            ctx->pc = 0x25EA58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x25EA54u;
            // 0x25ea58: 0xaed40000  sw          $s4, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x25EA74u;
            goto label_25ea74;
        }
    }
    ctx->pc = 0x25EA5Cu;
    // 0x25ea5c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x25ea5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x25ea60: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x25ea60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x25ea64: 0x93102a  slt         $v0, $a0, $s3
    ctx->pc = 0x25ea64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x25ea68: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x25EA68u;
    {
        const bool branch_taken_0x25ea68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EA68u;
            // 0x25ea6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ea68) {
            ctx->pc = 0x25E9C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25e9c8;
        }
    }
    ctx->pc = 0x25EA70u;
label_25ea70:
    // 0x25ea70: 0xaed40000  sw          $s4, 0x0($s6)
    ctx->pc = 0x25ea70u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 20));
label_25ea74:
    // 0x25ea74: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x25ea74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x25ea78: 0x253102a  slt         $v0, $s2, $s3
    ctx->pc = 0x25ea78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x25ea7c: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x25EA7Cu;
    {
        const bool branch_taken_0x25ea7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EA80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EA7Cu;
            // 0x25ea80: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ea7c) {
            ctx->pc = 0x25E968u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25e968;
        }
    }
    ctx->pc = 0x25EA84u;
label_25ea84:
    // 0x25ea84: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x25ea84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x25ea88: 0x28e20003  slti        $v0, $a3, 0x3
    ctx->pc = 0x25ea88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x25ea8c: 0x1440ffb2  bnez        $v0, . + 4 + (-0x4E << 2)
    ctx->pc = 0x25EA8Cu;
    {
        const bool branch_taken_0x25ea8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EA8Cu;
            // 0x25ea90: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ea8c) {
            ctx->pc = 0x25E958u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25e958;
        }
    }
    ctx->pc = 0x25EA94u;
    // 0x25ea94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25ea94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ea98: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x25ea98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_25ea9c:
    // 0x25ea9c: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x25ea9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x25eaa0: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x25eaa0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x25eaa4: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x25eaa4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25eaa8: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x25eaa8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25eaac: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x25eaacu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25eab0: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x25eab0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25eab4: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x25eab4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25eab8: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x25eab8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25eabc: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x25eabcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25eac0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x25eac0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25eac4: 0x3e00008  jr          $ra
    ctx->pc = 0x25EAC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25EAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EAC4u;
            // 0x25eac8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25EACCu;
    // 0x25eacc: 0x0  nop
    ctx->pc = 0x25eaccu;
    // NOP
    ctx->pc = 0x25ead0u;
}
