#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B0610
// Address: 0x1b0610 - 0x1b0768
void sub_001B0610_0x1b0610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0610_0x1b0610");
#endif

    switch (ctx->pc) {
        case 0x1b0638u: goto label_1b0638;
        case 0x1b064cu: goto label_1b064c;
        case 0x1b0654u: goto label_1b0654;
        case 0x1b06a0u: goto label_1b06a0;
        case 0x1b06acu: goto label_1b06ac;
        case 0x1b06b8u: goto label_1b06b8;
        case 0x1b06d0u: goto label_1b06d0;
        case 0x1b06dcu: goto label_1b06dc;
        case 0x1b06e8u: goto label_1b06e8;
        case 0x1b06f4u: goto label_1b06f4;
        case 0x1b0710u: goto label_1b0710;
        case 0x1b0734u: goto label_1b0734;
        case 0x1b0744u: goto label_1b0744;
        case 0x1b074cu: goto label_1b074c;
        default: break;
    }

    ctx->pc = 0x1b0610u;

    // 0x1b0610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b0610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b0614: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b0614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b0618: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b0618u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b061c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b061cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b0620: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b0620u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0624: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b0624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b0628: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1b0628u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b062c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b062cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b0630: 0xc06db18  jal         func_1B6C60
    ctx->pc = 0x1B0630u;
    SET_GPR_U32(ctx, 31, 0x1B0638u);
    ctx->pc = 0x1B0634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0630u;
            // 0x1b0634: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6C60u;
    if (runtime->hasFunction(0x1B6C60u)) {
        auto targetFn = runtime->lookupFunction(0x1B6C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0638u; }
        if (ctx->pc != 0x1B0638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6C60_0x1b6c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0638u; }
        if (ctx->pc != 0x1B0638u) { return; }
    }
    ctx->pc = 0x1B0638u;
label_1b0638:
    // 0x1b0638: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b0638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b063c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B063Cu;
    {
        const bool branch_taken_0x1b063c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b063c) {
            ctx->pc = 0x1B064Cu;
            goto label_1b064c;
        }
    }
    ctx->pc = 0x1B0644u;
    // 0x1b0644: 0xc06dbcc  jal         func_1B6F30
    ctx->pc = 0x1B0644u;
    SET_GPR_U32(ctx, 31, 0x1B064Cu);
    ctx->pc = 0x1B0648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0644u;
            // 0x1b0648: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F30u;
    if (runtime->hasFunction(0x1B6F30u)) {
        auto targetFn = runtime->lookupFunction(0x1B6F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B064Cu; }
        if (ctx->pc != 0x1B064Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6F30_0x1b6f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B064Cu; }
        if (ctx->pc != 0x1B064Cu) { return; }
    }
    ctx->pc = 0x1B064Cu;
label_1b064c:
    // 0x1b064c: 0xc06b48e  jal         func_1AD238
    ctx->pc = 0x1B064Cu;
    SET_GPR_U32(ctx, 31, 0x1B0654u);
    ctx->pc = 0x1AD238u;
    if (runtime->hasFunction(0x1AD238u)) {
        auto targetFn = runtime->lookupFunction(0x1AD238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0654u; }
        if (ctx->pc != 0x1B0654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD238_0x1ad238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0654u; }
        if (ctx->pc != 0x1B0654u) { return; }
    }
    ctx->pc = 0x1B0654u;
label_1b0654:
    // 0x1b0654: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x1b0654u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1b0658: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1b0658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1b065c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1b065cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b0660: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1b0660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1b0664: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1b0664u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1b0668: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1b0668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1b066c: 0x222202a  slt         $a0, $s1, $v0
    ctx->pc = 0x1b066cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b0670: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1b0670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1b0674: 0x224100b  movn        $v0, $s1, $a0
    ctx->pc = 0x1b0674u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 17));
    // 0x1b0678: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x1b0678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x1b067c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B067Cu;
    {
        const bool branch_taken_0x1b067c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B067Cu;
            // 0x1b0680: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b067c) {
            ctx->pc = 0x1B0698u;
            goto label_1b0698;
        }
    }
    ctx->pc = 0x1B0684u;
    // 0x1b0684: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b0684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b0688: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x1b0688u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b068c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1B068Cu;
    {
        const bool branch_taken_0x1b068c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B068Cu;
            // 0x1b0690: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b068c) {
            ctx->pc = 0x1B06ECu;
            goto label_1b06ec;
        }
    }
    ctx->pc = 0x1B0694u;
    // 0x1b0694: 0x0  nop
    ctx->pc = 0x1b0694u;
    // NOP
label_1b0698:
    // 0x1b0698: 0xc06dc04  jal         func_1B7010
    ctx->pc = 0x1B0698u;
    SET_GPR_U32(ctx, 31, 0x1B06A0u);
    ctx->pc = 0x1B069Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0698u;
            // 0x1b069c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7010u;
    if (runtime->hasFunction(0x1B7010u)) {
        auto targetFn = runtime->lookupFunction(0x1B7010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B06A0u; }
        if (ctx->pc != 0x1B06A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7010_0x1b7010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B06A0u; }
        if (ctx->pc != 0x1B06A0u) { return; }
    }
    ctx->pc = 0x1B06A0u;
label_1b06a0:
    // 0x1b06a0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1b06a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b06a4: 0xc06df74  jal         func_1B7DD0
    ctx->pc = 0x1B06A4u;
    SET_GPR_U32(ctx, 31, 0x1B06ACu);
    ctx->pc = 0x1B06A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B06A4u;
            // 0x1b06a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7DD0u;
    if (runtime->hasFunction(0x1B7DD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B7DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B06ACu; }
        if (ctx->pc != 0x1B06ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7DD0_0x1b7dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B06ACu; }
        if (ctx->pc != 0x1B06ACu) { return; }
    }
    ctx->pc = 0x1B06ACu;
label_1b06ac:
    // 0x1b06ac: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1b06acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b06b0: 0xc06de74  jal         func_1B79D0
    ctx->pc = 0x1B06B0u;
    SET_GPR_U32(ctx, 31, 0x1B06B8u);
    ctx->pc = 0x1B06B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B06B0u;
            // 0x1b06b4: 0x8e050030  lw          $a1, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B79D0u;
    if (runtime->hasFunction(0x1B79D0u)) {
        auto targetFn = runtime->lookupFunction(0x1B79D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B06B8u; }
        if (ctx->pc != 0x1B06B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B79D0_0x1b79d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B06B8u; }
        if (ctx->pc != 0x1B06B8u) { return; }
    }
    ctx->pc = 0x1B06B8u;
label_1b06b8:
    // 0x1b06b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b06b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b06bc: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x1b06bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b06c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b06c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b06c4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1b06c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b06c8: 0xc06defc  jal         func_1B7BF0
    ctx->pc = 0x1B06C8u;
    SET_GPR_U32(ctx, 31, 0x1B06D0u);
    ctx->pc = 0x1B06CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B06C8u;
            // 0x1b06cc: 0xa2000003  sb          $zero, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7BF0u;
    if (runtime->hasFunction(0x1B7BF0u)) {
        auto targetFn = runtime->lookupFunction(0x1B7BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B06D0u; }
        if (ctx->pc != 0x1B06D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7BF0_0x1b7bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B06D0u; }
        if (ctx->pc != 0x1B06D0u) { return; }
    }
    ctx->pc = 0x1B06D0u;
label_1b06d0:
    // 0x1b06d0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1b06d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b06d4: 0xc06db28  jal         func_1B6CA0
    ctx->pc = 0x1B06D4u;
    SET_GPR_U32(ctx, 31, 0x1B06DCu);
    ctx->pc = 0x1B06D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B06D4u;
            // 0x1b06d8: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6CA0u;
    if (runtime->hasFunction(0x1B6CA0u)) {
        auto targetFn = runtime->lookupFunction(0x1B6CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B06DCu; }
        if (ctx->pc != 0x1B06DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6CA0_0x1b6ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B06DCu; }
        if (ctx->pc != 0x1B06DCu) { return; }
    }
    ctx->pc = 0x1B06DCu;
label_1b06dc:
    // 0x1b06dc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1b06dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b06e0: 0xc06db82  jal         func_1B6E08
    ctx->pc = 0x1B06E0u;
    SET_GPR_U32(ctx, 31, 0x1B06E8u);
    ctx->pc = 0x1B06E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B06E0u;
            // 0x1b06e4: 0x8e050020  lw          $a1, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E08u;
    if (runtime->hasFunction(0x1B6E08u)) {
        auto targetFn = runtime->lookupFunction(0x1B6E08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B06E8u; }
        if (ctx->pc != 0x1B06E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6E08_0x1b6e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B06E8u; }
        if (ctx->pc != 0x1B06E8u) { return; }
    }
    ctx->pc = 0x1B06E8u;
label_1b06e8:
    // 0x1b06e8: 0x8e100020  lw          $s0, 0x20($s0)
    ctx->pc = 0x1b06e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1b06ec:
    // 0x1b06ec: 0xc06b494  jal         func_1AD250
    ctx->pc = 0x1B06ECu;
    SET_GPR_U32(ctx, 31, 0x1B06F4u);
    ctx->pc = 0x1AD250u;
    if (runtime->hasFunction(0x1AD250u)) {
        auto targetFn = runtime->lookupFunction(0x1AD250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B06F4u; }
        if (ctx->pc != 0x1B06F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD250_0x1ad250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B06F4u; }
        if (ctx->pc != 0x1B06F4u) { return; }
    }
    ctx->pc = 0x1B06F4u;
label_1b06f4:
    // 0x1b06f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b06f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b06f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b06f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b06fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b06fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0700: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b0700u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0704: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b0704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b0708: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B070Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0708u;
            // 0x1b070c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0710u;
label_1b0710:
    // 0x1b0710: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b0710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b0714: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b0714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b0718: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b0718u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b071c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b071cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b0720: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b0720u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0724: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b0724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b0728: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b0728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b072c: 0xc06c6ac  jal         func_1B1AB0
    ctx->pc = 0x1B072Cu;
    SET_GPR_U32(ctx, 31, 0x1B0734u);
    ctx->pc = 0x1B0730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B072Cu;
            // 0x1b0730: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AB0u;
    if (runtime->hasFunction(0x1B1AB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0734u; }
        if (ctx->pc != 0x1B0734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1AB0_0x1b1ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0734u; }
        if (ctx->pc != 0x1B0734u) { return; }
    }
    ctx->pc = 0x1B0734u;
label_1b0734:
    // 0x1b0734: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b0734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0738: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b0738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b073c: 0xc06c1da  jal         func_1B0768
    ctx->pc = 0x1B073Cu;
    SET_GPR_U32(ctx, 31, 0x1B0744u);
    ctx->pc = 0x1B0740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B073Cu;
            // 0x1b0740: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0768u;
    if (runtime->hasFunction(0x1B0768u)) {
        auto targetFn = runtime->lookupFunction(0x1B0768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0744u; }
        if (ctx->pc != 0x1B0744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0768_0x1b0768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0744u; }
        if (ctx->pc != 0x1B0744u) { return; }
    }
    ctx->pc = 0x1B0744u;
label_1b0744:
    // 0x1b0744: 0xc06c6b2  jal         func_1B1AC8
    ctx->pc = 0x1B0744u;
    SET_GPR_U32(ctx, 31, 0x1B074Cu);
    ctx->pc = 0x1B0748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0744u;
            // 0x1b0748: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AC8u;
    if (runtime->hasFunction(0x1B1AC8u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B074Cu; }
        if (ctx->pc != 0x1B074Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1AC8_0x1b1ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B074Cu; }
        if (ctx->pc != 0x1B074Cu) { return; }
    }
    ctx->pc = 0x1B074Cu;
label_1b074c:
    // 0x1b074c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b074cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b0750: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b0750u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0754: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b0754u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0758: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b0758u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b075c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b075cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b0760: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0760u;
            // 0x1b0764: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0768u;
    ctx->pc = 0x1b0768u;
}
