#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026F0BC
// Address: 0x26f0bc - 0x26f208
void sub_0026F0BC_0x26f0bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026F0BC_0x26f0bc");
#endif

    switch (ctx->pc) {
        case 0x26f0d8u: goto label_26f0d8;
        case 0x26f148u: goto label_26f148;
        case 0x26f158u: goto label_26f158;
        case 0x26f170u: goto label_26f170;
        case 0x26f18cu: goto label_26f18c;
        default: break;
    }

    ctx->pc = 0x26f0bcu;

    // 0x26f0bc: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x26f0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x26f0c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26f0c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f0c4: 0x3405c014  ori         $a1, $zero, 0xC014
    ctx->pc = 0x26f0c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49172);
    // 0x26f0c8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x26f0c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x26f0cc: 0x34a56972  ori         $a1, $a1, 0x6972
    ctx->pc = 0x26f0ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26994);
    // 0x26f0d0: 0xc097bf2  jal         func_25EFC8
    ctx->pc = 0x26F0D0u;
    SET_GPR_U32(ctx, 31, 0x26F0D8u);
    ctx->pc = 0x26F0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F0D0u;
            // 0x26f0d4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25EFC8u;
    if (runtime->hasFunction(0x25EFC8u)) {
        auto targetFn = runtime->lookupFunction(0x25EFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F0D8u; }
        if (ctx->pc != 0x26F0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025EFC8_0x25efc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F0D8u; }
        if (ctx->pc != 0x26F0D8u) { return; }
    }
    ctx->pc = 0x26F0D8u;
label_26f0d8:
    // 0x26f0d8: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26F0D8u;
    {
        const bool branch_taken_0x26f0d8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26F0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F0D8u;
            // 0x26f0dc: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f0d8) {
            ctx->pc = 0x26F0F0u;
            goto label_26f0f0;
        }
    }
    ctx->pc = 0x26F0E0u;
    // 0x26f0e0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26f0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26f0e4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26f0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26f0e8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x26F0E8u;
    {
        const bool branch_taken_0x26f0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F0E8u;
            // 0x26f0ec: 0x24a596b0  addiu       $a1, $a1, -0x6950 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f0e8) {
            ctx->pc = 0x26F184u;
            goto label_26f184;
        }
    }
    ctx->pc = 0x26F0F0u;
label_26f0f0:
    // 0x26f0f0: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x26f0f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x26f0f4: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x26F0F4u;
    {
        const bool branch_taken_0x26f0f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F0F4u;
            // 0x26f0f8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f0f4) {
            ctx->pc = 0x26F1D8u;
            goto label_26f1d8;
        }
    }
    ctx->pc = 0x26F0FCu;
    // 0x26f0fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x26f0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26f100: 0x24429740  addiu       $v0, $v0, -0x68C0
    ctx->pc = 0x26f100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940480));
    // 0x26f104: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26f104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26f108: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x26f108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26f10c: 0x800008  jr          $a0
    ctx->pc = 0x26F10Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26F114u: goto label_26f114;
            case 0x26F11Cu: goto label_26f11c;
            case 0x26F124u: goto label_26f124;
            case 0x26F12Cu: goto label_26f12c;
            case 0x26F134u: goto label_26f134;
            case 0x26F1D4u: goto label_26f1d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26F114u;
label_26f114:
    // 0x26f114: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x26F114u;
    {
        const bool branch_taken_0x26f114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F114u;
            // 0x26f118: 0x2411fe05  addiu       $s1, $zero, -0x1FB (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966789));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f114) {
            ctx->pc = 0x26F1D8u;
            goto label_26f1d8;
        }
    }
    ctx->pc = 0x26F11Cu;
label_26f11c:
    // 0x26f11c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x26F11Cu;
    {
        const bool branch_taken_0x26f11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F11Cu;
            // 0x26f120: 0x2411fe08  addiu       $s1, $zero, -0x1F8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966792));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f11c) {
            ctx->pc = 0x26F1D8u;
            goto label_26f1d8;
        }
    }
    ctx->pc = 0x26F124u;
label_26f124:
    // 0x26f124: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x26F124u;
    {
        const bool branch_taken_0x26f124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F124u;
            // 0x26f128: 0x2411fe07  addiu       $s1, $zero, -0x1F9 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966791));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f124) {
            ctx->pc = 0x26F1D8u;
            goto label_26f1d8;
        }
    }
    ctx->pc = 0x26F12Cu;
label_26f12c:
    // 0x26f12c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x26F12Cu;
    {
        const bool branch_taken_0x26f12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F12Cu;
            // 0x26f130: 0x2411fe06  addiu       $s1, $zero, -0x1FA (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966790));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f12c) {
            ctx->pc = 0x26F1D8u;
            goto label_26f1d8;
        }
    }
    ctx->pc = 0x26F134u;
label_26f134:
    // 0x26f134: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x26f134u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26f138: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26f138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f13c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26f13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f140: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x26F140u;
    SET_GPR_U32(ctx, 31, 0x26F148u);
    ctx->pc = 0x26F144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F140u;
            // 0x26f144: 0x24060114  addiu       $a2, $zero, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F148u; }
        if (ctx->pc != 0x26F148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F148u; }
        if (ctx->pc != 0x26F148u) { return; }
    }
    ctx->pc = 0x26F148u;
label_26f148:
    // 0x26f148: 0x26a59570  addiu       $a1, $s5, -0x6A90
    ctx->pc = 0x26f148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294940016));
    // 0x26f14c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26f14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f150: 0xc04a966  jal         func_12A598
    ctx->pc = 0x26F150u;
    SET_GPR_U32(ctx, 31, 0x26F158u);
    ctx->pc = 0x26F154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F150u;
            // 0x26f154: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F158u; }
        if (ctx->pc != 0x26F158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F158u; }
        if (ctx->pc != 0x26F158u) { return; }
    }
    ctx->pc = 0x26F158u;
label_26f158:
    // 0x26f158: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26f158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f15c: 0x3405c114  ori         $a1, $zero, 0xC114
    ctx->pc = 0x26f15cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49428);
    // 0x26f160: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x26f160u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x26f164: 0x34a56974  ori         $a1, $a1, 0x6974
    ctx->pc = 0x26f164u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26996);
    // 0x26f168: 0xc097bf2  jal         func_25EFC8
    ctx->pc = 0x26F168u;
    SET_GPR_U32(ctx, 31, 0x26F170u);
    ctx->pc = 0x26F16Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F168u;
            // 0x26f16c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25EFC8u;
    if (runtime->hasFunction(0x25EFC8u)) {
        auto targetFn = runtime->lookupFunction(0x25EFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F170u; }
        if (ctx->pc != 0x26F170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025EFC8_0x25efc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F170u; }
        if (ctx->pc != 0x26F170u) { return; }
    }
    ctx->pc = 0x26F170u;
label_26f170:
    // 0x26f170: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26F170u;
    {
        const bool branch_taken_0x26f170 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26F174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F170u;
            // 0x26f174: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f170) {
            ctx->pc = 0x26F194u;
            goto label_26f194;
        }
    }
    ctx->pc = 0x26F178u;
    // 0x26f178: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26f178u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26f17c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26f17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26f180: 0x24a596f8  addiu       $a1, $a1, -0x6908
    ctx->pc = 0x26f180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940408));
label_26f184:
    // 0x26f184: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26F184u;
    SET_GPR_U32(ctx, 31, 0x26F18Cu);
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F18Cu; }
        if (ctx->pc != 0x26F18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F18Cu; }
        if (ctx->pc != 0x26F18Cu) { return; }
    }
    ctx->pc = 0x26F18Cu;
label_26f18c:
    // 0x26f18c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x26F18Cu;
    {
        const bool branch_taken_0x26f18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F18Cu;
            // 0x26f190: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f18c) {
            ctx->pc = 0x26F1E4u;
            goto label_26f1e4;
        }
    }
    ctx->pc = 0x26F194u;
label_26f194:
    // 0x26f194: 0x24020202  addiu       $v0, $zero, 0x202
    ctx->pc = 0x26f194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
    // 0x26f198: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x26F198u;
    {
        const bool branch_taken_0x26f198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26F19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F198u;
            // 0x26f19c: 0x28620203  slti        $v0, $v1, 0x203 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)515) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f198) {
            ctx->pc = 0x26F1CCu;
            goto label_26f1cc;
        }
    }
    ctx->pc = 0x26F1A0u;
    // 0x26f1a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26F1A0u;
    {
        const bool branch_taken_0x26f1a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F1A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F1A0u;
            // 0x26f1a4: 0x24020201  addiu       $v0, $zero, 0x201 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f1a0) {
            ctx->pc = 0x26F1B8u;
            goto label_26f1b8;
        }
    }
    ctx->pc = 0x26F1A8u;
    // 0x26f1a8: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x26F1A8u;
    {
        const bool branch_taken_0x26f1a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26f1a8) {
            ctx->pc = 0x26F1ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26F1A8u;
            // 0x26f1ac: 0x2411fe0b  addiu       $s1, $zero, -0x1F5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966795));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26F1D8u;
            goto label_26f1d8;
        }
    }
    ctx->pc = 0x26F1B0u;
    // 0x26f1b0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x26F1B0u;
    {
        const bool branch_taken_0x26f1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F1B0u;
            // 0x26f1b4: 0xae710054  sw          $s1, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f1b0) {
            ctx->pc = 0x26F1DCu;
            goto label_26f1dc;
        }
    }
    ctx->pc = 0x26F1B8u;
label_26f1b8:
    // 0x26f1b8: 0x24020203  addiu       $v0, $zero, 0x203
    ctx->pc = 0x26f1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    // 0x26f1bc: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26F1BCu;
    {
        const bool branch_taken_0x26f1bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26f1bc) {
            ctx->pc = 0x26F1C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26F1BCu;
            // 0x26f1c0: 0x2411fe09  addiu       $s1, $zero, -0x1F7 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966793));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26F1D8u;
            goto label_26f1d8;
        }
    }
    ctx->pc = 0x26F1C4u;
    // 0x26f1c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x26F1C4u;
    {
        const bool branch_taken_0x26f1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F1C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F1C4u;
            // 0x26f1c8: 0xae710054  sw          $s1, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f1c4) {
            ctx->pc = 0x26F1DCu;
            goto label_26f1dc;
        }
    }
    ctx->pc = 0x26F1CCu;
label_26f1cc:
    // 0x26f1cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26F1CCu;
    {
        const bool branch_taken_0x26f1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F1D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F1CCu;
            // 0x26f1d0: 0x2411fe0a  addiu       $s1, $zero, -0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966794));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f1cc) {
            ctx->pc = 0x26F1D8u;
            goto label_26f1d8;
        }
    }
    ctx->pc = 0x26F1D4u;
label_26f1d4:
    // 0x26f1d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x26f1d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26f1d8:
    // 0x26f1d8: 0xae710054  sw          $s1, 0x54($s3)
    ctx->pc = 0x26f1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 17));
label_26f1dc:
    // 0x26f1dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26f1dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f1e0: 0xae910054  sw          $s1, 0x54($s4)
    ctx->pc = 0x26f1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 17));
label_26f1e4:
    // 0x26f1e4: 0xdfbf01a0  ld          $ra, 0x1A0($sp)
    ctx->pc = 0x26f1e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x26f1e8: 0xdfb50190  ld          $s5, 0x190($sp)
    ctx->pc = 0x26f1e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x26f1ec: 0xdfb40180  ld          $s4, 0x180($sp)
    ctx->pc = 0x26f1ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x26f1f0: 0xdfb30170  ld          $s3, 0x170($sp)
    ctx->pc = 0x26f1f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x26f1f4: 0xdfb20160  ld          $s2, 0x160($sp)
    ctx->pc = 0x26f1f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x26f1f8: 0xdfb10150  ld          $s1, 0x150($sp)
    ctx->pc = 0x26f1f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x26f1fc: 0xdfb00140  ld          $s0, 0x140($sp)
    ctx->pc = 0x26f1fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x26f200: 0x3e00008  jr          $ra
    ctx->pc = 0x26F200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F200u;
            // 0x26f204: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26F208u;
    ctx->pc = 0x26f208u;
}
