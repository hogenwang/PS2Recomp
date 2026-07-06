#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00346F20
// Address: 0x346f20 - 0x347260
void sub_00346F20_0x346f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00346F20_0x346f20");
#endif

    switch (ctx->pc) {
        case 0x346f30u: goto label_346f30;
        case 0x346f40u: goto label_346f40;
        case 0x346fb0u: goto label_346fb0;
        case 0x346fc8u: goto label_346fc8;
        case 0x346fdcu: goto label_346fdc;
        case 0x346fecu: goto label_346fec;
        case 0x346ffcu: goto label_346ffc;
        case 0x347010u: goto label_347010;
        case 0x347020u: goto label_347020;
        case 0x34705cu: goto label_34705c;
        case 0x347074u: goto label_347074;
        case 0x347088u: goto label_347088;
        case 0x347098u: goto label_347098;
        case 0x3470a8u: goto label_3470a8;
        case 0x3470c0u: goto label_3470c0;
        case 0x347148u: goto label_347148;
        case 0x347164u: goto label_347164;
        case 0x3471a0u: goto label_3471a0;
        case 0x3471b4u: goto label_3471b4;
        case 0x3471c4u: goto label_3471c4;
        case 0x3471f8u: goto label_3471f8;
        case 0x347208u: goto label_347208;
        case 0x34721cu: goto label_34721c;
        case 0x347248u: goto label_347248;
        default: break;
    }

    ctx->pc = 0x346f20u;

label_346f20:
    // 0x346f20: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x346f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x346f24: 0x8083caa  j           func_20F2A8
    ctx->pc = 0x346F24u;
    ctx->pc = 0x346F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346F24u;
            // 0x346f28: 0x8c44eab8  lw          $a0, -0x1548($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961848)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20F2A8u;
    if (runtime->hasFunction(0x20F2A8u)) {
        auto targetFn = runtime->lookupFunction(0x20F2A8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0020F2A8_0x20f2a8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x346F2Cu;
    // 0x346f2c: 0x0  nop
    ctx->pc = 0x346f2cu;
    // NOP
label_346f30:
    // 0x346f30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x346f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x346f34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x346f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x346f38: 0xc0d1bc8  jal         func_346F20
    ctx->pc = 0x346F38u;
    SET_GPR_U32(ctx, 31, 0x346F40u);
    ctx->pc = 0x346F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346F38u;
            // 0x346f3c: 0x7fb00010  sq          $s0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x346F20u;
    goto label_346f20;
    ctx->pc = 0x346F40u;
label_346f40:
    // 0x346f40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x346f40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346f44: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x346f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x346f48: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x346f48u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x346f4c: 0x5020002c  beql        $at, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x346F4Cu;
    {
        const bool branch_taken_0x346f4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x346f4c) {
            ctx->pc = 0x346F50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x346F4Cu;
            // 0x346f50: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x347000u;
            goto label_347000;
        }
    }
    ctx->pc = 0x346F54u;
    // 0x346f54: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x346f54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x346f58: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x346f58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x346f5c: 0x248451c0  addiu       $a0, $a0, 0x51C0
    ctx->pc = 0x346f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20928));
    // 0x346f60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x346f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x346f64: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x346f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x346f68: 0x600008  jr          $v1
    ctx->pc = 0x346F68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x346F70u: goto label_346f70;
            case 0x346FD0u: goto label_346fd0;
            case 0x346FE4u: goto label_346fe4;
            case 0x346FF4u: goto label_346ff4;
            case 0x346FFCu: goto label_346ffc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x346F70u;
label_346f70:
    // 0x346f70: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x346f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x346f74: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x346f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x346f78: 0x8c46ead0  lw          $a2, -0x1530($v0)
    ctx->pc = 0x346f78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961872)));
    // 0x346f7c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x346f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x346f80: 0x240900b4  addiu       $t1, $zero, 0xB4
    ctx->pc = 0x346f80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x346f84: 0x8cc5010c  lw          $a1, 0x10C($a2)
    ctx->pc = 0x346f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 268)));
    // 0x346f88: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x346f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x346f8c: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x346f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x346f90: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x346f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
    // 0x346f94: 0x8c64eab8  lw          $a0, -0x1548($v1)
    ctx->pc = 0x346f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961848)));
    // 0x346f98: 0x8c4540a0  lw          $a1, 0x40A0($v0)
    ctx->pc = 0x346f98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16544)));
    // 0x346f9c: 0x8cc70100  lw          $a3, 0x100($a2)
    ctx->pc = 0x346f9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 256)));
    // 0x346fa0: 0x8cc80104  lw          $t0, 0x104($a2)
    ctx->pc = 0x346fa0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 260)));
    // 0x346fa4: 0x8cca0108  lw          $t2, 0x108($a2)
    ctx->pc = 0x346fa4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 264)));
    // 0x346fa8: 0xc083cb6  jal         func_20F2D8
    ctx->pc = 0x346FA8u;
    SET_GPR_U32(ctx, 31, 0x346FB0u);
    ctx->pc = 0x346FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346FA8u;
            // 0x346fac: 0x240b0400  addiu       $t3, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20F2D8u;
    if (runtime->hasFunction(0x20F2D8u)) {
        auto targetFn = runtime->lookupFunction(0x20F2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346FB0u; }
        if (ctx->pc != 0x346FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020F2D8_0x20f2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346FB0u; }
        if (ctx->pc != 0x346FB0u) { return; }
    }
    ctx->pc = 0x346FB0u;
label_346fb0:
    // 0x346fb0: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x346fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x346fb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x346fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346fb8: 0x24846f20  addiu       $a0, $a0, 0x6F20
    ctx->pc = 0x346fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28448));
    // 0x346fbc: 0x24061770  addiu       $a2, $zero, 0x1770
    ctx->pc = 0x346fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
    // 0x346fc0: 0xc0d175c  jal         func_345D70
    ctx->pc = 0x346FC0u;
    SET_GPR_U32(ctx, 31, 0x346FC8u);
    ctx->pc = 0x346FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346FC0u;
            // 0x346fc4: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x345D70u;
    if (runtime->hasFunction(0x345D70u)) {
        auto targetFn = runtime->lookupFunction(0x345D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346FC8u; }
        if (ctx->pc != 0x346FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00345D70_0x345d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346FC8u; }
        if (ctx->pc != 0x346FC8u) { return; }
    }
    ctx->pc = 0x346FC8u;
label_346fc8:
    // 0x346fc8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x346FC8u;
    {
        const bool branch_taken_0x346fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x346fc8) {
            ctx->pc = 0x346FFCu;
            goto label_346ffc;
        }
    }
    ctx->pc = 0x346FD0u;
label_346fd0:
    // 0x346fd0: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x346fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x346fd4: 0xc082674  jal         func_2099D0
    ctx->pc = 0x346FD4u;
    SET_GPR_U32(ctx, 31, 0x346FDCu);
    ctx->pc = 0x346FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346FD4u;
            // 0x346fd8: 0x8c44f78c  lw          $a0, -0x874($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965132)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346FDCu; }
        if (ctx->pc != 0x346FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346FDCu; }
        if (ctx->pc != 0x346FDCu) { return; }
    }
    ctx->pc = 0x346FDCu;
label_346fdc:
    // 0x346fdc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x346FDCu;
    {
        const bool branch_taken_0x346fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x346fdc) {
            ctx->pc = 0x346FFCu;
            goto label_346ffc;
        }
    }
    ctx->pc = 0x346FE4u;
label_346fe4:
    // 0x346fe4: 0xc0d1b18  jal         func_346C60
    ctx->pc = 0x346FE4u;
    SET_GPR_U32(ctx, 31, 0x346FECu);
    ctx->pc = 0x346FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346FE4u;
            // 0x346fe8: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x346C60u;
    if (runtime->hasFunction(0x346C60u)) {
        auto targetFn = runtime->lookupFunction(0x346C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346FECu; }
        if (ctx->pc != 0x346FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00346C60_0x346c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346FECu; }
        if (ctx->pc != 0x346FECu) { return; }
    }
    ctx->pc = 0x346FECu;
label_346fec:
    // 0x346fec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x346FECu;
    {
        const bool branch_taken_0x346fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x346fec) {
            ctx->pc = 0x346FFCu;
            goto label_346ffc;
        }
    }
    ctx->pc = 0x346FF4u;
label_346ff4:
    // 0x346ff4: 0xc0d1b18  jal         func_346C60
    ctx->pc = 0x346FF4u;
    SET_GPR_U32(ctx, 31, 0x346FFCu);
    ctx->pc = 0x346FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346FF4u;
            // 0x346ff8: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x346C60u;
    if (runtime->hasFunction(0x346C60u)) {
        auto targetFn = runtime->lookupFunction(0x346C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346FFCu; }
        if (ctx->pc != 0x346FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00346C60_0x346c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346FFCu; }
        if (ctx->pc != 0x346FFCu) { return; }
    }
    ctx->pc = 0x346FFCu;
label_346ffc:
    // 0x346ffc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x346ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_347000:
    // 0x347000: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x347000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x347004: 0x3e00008  jr          $ra
    ctx->pc = 0x347004u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x347004u;
            // 0x347008: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34700Cu;
    // 0x34700c: 0x0  nop
    ctx->pc = 0x34700cu;
    // NOP
label_347010:
    // 0x347010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x347010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x347014: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x347014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x347018: 0xc0d1bc8  jal         func_346F20
    ctx->pc = 0x347018u;
    SET_GPR_U32(ctx, 31, 0x347020u);
    ctx->pc = 0x34701Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x347018u;
            // 0x34701c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x346F20u;
    goto label_346f20;
    ctx->pc = 0x347020u;
label_347020:
    // 0x347020: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x347020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347024: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x347024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x347028: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x347028u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x34702c: 0x5020001f  beql        $at, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x34702Cu;
    {
        const bool branch_taken_0x34702c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34702c) {
            ctx->pc = 0x347030u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34702Cu;
            // 0x347030: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3470ACu;
            goto label_3470ac;
        }
    }
    ctx->pc = 0x347034u;
    // 0x347034: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x347034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x347038: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x347038u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34703c: 0x248451e0  addiu       $a0, $a0, 0x51E0
    ctx->pc = 0x34703cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20960));
    // 0x347040: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x347040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x347044: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x347044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x347048: 0x600008  jr          $v1
    ctx->pc = 0x347048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x347050u: goto label_347050;
            case 0x34707Cu: goto label_34707c;
            case 0x347090u: goto label_347090;
            case 0x3470A0u: goto label_3470a0;
            case 0x3470A8u: goto label_3470a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x347050u;
label_347050:
    // 0x347050: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x347050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x347054: 0xc083d6c  jal         func_20F5B0
    ctx->pc = 0x347054u;
    SET_GPR_U32(ctx, 31, 0x34705Cu);
    ctx->pc = 0x347058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x347054u;
            // 0x347058: 0x8c44eab8  lw          $a0, -0x1548($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961848)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20F5B0u;
    if (runtime->hasFunction(0x20F5B0u)) {
        auto targetFn = runtime->lookupFunction(0x20F5B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34705Cu; }
        if (ctx->pc != 0x34705Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020F5B0_0x20f5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34705Cu; }
        if (ctx->pc != 0x34705Cu) { return; }
    }
    ctx->pc = 0x34705Cu;
label_34705c:
    // 0x34705c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x34705cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x347060: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x347060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347064: 0x24846f20  addiu       $a0, $a0, 0x6F20
    ctx->pc = 0x347064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28448));
    // 0x347068: 0x24061770  addiu       $a2, $zero, 0x1770
    ctx->pc = 0x347068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
    // 0x34706c: 0xc0d175c  jal         func_345D70
    ctx->pc = 0x34706Cu;
    SET_GPR_U32(ctx, 31, 0x347074u);
    ctx->pc = 0x347070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34706Cu;
            // 0x347070: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x345D70u;
    if (runtime->hasFunction(0x345D70u)) {
        auto targetFn = runtime->lookupFunction(0x345D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347074u; }
        if (ctx->pc != 0x347074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00345D70_0x345d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347074u; }
        if (ctx->pc != 0x347074u) { return; }
    }
    ctx->pc = 0x347074u;
label_347074:
    // 0x347074: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x347074u;
    {
        const bool branch_taken_0x347074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x347074) {
            ctx->pc = 0x3470A8u;
            goto label_3470a8;
        }
    }
    ctx->pc = 0x34707Cu;
label_34707c:
    // 0x34707c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x34707cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x347080: 0xc082674  jal         func_2099D0
    ctx->pc = 0x347080u;
    SET_GPR_U32(ctx, 31, 0x347088u);
    ctx->pc = 0x347084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x347080u;
            // 0x347084: 0x8c44f78c  lw          $a0, -0x874($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965132)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347088u; }
        if (ctx->pc != 0x347088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347088u; }
        if (ctx->pc != 0x347088u) { return; }
    }
    ctx->pc = 0x347088u;
label_347088:
    // 0x347088: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x347088u;
    {
        const bool branch_taken_0x347088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x347088) {
            ctx->pc = 0x3470A8u;
            goto label_3470a8;
        }
    }
    ctx->pc = 0x347090u;
label_347090:
    // 0x347090: 0xc0d1b18  jal         func_346C60
    ctx->pc = 0x347090u;
    SET_GPR_U32(ctx, 31, 0x347098u);
    ctx->pc = 0x347094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x347090u;
            // 0x347094: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x346C60u;
    if (runtime->hasFunction(0x346C60u)) {
        auto targetFn = runtime->lookupFunction(0x346C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347098u; }
        if (ctx->pc != 0x347098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00346C60_0x346c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347098u; }
        if (ctx->pc != 0x347098u) { return; }
    }
    ctx->pc = 0x347098u;
label_347098:
    // 0x347098: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x347098u;
    {
        const bool branch_taken_0x347098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x347098) {
            ctx->pc = 0x3470A8u;
            goto label_3470a8;
        }
    }
    ctx->pc = 0x3470A0u;
label_3470a0:
    // 0x3470a0: 0xc0d1b18  jal         func_346C60
    ctx->pc = 0x3470A0u;
    SET_GPR_U32(ctx, 31, 0x3470A8u);
    ctx->pc = 0x3470A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3470A0u;
            // 0x3470a4: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x346C60u;
    if (runtime->hasFunction(0x346C60u)) {
        auto targetFn = runtime->lookupFunction(0x346C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3470A8u; }
        if (ctx->pc != 0x3470A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00346C60_0x346c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3470A8u; }
        if (ctx->pc != 0x3470A8u) { return; }
    }
    ctx->pc = 0x3470A8u;
label_3470a8:
    // 0x3470a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3470a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3470ac:
    // 0x3470ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3470acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3470b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3470B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3470B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3470B0u;
            // 0x3470b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3470B8u;
    // 0x3470b8: 0x0  nop
    ctx->pc = 0x3470b8u;
    // NOP
    // 0x3470bc: 0x0  nop
    ctx->pc = 0x3470bcu;
    // NOP
label_3470c0:
    // 0x3470c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3470c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3470c4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3470c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3470c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3470c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3470cc: 0x8c63eac0  lw          $v1, -0x1540($v1)
    ctx->pc = 0x3470ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961856)));
    // 0x3470d0: 0x10600052  beqz        $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x3470D0u;
    {
        const bool branch_taken_0x3470d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3470d0) {
            ctx->pc = 0x34721Cu;
            goto label_34721c;
        }
    }
    ctx->pc = 0x3470D8u;
    // 0x3470d8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3470d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3470dc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x3470dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3470e0: 0x8c65eac8  lw          $a1, -0x1538($v1)
    ctx->pc = 0x3470e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961864)));
    // 0x3470e4: 0x50a4004b  beql        $a1, $a0, . + 4 + (0x4B << 2)
    ctx->pc = 0x3470E4u;
    {
        const bool branch_taken_0x3470e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x3470e4) {
            ctx->pc = 0x3470E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3470E4u;
            // 0x3470e8: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
            ctx->pc = 0x347214u;
            goto label_347214;
        }
    }
    ctx->pc = 0x3470ECu;
    // 0x3470ec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3470ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3470f0: 0x10a30047  beq         $a1, $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x3470F0u;
    {
        const bool branch_taken_0x3470f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3470f0) {
            ctx->pc = 0x347210u;
            goto label_347210;
        }
    }
    ctx->pc = 0x3470F8u;
    // 0x3470f8: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x3470f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3470fc: 0x50a30040  beql        $a1, $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x3470FCu;
    {
        const bool branch_taken_0x3470fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3470fc) {
            ctx->pc = 0x347100u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3470FCu;
            // 0x347100: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
            ctx->pc = 0x347200u;
            goto label_347200;
        }
    }
    ctx->pc = 0x347104u;
    // 0x347104: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x347104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x347108: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x347108u;
    {
        const bool branch_taken_0x347108 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x347108) {
            ctx->pc = 0x347118u;
            goto label_347118;
        }
    }
    ctx->pc = 0x347110u;
    // 0x347110: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x347110u;
    {
        const bool branch_taken_0x347110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x347110) {
            ctx->pc = 0x34721Cu;
            goto label_34721c;
        }
    }
    ctx->pc = 0x347118u;
label_347118:
    // 0x347118: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x347118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34711c: 0x8042fe7b  lb          $v0, -0x185($v0)
    ctx->pc = 0x34711cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294966907)));
    // 0x347120: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x347120u;
    {
        const bool branch_taken_0x347120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x347120) {
            ctx->pc = 0x3471CCu;
            goto label_3471cc;
        }
    }
    ctx->pc = 0x347128u;
    // 0x347128: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x347128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34712c: 0x24034221  addiu       $v1, $zero, 0x4221
    ctx->pc = 0x34712cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16929));
    // 0x347130: 0x9444fe72  lhu         $a0, -0x18E($v0)
    ctx->pc = 0x347130u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294966898)));
    // 0x347134: 0x54830006  bnel        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x347134u;
    {
        const bool branch_taken_0x347134 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x347134) {
            ctx->pc = 0x347138u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x347134u;
            // 0x347138: 0x24023131  addiu       $v0, $zero, 0x3131 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12593));
        ctx->in_delay_slot = false;
            ctx->pc = 0x347150u;
            goto label_347150;
        }
    }
    ctx->pc = 0x34713Cu;
    // 0x34713c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x34713cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x347140: 0xc082674  jal         func_2099D0
    ctx->pc = 0x347140u;
    SET_GPR_U32(ctx, 31, 0x347148u);
    ctx->pc = 0x347144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x347140u;
            // 0x347144: 0x24847640  addiu       $a0, $a0, 0x7640 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347148u; }
        if (ctx->pc != 0x347148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347148u; }
        if (ctx->pc != 0x347148u) { return; }
    }
    ctx->pc = 0x347148u;
label_347148:
    // 0x347148: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x347148u;
    {
        const bool branch_taken_0x347148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34714Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x347148u;
            // 0x34714c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347148) {
            ctx->pc = 0x34724Cu;
            goto label_34724c;
        }
    }
    ctx->pc = 0x347150u;
label_347150:
    // 0x347150: 0x54820006  bnel        $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x347150u;
    {
        const bool branch_taken_0x347150 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x347150) {
            ctx->pc = 0x347154u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x347150u;
            // 0x347154: 0x24021121  addiu       $v0, $zero, 0x1121 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4385));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34716Cu;
            goto label_34716c;
        }
    }
    ctx->pc = 0x347158u;
    // 0x347158: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x347158u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34715c: 0xc082674  jal         func_2099D0
    ctx->pc = 0x34715Cu;
    SET_GPR_U32(ctx, 31, 0x347164u);
    ctx->pc = 0x347160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34715Cu;
            // 0x347160: 0x2484b090  addiu       $a0, $a0, -0x4F70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347164u; }
        if (ctx->pc != 0x347164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347164u; }
        if (ctx->pc != 0x347164u) { return; }
    }
    ctx->pc = 0x347164u;
label_347164:
    // 0x347164: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x347164u;
    {
        const bool branch_taken_0x347164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x347164) {
            ctx->pc = 0x347248u;
            goto label_347248;
        }
    }
    ctx->pc = 0x34716Cu;
label_34716c:
    // 0x34716c: 0x54820013  bnel        $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x34716Cu;
    {
        const bool branch_taken_0x34716c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x34716c) {
            ctx->pc = 0x347170u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34716Cu;
            // 0x347170: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3471BCu;
            goto label_3471bc;
        }
    }
    ctx->pc = 0x347174u;
    // 0x347174: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x347174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x347178: 0x8c42dd90  lw          $v0, -0x2270($v0)
    ctx->pc = 0x347178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958480)));
    // 0x34717c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x34717Cu;
    {
        const bool branch_taken_0x34717c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34717c) {
            ctx->pc = 0x3471A8u;
            goto label_3471a8;
        }
    }
    ctx->pc = 0x347184u;
    // 0x347184: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x347184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x347188: 0x9042bea9  lbu         $v0, -0x4157($v0)
    ctx->pc = 0x347188u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950569)));
    // 0x34718c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34718Cu;
    {
        const bool branch_taken_0x34718c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34718c) {
            ctx->pc = 0x3471A8u;
            goto label_3471a8;
        }
    }
    ctx->pc = 0x347194u;
    // 0x347194: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x347194u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x347198: 0xc082674  jal         func_2099D0
    ctx->pc = 0x347198u;
    SET_GPR_U32(ctx, 31, 0x3471A0u);
    ctx->pc = 0x34719Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x347198u;
            // 0x34719c: 0x2484f670  addiu       $a0, $a0, -0x990 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3471A0u; }
        if (ctx->pc != 0x3471A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3471A0u; }
        if (ctx->pc != 0x3471A0u) { return; }
    }
    ctx->pc = 0x3471A0u;
label_3471a0:
    // 0x3471a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3471A0u;
    {
        const bool branch_taken_0x3471a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3471a0) {
            ctx->pc = 0x3471B4u;
            goto label_3471b4;
        }
    }
    ctx->pc = 0x3471A8u;
label_3471a8:
    // 0x3471a8: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x3471a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x3471ac: 0xc082674  jal         func_2099D0
    ctx->pc = 0x3471ACu;
    SET_GPR_U32(ctx, 31, 0x3471B4u);
    ctx->pc = 0x3471B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3471ACu;
            // 0x3471b0: 0x2484f340  addiu       $a0, $a0, -0xCC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3471B4u; }
        if (ctx->pc != 0x3471B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3471B4u; }
        if (ctx->pc != 0x3471B4u) { return; }
    }
    ctx->pc = 0x3471B4u;
label_3471b4:
    // 0x3471b4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x3471B4u;
    {
        const bool branch_taken_0x3471b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3471b4) {
            ctx->pc = 0x347248u;
            goto label_347248;
        }
    }
    ctx->pc = 0x3471BCu;
label_3471bc:
    // 0x3471bc: 0xc0d1b18  jal         func_346C60
    ctx->pc = 0x3471BCu;
    SET_GPR_U32(ctx, 31, 0x3471C4u);
    ctx->pc = 0x346C60u;
    if (runtime->hasFunction(0x346C60u)) {
        auto targetFn = runtime->lookupFunction(0x346C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3471C4u; }
        if (ctx->pc != 0x3471C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00346C60_0x346c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3471C4u; }
        if (ctx->pc != 0x3471C4u) { return; }
    }
    ctx->pc = 0x3471C4u;
label_3471c4:
    // 0x3471c4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x3471C4u;
    {
        const bool branch_taken_0x3471c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3471c4) {
            ctx->pc = 0x347248u;
            goto label_347248;
        }
    }
    ctx->pc = 0x3471CCu;
label_3471cc:
    // 0x3471cc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3471ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3471d0: 0x24031121  addiu       $v1, $zero, 0x1121
    ctx->pc = 0x3471d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4385));
    // 0x3471d4: 0x9442fe72  lhu         $v0, -0x18E($v0)
    ctx->pc = 0x3471d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294966898)));
    // 0x3471d8: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3471D8u;
    {
        const bool branch_taken_0x3471d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3471d8) {
            ctx->pc = 0x3471ECu;
            goto label_3471ec;
        }
    }
    ctx->pc = 0x3471E0u;
    // 0x3471e0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3471e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x3471e4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3471e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3471e8: 0xac439478  sw          $v1, -0x6B88($v0)
    ctx->pc = 0x3471e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294939768), GPR_U32(ctx, 3));
label_3471ec:
    // 0x3471ec: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3471ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3471f0: 0xc082674  jal         func_2099D0
    ctx->pc = 0x3471F0u;
    SET_GPR_U32(ctx, 31, 0x3471F8u);
    ctx->pc = 0x3471F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3471F0u;
            // 0x3471f4: 0x8c44f78c  lw          $a0, -0x874($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965132)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3471F8u; }
        if (ctx->pc != 0x3471F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3471F8u; }
        if (ctx->pc != 0x3471F8u) { return; }
    }
    ctx->pc = 0x3471F8u;
label_3471f8:
    // 0x3471f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3471F8u;
    {
        const bool branch_taken_0x3471f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3471f8) {
            ctx->pc = 0x34721Cu;
            goto label_34721c;
        }
    }
    ctx->pc = 0x347200u;
label_347200:
    // 0x347200: 0xc0d1b18  jal         func_346C60
    ctx->pc = 0x347200u;
    SET_GPR_U32(ctx, 31, 0x347208u);
    ctx->pc = 0x346C60u;
    if (runtime->hasFunction(0x346C60u)) {
        auto targetFn = runtime->lookupFunction(0x346C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347208u; }
        if (ctx->pc != 0x347208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00346C60_0x346c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347208u; }
        if (ctx->pc != 0x347208u) { return; }
    }
    ctx->pc = 0x347208u;
label_347208:
    // 0x347208: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x347208u;
    {
        const bool branch_taken_0x347208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x347208) {
            ctx->pc = 0x34721Cu;
            goto label_34721c;
        }
    }
    ctx->pc = 0x347210u;
label_347210:
    // 0x347210: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x347210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_347214:
    // 0x347214: 0xc0d1b18  jal         func_346C60
    ctx->pc = 0x347214u;
    SET_GPR_U32(ctx, 31, 0x34721Cu);
    ctx->pc = 0x346C60u;
    if (runtime->hasFunction(0x346C60u)) {
        auto targetFn = runtime->lookupFunction(0x346C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34721Cu; }
        if (ctx->pc != 0x34721Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00346C60_0x346c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34721Cu; }
        if (ctx->pc != 0x34721Cu) { return; }
    }
    ctx->pc = 0x34721Cu;
label_34721c:
    // 0x34721c: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x34721cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x347220: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x347220u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x347224: 0x9465be96  lhu         $a1, -0x416A($v1)
    ctx->pc = 0x347224u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294950550)));
    // 0x347228: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x347228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x34722c: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x34722cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x347230: 0xa485be96  sh          $a1, -0x416A($a0)
    ctx->pc = 0x347230u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294950550), (uint16_t)GPR_U32(ctx, 5));
    // 0x347234: 0x9463be96  lhu         $v1, -0x416A($v1)
    ctx->pc = 0x347234u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294950550)));
    // 0x347238: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x347238u;
    {
        const bool branch_taken_0x347238 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x347238) {
            ctx->pc = 0x347248u;
            goto label_347248;
        }
    }
    ctx->pc = 0x347240u;
    // 0x347240: 0xc0d1b18  jal         func_346C60
    ctx->pc = 0x347240u;
    SET_GPR_U32(ctx, 31, 0x347248u);
    ctx->pc = 0x347244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x347240u;
            // 0x347244: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x346C60u;
    if (runtime->hasFunction(0x346C60u)) {
        auto targetFn = runtime->lookupFunction(0x346C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347248u; }
        if (ctx->pc != 0x347248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00346C60_0x346c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347248u; }
        if (ctx->pc != 0x347248u) { return; }
    }
    ctx->pc = 0x347248u;
label_347248:
    // 0x347248: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x347248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_34724c:
    // 0x34724c: 0x3e00008  jr          $ra
    ctx->pc = 0x34724Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34724Cu;
            // 0x347250: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x347254u;
    // 0x347254: 0x0  nop
    ctx->pc = 0x347254u;
    // NOP
    // 0x347258: 0x0  nop
    ctx->pc = 0x347258u;
    // NOP
    // 0x34725c: 0x0  nop
    ctx->pc = 0x34725cu;
    // NOP
    ctx->pc = 0x347260u;
}
