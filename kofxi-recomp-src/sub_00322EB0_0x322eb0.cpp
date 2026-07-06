#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00322EB0
// Address: 0x322eb0 - 0x3231a0
void sub_00322EB0_0x322eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322EB0_0x322eb0");
#endif

    switch (ctx->pc) {
        case 0x322ee8u: goto label_322ee8;
        case 0x322efcu: goto label_322efc;
        case 0x323034u: goto label_323034;
        case 0x323154u: goto label_323154;
        default: break;
    }

    ctx->pc = 0x322eb0u;

    // 0x322eb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x322eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x322eb4: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x322eb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x322eb8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x322eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x322ebc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x322ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x322ec0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x322ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x322ec4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x322ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x322ec8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x322ec8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322ecc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x322eccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x322ed0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x322ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322ed4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x322ed4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x322ed8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x322ed8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322edc: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x322edcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x322ee0: 0xc0c87f8  jal         func_321FE0
    ctx->pc = 0x322EE0u;
    SET_GPR_U32(ctx, 31, 0x322EE8u);
    ctx->pc = 0x322EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x322EE0u;
            // 0x322ee4: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x321FE0u;
    if (runtime->hasFunction(0x321FE0u)) {
        auto targetFn = runtime->lookupFunction(0x321FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322EE8u; }
        if (ctx->pc != 0x322EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321FE0_0x321fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322EE8u; }
        if (ctx->pc != 0x322EE8u) { return; }
    }
    ctx->pc = 0x322EE8u;
label_322ee8:
    // 0x322ee8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x322ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x322eec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x322eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322ef0: 0x94510006  lhu         $s1, 0x6($v0)
    ctx->pc = 0x322ef0u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x322ef4: 0xc0c8ab8  jal         func_322AE0
    ctx->pc = 0x322EF4u;
    SET_GPR_U32(ctx, 31, 0x322EFCu);
    ctx->pc = 0x322EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x322EF4u;
            // 0x322ef8: 0x94520004  lhu         $s2, 0x4($v0) (Delay Slot)
        SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x322AE0u;
    if (runtime->hasFunction(0x322AE0u)) {
        auto targetFn = runtime->lookupFunction(0x322AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322EFCu; }
        if (ctx->pc != 0x322EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00322AE0_0x322ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322EFCu; }
        if (ctx->pc != 0x322EFCu) { return; }
    }
    ctx->pc = 0x322EFCu;
label_322efc:
    // 0x322efc: 0x3247ffff  andi        $a3, $s2, 0xFFFF
    ctx->pc = 0x322efcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x322f00: 0x3225ffff  andi        $a1, $s1, 0xFFFF
    ctx->pc = 0x322f00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x322f04: 0xa7082a  slt         $at, $a1, $a3
    ctx->pc = 0x322f04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x322f08: 0x1420009b  bnez        $at, . + 4 + (0x9B << 2)
    ctx->pc = 0x322F08u;
    {
        const bool branch_taken_0x322f08 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x322F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322F08u;
            // 0x322f0c: 0x3044ffff  andi        $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x322f08) {
            ctx->pc = 0x323178u;
            goto label_323178;
        }
    }
    ctx->pc = 0x322F10u;
    // 0x322f10: 0xa76023  subu        $t4, $a1, $a3
    ctx->pc = 0x322f10u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x322f14: 0x258b0001  addiu       $t3, $t4, 0x1
    ctx->pc = 0x322f14u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x322f18: 0x29610009  slti        $at, $t3, 0x9
    ctx->pc = 0x322f18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x322f1c: 0x1420007e  bnez        $at, . + 4 + (0x7E << 2)
    ctx->pc = 0x322F1Cu;
    {
        const bool branch_taken_0x322f1c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x322F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322F1Cu;
            // 0x322f20: 0x24a3fff8  addiu       $v1, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322f1c) {
            ctx->pc = 0x323118u;
            goto label_323118;
        }
    }
    ctx->pc = 0x322F24u;
    // 0x322f24: 0xa7082a  slt         $at, $a1, $a3
    ctx->pc = 0x322f24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x322f28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x322f28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322f2c: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x322f2cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322f30: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x322f30u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322f34: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x322f34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322f38: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x322F38u;
    {
        const bool branch_taken_0x322f38 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x322F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322F38u;
            // 0x322f3c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322f38) {
            ctx->pc = 0x322F58u;
            goto label_322f58;
        }
    }
    ctx->pc = 0x322F40u;
    // 0x322f40: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x322f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
    // 0x322f44: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x322f44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x322f48: 0xa1082a  slt         $at, $a1, $at
    ctx->pc = 0x322f48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x322f4c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x322F4Cu;
    {
        const bool branch_taken_0x322f4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x322f4c) {
            ctx->pc = 0x322F58u;
            goto label_322f58;
        }
    }
    ctx->pc = 0x322F54u;
    // 0x322f54: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x322f54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_322f58:
    // 0x322f58: 0x11000007  beqz        $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x322F58u;
    {
        const bool branch_taken_0x322f58 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x322f58) {
            ctx->pc = 0x322F78u;
            goto label_322f78;
        }
    }
    ctx->pc = 0x322F60u;
    // 0x322f60: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x322f60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
    // 0x322f64: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x322f64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x322f68: 0xe1082a  slt         $at, $a3, $at
    ctx->pc = 0x322f68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x322f6c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x322F6Cu;
    {
        const bool branch_taken_0x322f6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x322f6c) {
            ctx->pc = 0x322F78u;
            goto label_322f78;
        }
    }
    ctx->pc = 0x322F74u;
    // 0x322f74: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x322f74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_322f78:
    // 0x322f78: 0x11200005  beqz        $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x322F78u;
    {
        const bool branch_taken_0x322f78 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x322f78) {
            ctx->pc = 0x322F90u;
            goto label_322f90;
        }
    }
    ctx->pc = 0x322F80u;
    // 0x322f80: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x322f80u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x322f84: 0x10e80002  beq         $a3, $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x322F84u;
    {
        const bool branch_taken_0x322f84 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 8));
        if (branch_taken_0x322f84) {
            ctx->pc = 0x322F90u;
            goto label_322f90;
        }
    }
    ctx->pc = 0x322F8Cu;
    // 0x322f8c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x322f8cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_322f90:
    // 0x322f90: 0x1140000e  beqz        $t2, . + 4 + (0xE << 2)
    ctx->pc = 0x322F90u;
    {
        const bool branch_taken_0x322f90 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x322f90) {
            ctx->pc = 0x322FCCu;
            goto label_322fcc;
        }
    }
    ctx->pc = 0x322F98u;
    // 0x322f98: 0x3c0a8000  lui         $t2, 0x8000
    ctx->pc = 0x322f98u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32768 << 16));
    // 0x322f9c: 0x74023  negu        $t0, $a3
    ctx->pc = 0x322f9cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x322fa0: 0xaa4824  and         $t1, $a1, $t2
    ctx->pc = 0x322fa0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) & GPR_U64(ctx, 10));
    // 0x322fa4: 0x10a4024  and         $t0, $t0, $t2
    ctx->pc = 0x322fa4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 10));
    // 0x322fa8: 0x15280005  bne         $t1, $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x322FA8u;
    {
        const bool branch_taken_0x322fa8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 8));
        ctx->pc = 0x322FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322FA8u;
            // 0x322fac: 0x240d0001  addiu       $t5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322fa8) {
            ctx->pc = 0x322FC0u;
            goto label_322fc0;
        }
    }
    ctx->pc = 0x322FB0u;
    // 0x322fb0: 0x18a4024  and         $t0, $t4, $t2
    ctx->pc = 0x322fb0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 12) & GPR_U64(ctx, 10));
    // 0x322fb4: 0x11280002  beq         $t1, $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x322FB4u;
    {
        const bool branch_taken_0x322fb4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 8));
        if (branch_taken_0x322fb4) {
            ctx->pc = 0x322FC0u;
            goto label_322fc0;
        }
    }
    ctx->pc = 0x322FBCu;
    // 0x322fbc: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x322fbcu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_322fc0:
    // 0x322fc0: 0x11a00002  beqz        $t5, . + 4 + (0x2 << 2)
    ctx->pc = 0x322FC0u;
    {
        const bool branch_taken_0x322fc0 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x322fc0) {
            ctx->pc = 0x322FCCu;
            goto label_322fcc;
        }
    }
    ctx->pc = 0x322FC8u;
    // 0x322fc8: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x322fc8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_322fcc:
    // 0x322fcc: 0x11c0000c  beqz        $t6, . + 4 + (0xC << 2)
    ctx->pc = 0x322FCCu;
    {
        const bool branch_taken_0x322fcc = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x322fcc) {
            ctx->pc = 0x323000u;
            goto label_323000;
        }
    }
    ctx->pc = 0x322FD4u;
    // 0x322fd4: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x322fd4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x322fd8: 0x1894024  and         $t0, $t4, $t1
    ctx->pc = 0x322fd8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 12) & GPR_U64(ctx, 9));
    // 0x322fdc: 0x15000005  bnez        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x322FDCu;
    {
        const bool branch_taken_0x322fdc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x322FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322FDCu;
            // 0x322fe0: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322fdc) {
            ctx->pc = 0x322FF4u;
            goto label_322ff4;
        }
    }
    ctx->pc = 0x322FE4u;
    // 0x322fe4: 0x1694024  and         $t0, $t3, $t1
    ctx->pc = 0x322fe4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 11) & GPR_U64(ctx, 9));
    // 0x322fe8: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x322FE8u;
    {
        const bool branch_taken_0x322fe8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x322fe8) {
            ctx->pc = 0x322FF4u;
            goto label_322ff4;
        }
    }
    ctx->pc = 0x322FF0u;
    // 0x322ff0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x322ff0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_322ff4:
    // 0x322ff4: 0x11400002  beqz        $t2, . + 4 + (0x2 << 2)
    ctx->pc = 0x322FF4u;
    {
        const bool branch_taken_0x322ff4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x322ff4) {
            ctx->pc = 0x323000u;
            goto label_323000;
        }
    }
    ctx->pc = 0x322FFCu;
    // 0x322ffc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x322ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_323000:
    // 0x323000: 0x10c00045  beqz        $a2, . + 4 + (0x45 << 2)
    ctx->pc = 0x323000u;
    {
        const bool branch_taken_0x323000 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x323000) {
            ctx->pc = 0x323118u;
            goto label_323118;
        }
    }
    ctx->pc = 0x323008u;
    // 0x323008: 0x43040  sll         $a2, $a0, 1
    ctx->pc = 0x323008u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x32300c: 0x3c0801dd  lui         $t0, 0x1DD
    ctx->pc = 0x32300cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)477 << 16));
    // 0x323010: 0xc44821  addu        $t1, $a2, $a0
    ctx->pc = 0x323010u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x323014: 0x25089410  addiu       $t0, $t0, -0x6BF0
    ctx->pc = 0x323014u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294939664));
    // 0x323018: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x323018u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x32301c: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x32301cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x323020: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x323020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x323024: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x323024u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x323028: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x323028u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x32302c: 0xc86821  addu        $t5, $a2, $t0
    ctx->pc = 0x32302cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x323030: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x323030u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_323034:
    // 0x323034: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x323034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x323038: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x323038u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x32303c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x32303cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x323040: 0x260c0002  addiu       $t4, $s0, 0x2
    ctx->pc = 0x323040u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x323044: 0x468001a0  cvt.s.w     $f6, $f0
    ctx->pc = 0x323044u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x323048: 0x260b0003  addiu       $t3, $s0, 0x3
    ctx->pc = 0x323048u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x32304c: 0x260a0004  addiu       $t2, $s0, 0x4
    ctx->pc = 0x32304cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x323050: 0x26090005  addiu       $t1, $s0, 0x5
    ctx->pc = 0x323050u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
    // 0x323054: 0x26080006  addiu       $t0, $s0, 0x6
    ctx->pc = 0x323054u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    // 0x323058: 0x26060007  addiu       $a2, $s0, 0x7
    ctx->pc = 0x323058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 7));
    // 0x32305c: 0x67082a  slt         $at, $v1, $a3
    ctx->pc = 0x32305cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x323060: 0x448c0000  mtc1        $t4, $f0
    ctx->pc = 0x323060u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x323064: 0x0  nop
    ctx->pc = 0x323064u;
    // NOP
    // 0x323068: 0x46800160  cvt.s.w     $f5, $f0
    ctx->pc = 0x323068u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x32306c: 0x448b0000  mtc1        $t3, $f0
    ctx->pc = 0x32306cu;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x323070: 0x0  nop
    ctx->pc = 0x323070u;
    // NOP
    // 0x323074: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x323074u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x323078: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x323078u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32307c: 0x0  nop
    ctx->pc = 0x32307cu;
    // NOP
    // 0x323080: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x323080u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x323084: 0x44904000  mtc1        $s0, $f8
    ctx->pc = 0x323084u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x323088: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x323088u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32308c: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x32308cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x323090: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x323090u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x323094: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x323094u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x323098: 0x0  nop
    ctx->pc = 0x323098u;
    // NOP
    // 0x32309c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32309cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3230a0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3230a0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3230a4: 0x46804220  cvt.s.w     $f8, $f8
    ctx->pc = 0x3230a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[8], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
    // 0x3230a8: 0x46153818  adda.s      $f7, $f21
    ctx->pc = 0x3230a8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[21]);
    // 0x3230ac: 0x4608a21c  madd.s      $f8, $f20, $f8
    ctx->pc = 0x3230acu;
    ctx->f[8] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[8]));
    // 0x3230b0: 0x46153818  adda.s      $f7, $f21
    ctx->pc = 0x3230b0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[21]);
    // 0x3230b4: 0x4606a19c  madd.s      $f6, $f20, $f6
    ctx->pc = 0x3230b4u;
    ctx->f[6] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[6]));
    // 0x3230b8: 0x46153818  adda.s      $f7, $f21
    ctx->pc = 0x3230b8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[21]);
    // 0x3230bc: 0x4605a15c  madd.s      $f5, $f20, $f5
    ctx->pc = 0x3230bcu;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[5]));
    // 0x3230c0: 0x46153818  adda.s      $f7, $f21
    ctx->pc = 0x3230c0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[21]);
    // 0x3230c4: 0x4604a11c  madd.s      $f4, $f20, $f4
    ctx->pc = 0x3230c4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[4]));
    // 0x3230c8: 0x46153818  adda.s      $f7, $f21
    ctx->pc = 0x3230c8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[21]);
    // 0x3230cc: 0xe5a80010  swc1        $f8, 0x10($t5)
    ctx->pc = 0x3230ccu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 16), bits); }
    // 0x3230d0: 0x4603a0dc  madd.s      $f3, $f20, $f3
    ctx->pc = 0x3230d0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[3]));
    // 0x3230d4: 0xe5a60028  swc1        $f6, 0x28($t5)
    ctx->pc = 0x3230d4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 40), bits); }
    // 0x3230d8: 0x46153818  adda.s      $f7, $f21
    ctx->pc = 0x3230d8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[21]);
    // 0x3230dc: 0xe5a50040  swc1        $f5, 0x40($t5)
    ctx->pc = 0x3230dcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 64), bits); }
    // 0x3230e0: 0x4602a09c  madd.s      $f2, $f20, $f2
    ctx->pc = 0x3230e0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[2]));
    // 0x3230e4: 0xe5a40058  swc1        $f4, 0x58($t5)
    ctx->pc = 0x3230e4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 88), bits); }
    // 0x3230e8: 0x46153818  adda.s      $f7, $f21
    ctx->pc = 0x3230e8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[21]);
    // 0x3230ec: 0xe5a30070  swc1        $f3, 0x70($t5)
    ctx->pc = 0x3230ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 112), bits); }
    // 0x3230f0: 0x4601a05c  madd.s      $f1, $f20, $f1
    ctx->pc = 0x3230f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[1]));
    // 0x3230f4: 0xe5a20088  swc1        $f2, 0x88($t5)
    ctx->pc = 0x3230f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 136), bits); }
    // 0x3230f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3230f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3230fc: 0x46153818  adda.s      $f7, $f21
    ctx->pc = 0x3230fcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[21]);
    // 0x323100: 0xe5a100a0  swc1        $f1, 0xA0($t5)
    ctx->pc = 0x323100u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 160), bits); }
    // 0x323104: 0x4600a01c  madd.s      $f0, $f20, $f0
    ctx->pc = 0x323104u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[0]));
    // 0x323108: 0xe5a000b8  swc1        $f0, 0xB8($t5)
    ctx->pc = 0x323108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 184), bits); }
    // 0x32310c: 0x1020ffc9  beqz        $at, . + 4 + (-0x37 << 2)
    ctx->pc = 0x32310Cu;
    {
        const bool branch_taken_0x32310c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x323110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32310Cu;
            // 0x323110: 0x25ad00c0  addiu       $t5, $t5, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32310c) {
            ctx->pc = 0x323034u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_323034;
        }
    }
    ctx->pc = 0x323114u;
    // 0x323114: 0x0  nop
    ctx->pc = 0x323114u;
    // NOP
label_323118:
    // 0x323118: 0xa7082a  slt         $at, $a1, $a3
    ctx->pc = 0x323118u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x32311c: 0x14200016  bnez        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x32311Cu;
    {
        const bool branch_taken_0x32311c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x32311c) {
            ctx->pc = 0x323178u;
            goto label_323178;
        }
    }
    ctx->pc = 0x323124u;
    // 0x323124: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x323124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x323128: 0x3c0601dd  lui         $a2, 0x1DD
    ctx->pc = 0x323128u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)477 << 16));
    // 0x32312c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x32312cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x323130: 0x24c69410  addiu       $a2, $a2, -0x6BF0
    ctx->pc = 0x323130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939664));
    // 0x323134: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x323134u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x323138: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x323138u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x32313c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x32313cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x323140: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x323140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x323144: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x323144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x323148: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x323148u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32314c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32314cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x323150: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x323150u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_323154:
    // 0x323154: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x323154u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x323158: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x323158u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x32315c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32315cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x323160: 0xa7082a  slt         $at, $a1, $a3
    ctx->pc = 0x323160u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x323164: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x323164u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x323168: 0x4600a01c  madd.s      $f0, $f20, $f0
    ctx->pc = 0x323168u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[0]));
    // 0x32316c: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x32316cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x323170: 0x1020fff8  beqz        $at, . + 4 + (-0x8 << 2)
    ctx->pc = 0x323170u;
    {
        const bool branch_taken_0x323170 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x323174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x323170u;
            // 0x323174: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323170) {
            ctx->pc = 0x323154u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_323154;
        }
    }
    ctx->pc = 0x323178u;
label_323178:
    // 0x323178: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x323178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32317c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x32317cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x323180: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x323180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x323184: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x323184u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x323188: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x323188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x32318c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32318cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323190: 0x3e00008  jr          $ra
    ctx->pc = 0x323190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x323190u;
            // 0x323194: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x323198u;
    // 0x323198: 0x0  nop
    ctx->pc = 0x323198u;
    // NOP
    // 0x32319c: 0x0  nop
    ctx->pc = 0x32319cu;
    // NOP
    ctx->pc = 0x3231a0u;
}
