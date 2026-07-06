#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B60E0
// Address: 0x1b60e0 - 0x1b6200
void sub_001B60E0_0x1b60e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B60E0_0x1b60e0");
#endif

    switch (ctx->pc) {
        case 0x1b60f0u: goto label_1b60f0;
        case 0x1b6100u: goto label_1b6100;
        case 0x1b6118u: goto label_1b6118;
        case 0x1b6178u: goto label_1b6178;
        case 0x1b6190u: goto label_1b6190;
        case 0x1b61acu: goto label_1b61ac;
        case 0x1b61d8u: goto label_1b61d8;
        case 0x1b61f0u: goto label_1b61f0;
        default: break;
    }

    ctx->pc = 0x1b60e0u;

    // 0x1b60e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B60E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B60E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B60E0u;
        // 0x1b60e4: 0xac850034  sw          $a1, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B60E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B60E8u;
    // 0x1b60e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B60E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B60ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B60E8u;
        // 0x1b60ec: 0x8c820034  lw          $v0, 0x34($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B60E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B60F0u;
label_1b60f0:
    // 0x1b60f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B60F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B60F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B60F0u;
        // 0x1b60f4: 0xac85009c  sw          $a1, 0x9C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B60F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B60F8u;
    // 0x1b60f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B60F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B60FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B60F8u;
        // 0x1b60fc: 0x8c82009c  lw          $v0, 0x9C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B60F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6100u;
label_1b6100:
    // 0x1b6100: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b6100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b6104: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b6104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b6108: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1b6108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b610c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b610cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6110: 0x806aec0  j           func_1ABB00
    ctx->pc = 0x1B6110u;
    ctx->pc = 0x1B6114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6110u;
    // 0x1b6114: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABB00u, 0x1B6110u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1B6118u;
label_1b6118:
    // 0x1b6118: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b6118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b611c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b611cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b6120: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b6120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6124: 0x806aeda  j           func_1ABB68
    ctx->pc = 0x1B6124u;
    ctx->pc = 0x1B6128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6124u;
    // 0x1b6128: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABB68u, 0x1B6124u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1B612Cu;
    // 0x1b612c: 0x0  nop
    ctx->pc = 0x1b612cu;
    // NOP
    // 0x1b6130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b6130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b6134: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b6134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b6138: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1b6138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b613c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b613cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6140: 0x806aeec  j           func_1ABBB0
    ctx->pc = 0x1B6140u;
    ctx->pc = 0x1B6144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6140u;
    // 0x1b6144: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABBB0u, 0x1B6140u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1B6148u;
    // 0x1b6148: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b6148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b614c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x1b614cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1b6150: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b6150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b6154: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x1b6154u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1b6158: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x1b6158u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x1b615c: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x1b615cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x1b6160: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1b6160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b6164: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x1b6164u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x1b6168: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b6168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b616c: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x1b616cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x1b6170: 0x806aef4  j           func_1ABBD0
    ctx->pc = 0x1B6170u;
    ctx->pc = 0x1B6174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6170u;
    // 0x1b6174: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABBD0u, 0x1B6170u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1B6178u;
label_1b6178:
    // 0x1b6178: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b6178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b617c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b617cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b6180: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1b6180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b6184: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b6184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6188: 0x806adba  j           func_1AB6E8
    ctx->pc = 0x1B6188u;
    ctx->pc = 0x1B618Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6188u;
    // 0x1b618c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB6E8u, 0x1B6188u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1B6190u;
label_1b6190:
    // 0x1b6190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b6190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b6194: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b6194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b6198: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b6198u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b619c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b619cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b61a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b61a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b61a4: 0xc06b48e  jal         func_1AD238
    ctx->pc = 0x1B61A4u;
    SET_GPR_U32(ctx, 31, 0x1B61ACu);
    ctx->pc = 0x1B61A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B61A4u;
    // 0x1b61a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD238u, 0x1B61A4u, 0x1B61ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B61ACu;
label_1b61ac:
    // 0x1b61ac: 0x5a200006  blezl       $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B61ACu;
    {
        const bool branch_taken_0x1b61ac = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x1b61ac) {
            ctx->pc = 0x1B61B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B61ACu;
            // 0x1b61b0: 0x8e0200a4  lw          $v0, 0xA4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B61C8u;
            goto label_1b61c8;
        }
    }
    ctx->pc = 0x1B61B4u;
    // 0x1b61b4: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x1b61b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x1b61b8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1b61b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1b61bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B61BCu;
    {
        const bool branch_taken_0x1b61bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B61C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B61BCu;
        // 0x1b61c0: 0xae0200a0  sw          $v0, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b61bc) {
            ctx->pc = 0x1B61D0u;
            goto label_1b61d0;
        }
    }
    ctx->pc = 0x1B61C4u;
    // 0x1b61c4: 0x0  nop
    ctx->pc = 0x1b61c4u;
    // NOP
label_1b61c8:
    // 0x1b61c8: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1b61c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1b61cc: 0xae0200a4  sw          $v0, 0xA4($s0)
    ctx->pc = 0x1b61ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
label_1b61d0:
    // 0x1b61d0: 0xc06b494  jal         func_1AD250
    ctx->pc = 0x1B61D0u;
    SET_GPR_U32(ctx, 31, 0x1B61D8u);
    ctx->pc = 0x1AD250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD250u, 0x1B61D0u, 0x1B61D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B61D8u;
label_1b61d8:
    // 0x1b61d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1b61d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b61dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b61dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b61e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b61e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b61e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b61e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b61e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B61E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B61ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B61E8u;
        // 0x1b61ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B61E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B61F0u;
label_1b61f0:
    // 0x1b61f0: 0xac860054  sw          $a2, 0x54($a0)
    ctx->pc = 0x1b61f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 6));
    // 0x1b61f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B61F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B61F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B61F4u;
        // 0x1b61f8: 0xac850050  sw          $a1, 0x50($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B61F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B61FCu;
    // 0x1b61fc: 0x0  nop
    ctx->pc = 0x1b61fcu;
    // NOP
    if (ctx->pc == 0x1b61fcu) { ctx->pc = 0x1b6200u; }
}
