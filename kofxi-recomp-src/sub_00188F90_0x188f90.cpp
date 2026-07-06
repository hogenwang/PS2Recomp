#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00188F90
// Address: 0x188f90 - 0x1890a0
void sub_00188F90_0x188f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00188F90_0x188f90");
#endif

    switch (ctx->pc) {
        case 0x189000u: goto label_189000;
        case 0x189014u: goto label_189014;
        case 0x189034u: goto label_189034;
        case 0x189060u: goto label_189060;
        case 0x189080u: goto label_189080;
        default: break;
    }

    ctx->pc = 0x188f90u;

    // 0x188f90: 0x8c82048c  lw          $v0, 0x48C($a0)
    ctx->pc = 0x188f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1164)));
    // 0x188f94: 0x30420840  andi        $v0, $v0, 0x840
    ctx->pc = 0x188f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2112);
    // 0x188f98: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x188F98u;
    {
        const bool branch_taken_0x188f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188f98) {
            ctx->pc = 0x188F9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x188F98u;
            // 0x188f9c: 0x8c820490  lw          $v0, 0x490($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1168)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x188FA8u;
            goto label_188fa8;
        }
    }
    ctx->pc = 0x188FA0u;
    // 0x188fa0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x188FA0u;
    {
        const bool branch_taken_0x188fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188FA0u;
            // 0x188fa4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188fa0) {
            ctx->pc = 0x188FF0u;
            goto label_188ff0;
        }
    }
    ctx->pc = 0x188FA8u;
label_188fa8:
    // 0x188fa8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x188fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x188fac: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x188FACu;
    {
        const bool branch_taken_0x188fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188fac) {
            ctx->pc = 0x188FB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x188FACu;
            // 0x188fb0: 0x8c830494  lw          $v1, 0x494($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x188FBCu;
            goto label_188fbc;
        }
    }
    ctx->pc = 0x188FB4u;
    // 0x188fb4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x188FB4u;
    {
        const bool branch_taken_0x188fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188FB4u;
            // 0x188fb8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188fb4) {
            ctx->pc = 0x188FF0u;
            goto label_188ff0;
        }
    }
    ctx->pc = 0x188FBCu;
label_188fbc:
    // 0x188fbc: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x188fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x188fc0: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x188fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x188fc4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x188fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x188fc8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x188FC8u;
    {
        const bool branch_taken_0x188fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188fc8) {
            ctx->pc = 0x188FCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x188FC8u;
            // 0x188fcc: 0x908204a4  lbu         $v0, 0x4A4($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1188)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x188FD8u;
            goto label_188fd8;
        }
    }
    ctx->pc = 0x188FD0u;
    // 0x188fd0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x188FD0u;
    {
        const bool branch_taken_0x188fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188FD0u;
            // 0x188fd4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188fd0) {
            ctx->pc = 0x188FF0u;
            goto label_188ff0;
        }
    }
    ctx->pc = 0x188FD8u;
label_188fd8:
    // 0x188fd8: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x188fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x188fdc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x188fdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x188fe0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x188fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x188fe4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x188fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x188fe8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x188fe8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x188fec: 0x21023  negu        $v0, $v0
    ctx->pc = 0x188fecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_188ff0:
    // 0x188ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x188FF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x188FF8u;
    // 0x188ff8: 0x0  nop
    ctx->pc = 0x188ff8u;
    // NOP
    // 0x188ffc: 0x0  nop
    ctx->pc = 0x188ffcu;
    // NOP
label_189000:
    // 0x189000: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x189000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x189004: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x189004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x189008: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x189008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18900c: 0xc062428  jal         func_1890A0
    ctx->pc = 0x18900Cu;
    SET_GPR_U32(ctx, 31, 0x189014u);
    ctx->pc = 0x189010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18900Cu;
            // 0x189010: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1890A0u;
    if (runtime->hasFunction(0x1890A0u)) {
        auto targetFn = runtime->lookupFunction(0x1890A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189014u; }
        if (ctx->pc != 0x189014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001890A0_0x1890a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189014u; }
        if (ctx->pc != 0x189014u) { return; }
    }
    ctx->pc = 0x189014u;
label_189014:
    // 0x189014: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x189014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x189018: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x189018u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x18901c: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18901Cu;
    {
        const bool branch_taken_0x18901c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x18901c) {
            ctx->pc = 0x189020u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18901Cu;
            // 0x189020: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18902Cu;
            goto label_18902c;
        }
    }
    ctx->pc = 0x189024u;
    // 0x189024: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x189024u;
    {
        const bool branch_taken_0x189024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189024u;
            // 0x189028: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189024) {
            ctx->pc = 0x189090u;
            goto label_189090;
        }
    }
    ctx->pc = 0x18902Cu;
label_18902c:
    // 0x18902c: 0xc062d5c  jal         func_18B570
    ctx->pc = 0x18902Cu;
    SET_GPR_U32(ctx, 31, 0x189034u);
    ctx->pc = 0x18B570u;
    if (runtime->hasFunction(0x18B570u)) {
        auto targetFn = runtime->lookupFunction(0x18B570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189034u; }
        if (ctx->pc != 0x189034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018B570_0x18b570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189034u; }
        if (ctx->pc != 0x189034u) { return; }
    }
    ctx->pc = 0x189034u;
label_189034:
    // 0x189034: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x189034u;
    {
        const bool branch_taken_0x189034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x189034) {
            ctx->pc = 0x189038u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x189034u;
            // 0x189038: 0x8e02048c  lw          $v0, 0x48C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1164)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x189044u;
            goto label_189044;
        }
    }
    ctx->pc = 0x18903Cu;
    // 0x18903c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x18903Cu;
    {
        const bool branch_taken_0x18903c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18903Cu;
            // 0x189040: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18903c) {
            ctx->pc = 0x189090u;
            goto label_189090;
        }
    }
    ctx->pc = 0x189044u;
label_189044:
    // 0x189044: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x189044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x189048: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x189048u;
    {
        const bool branch_taken_0x189048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189048) {
            ctx->pc = 0x18904Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x189048u;
            // 0x18904c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x189074u;
            goto label_189074;
        }
    }
    ctx->pc = 0x189050u;
    // 0x189050: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x189050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189054: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x189054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x189058: 0xc059318  jal         func_164C60
    ctx->pc = 0x189058u;
    SET_GPR_U32(ctx, 31, 0x189060u);
    ctx->pc = 0x18905Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189058u;
            // 0x18905c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164C60u;
    if (runtime->hasFunction(0x164C60u)) {
        auto targetFn = runtime->lookupFunction(0x164C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189060u; }
        if (ctx->pc != 0x189060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164C60_0x164c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189060u; }
        if (ctx->pc != 0x189060u) { return; }
    }
    ctx->pc = 0x189060u;
label_189060:
    // 0x189060: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x189060u;
    {
        const bool branch_taken_0x189060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189060) {
            ctx->pc = 0x189064u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x189060u;
            // 0x189064: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18906Cu;
            goto label_18906c;
        }
    }
    ctx->pc = 0x189068u;
    // 0x189068: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x189068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_18906c:
    // 0x18906c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x18906Cu;
    {
        const bool branch_taken_0x18906c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18906Cu;
            // 0x189070: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18906c) {
            ctx->pc = 0x189094u;
            goto label_189094;
        }
    }
    ctx->pc = 0x189074u;
label_189074:
    // 0x189074: 0x24050025  addiu       $a1, $zero, 0x25
    ctx->pc = 0x189074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x189078: 0xc059318  jal         func_164C60
    ctx->pc = 0x189078u;
    SET_GPR_U32(ctx, 31, 0x189080u);
    ctx->pc = 0x18907Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189078u;
            // 0x18907c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164C60u;
    if (runtime->hasFunction(0x164C60u)) {
        auto targetFn = runtime->lookupFunction(0x164C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189080u; }
        if (ctx->pc != 0x189080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164C60_0x164c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189080u; }
        if (ctx->pc != 0x189080u) { return; }
    }
    ctx->pc = 0x189080u;
label_189080:
    // 0x189080: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x189080u;
    {
        const bool branch_taken_0x189080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189080) {
            ctx->pc = 0x189084u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x189080u;
            // 0x189084: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x189090u;
            goto label_189090;
        }
    }
    ctx->pc = 0x189088u;
    // 0x189088: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x189088u;
    {
        const bool branch_taken_0x189088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18908Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189088u;
            // 0x18908c: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189088) {
            ctx->pc = 0x189090u;
            goto label_189090;
        }
    }
    ctx->pc = 0x189090u;
label_189090:
    // 0x189090: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x189090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_189094:
    // 0x189094: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x189094u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189098: 0x3e00008  jr          $ra
    ctx->pc = 0x189098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18909Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189098u;
            // 0x18909c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1890A0u;
    ctx->pc = 0x1890a0u;
}
