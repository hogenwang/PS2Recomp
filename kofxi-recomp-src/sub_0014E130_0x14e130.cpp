#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014E130
// Address: 0x14e130 - 0x14e250
void sub_0014E130_0x14e130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E130_0x14e130");
#endif

    switch (ctx->pc) {
        case 0x14e160u: goto label_14e160;
        case 0x14e180u: goto label_14e180;
        case 0x14e1a4u: goto label_14e1a4;
        case 0x14e1bcu: goto label_14e1bc;
        case 0x14e1dcu: goto label_14e1dc;
        case 0x14e1f8u: goto label_14e1f8;
        case 0x14e200u: goto label_14e200;
        case 0x14e234u: goto label_14e234;
        case 0x14e23cu: goto label_14e23c;
        default: break;
    }

    ctx->pc = 0x14e130u;

    // 0x14e130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14e130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14e134: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14e134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14e138: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14e138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14e13c: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x14e13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x14e140: 0x90435ce0  lbu         $v1, 0x5CE0($v0)
    ctx->pc = 0x14e140u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 23776)));
    // 0x14e144: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14e144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14e148: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14e148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14e14c: 0x30650001  andi        $a1, $v1, 0x1
    ctx->pc = 0x14e14cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x14e150: 0xa0455ce0  sb          $a1, 0x5CE0($v0)
    ctx->pc = 0x14e150u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 23776), (uint8_t)GPR_U32(ctx, 5));
    // 0x14e154: 0x24a20018  addiu       $v0, $a1, 0x18
    ctx->pc = 0x14e154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x14e158: 0xc0537ec  jal         func_14DFB0
    ctx->pc = 0x14E158u;
    SET_GPR_U32(ctx, 31, 0x14E160u);
    ctx->pc = 0x14E15Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E158u;
            // 0x14e15c: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DFB0u;
    if (runtime->hasFunction(0x14DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x14DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E160u; }
        if (ctx->pc != 0x14E160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014DFB0_0x14dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E160u; }
        if (ctx->pc != 0x14E160u) { return; }
    }
    ctx->pc = 0x14E160u;
label_14e160:
    // 0x14e160: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x14e160u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x14e164: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14e164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x14e168: 0x90845ce0  lbu         $a0, 0x5CE0($a0)
    ctx->pc = 0x14e168u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 23776)));
    // 0x14e16c: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x14e16cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14e170: 0xa0655ce0  sb          $a1, 0x5CE0($v1)
    ctx->pc = 0x14e170u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 23776), (uint8_t)GPR_U32(ctx, 5));
    // 0x14e174: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14e174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e178: 0x3e00008  jr          $ra
    ctx->pc = 0x14E178u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E178u;
            // 0x14e17c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14E180u;
label_14e180:
    // 0x14e180: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14e180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14e184: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x14e184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x14e188: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14e188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14e18c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14e18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14e190: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14e190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14e194: 0x8c910010  lw          $s1, 0x10($a0)
    ctx->pc = 0x14e194u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x14e198: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14e198u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e19c: 0xc06e4dc  jal         func_1B9370
    ctx->pc = 0x14E19Cu;
    SET_GPR_U32(ctx, 31, 0x14E1A4u);
    ctx->pc = 0x14E1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E19Cu;
            // 0x14e1a0: 0x8c44e4c0  lw          $a0, -0x1B40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960320)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9370u;
    if (runtime->hasFunction(0x1B9370u)) {
        auto targetFn = runtime->lookupFunction(0x1B9370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E1A4u; }
        if (ctx->pc != 0x14E1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9370_0x1b9370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E1A4u; }
        if (ctx->pc != 0x14E1A4u) { return; }
    }
    ctx->pc = 0x14E1A4u;
label_14e1a4:
    // 0x14e1a4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x14e1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14e1a8: 0x54430017  bnel        $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x14E1A8u;
    {
        const bool branch_taken_0x14e1a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14e1a8) {
            ctx->pc = 0x14E1ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14E1A8u;
            // 0x14e1ac: 0x82230020  lb          $v1, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14E208u;
            goto label_14e208;
        }
    }
    ctx->pc = 0x14E1B0u;
    // 0x14e1b0: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x14e1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x14e1b4: 0xc06e84e  jal         func_1BA138
    ctx->pc = 0x14E1B4u;
    SET_GPR_U32(ctx, 31, 0x14E1BCu);
    ctx->pc = 0x14E1B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E1B4u;
            // 0x14e1b8: 0x8c44e4c0  lw          $a0, -0x1B40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960320)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA138u;
    if (runtime->hasFunction(0x1BA138u)) {
        auto targetFn = runtime->lookupFunction(0x1BA138u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E1BCu; }
        if (ctx->pc != 0x14E1BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA138_0x1ba138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E1BCu; }
        if (ctx->pc != 0x14E1BCu) { return; }
    }
    ctx->pc = 0x14E1BCu;
label_14e1bc:
    // 0x14e1bc: 0x2883c  dsll32      $s1, $v0, 0
    ctx->pc = 0x14e1bcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
    // 0x14e1c0: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x14e1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x14e1c4: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x14e1c4u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x14e1c8: 0x8c44e4c0  lw          $a0, -0x1B40($v0)
    ctx->pc = 0x14e1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960320)));
    // 0x14e1cc: 0x6622fffb  daddiu      $v0, $s1, -0x5
    ctx->pc = 0x14e1ccu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)4294967291);
    // 0x14e1d0: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x14e1d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x14e1d4: 0xc06e822  jal         func_1BA088
    ctx->pc = 0x14E1D4u;
    SET_GPR_U32(ctx, 31, 0x14E1DCu);
    ctx->pc = 0x14E1D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E1D4u;
            // 0x14e1d8: 0x5283f  dsra32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA088u;
    if (runtime->hasFunction(0x1BA088u)) {
        auto targetFn = runtime->lookupFunction(0x1BA088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E1DCu; }
        if (ctx->pc != 0x14E1DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA088_0x1ba088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E1DCu; }
        if (ctx->pc != 0x14E1DCu) { return; }
    }
    ctx->pc = 0x14E1DCu;
label_14e1dc:
    // 0x14e1dc: 0x2a21fce0  slti        $at, $s1, -0x320
    ctx->pc = 0x14e1dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4294966496) ? 1 : 0);
    // 0x14e1e0: 0x50200017  beql        $at, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x14E1E0u;
    {
        const bool branch_taken_0x14e1e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e1e0) {
            ctx->pc = 0x14E1E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14E1E0u;
            // 0x14e1e4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14E240u;
            goto label_14e240;
        }
    }
    ctx->pc = 0x14E1E8u;
    // 0x14e1e8: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x14e1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x14e1ec: 0x8c44e4c0  lw          $a0, -0x1B40($v0)
    ctx->pc = 0x14e1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960320)));
    // 0x14e1f0: 0xc06ec04  jal         func_1BB010
    ctx->pc = 0x14E1F0u;
    SET_GPR_U32(ctx, 31, 0x14E1F8u);
    ctx->pc = 0x14E1F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E1F0u;
            // 0x14e1f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB010u;
    if (runtime->hasFunction(0x1BB010u)) {
        auto targetFn = runtime->lookupFunction(0x1BB010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E1F8u; }
        if (ctx->pc != 0x14E1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB010_0x1bb010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E1F8u; }
        if (ctx->pc != 0x14E1F8u) { return; }
    }
    ctx->pc = 0x14E1F8u;
label_14e1f8:
    // 0x14e1f8: 0xc055728  jal         func_155CA0
    ctx->pc = 0x14E1F8u;
    SET_GPR_U32(ctx, 31, 0x14E200u);
    ctx->pc = 0x14E1FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E1F8u;
            // 0x14e1fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (runtime->hasFunction(0x155CA0u)) {
        auto targetFn = runtime->lookupFunction(0x155CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E200u; }
        if (ctx->pc != 0x14E200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155CA0_0x155ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E200u; }
        if (ctx->pc != 0x14E200u) { return; }
    }
    ctx->pc = 0x14E200u;
label_14e200:
    // 0x14e200: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x14E200u;
    {
        const bool branch_taken_0x14e200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e200) {
            ctx->pc = 0x14E23Cu;
            goto label_14e23c;
        }
    }
    ctx->pc = 0x14E208u;
label_14e208:
    // 0x14e208: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14e208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14e20c: 0xa2230020  sb          $v1, 0x20($s1)
    ctx->pc = 0x14e20cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x14e210: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x14e210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x14e214: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x14e214u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x14e218: 0x2861003d  slti        $at, $v1, 0x3D
    ctx->pc = 0x14e218u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x14e21c: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x14E21Cu;
    {
        const bool branch_taken_0x14e21c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e21c) {
            ctx->pc = 0x14E23Cu;
            goto label_14e23c;
        }
    }
    ctx->pc = 0x14E224u;
    // 0x14e224: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x14e224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x14e228: 0x8c44e4c0  lw          $a0, -0x1B40($v0)
    ctx->pc = 0x14e228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960320)));
    // 0x14e22c: 0xc06ec04  jal         func_1BB010
    ctx->pc = 0x14E22Cu;
    SET_GPR_U32(ctx, 31, 0x14E234u);
    ctx->pc = 0x14E230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E22Cu;
            // 0x14e230: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB010u;
    if (runtime->hasFunction(0x1BB010u)) {
        auto targetFn = runtime->lookupFunction(0x1BB010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E234u; }
        if (ctx->pc != 0x14E234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB010_0x1bb010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E234u; }
        if (ctx->pc != 0x14E234u) { return; }
    }
    ctx->pc = 0x14E234u;
label_14e234:
    // 0x14e234: 0xc055728  jal         func_155CA0
    ctx->pc = 0x14E234u;
    SET_GPR_U32(ctx, 31, 0x14E23Cu);
    ctx->pc = 0x14E238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E234u;
            // 0x14e238: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (runtime->hasFunction(0x155CA0u)) {
        auto targetFn = runtime->lookupFunction(0x155CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E23Cu; }
        if (ctx->pc != 0x14E23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155CA0_0x155ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E23Cu; }
        if (ctx->pc != 0x14E23Cu) { return; }
    }
    ctx->pc = 0x14E23Cu;
label_14e23c:
    // 0x14e23c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14e23cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_14e240:
    // 0x14e240: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14e240u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14e244: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14e244u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e248: 0x3e00008  jr          $ra
    ctx->pc = 0x14E248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E248u;
            // 0x14e24c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14E250u;
    ctx->pc = 0x14e250u;
}
