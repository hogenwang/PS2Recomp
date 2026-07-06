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

// Function: sub_002BBF78
// Address: 0x2bbf78 - 0x2bc010
void sub_002BBF78_0x2bbf78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BBF78_0x2bbf78");
#endif

    switch (ctx->pc) {
        case 0x2bbf94u: goto label_2bbf94;
        case 0x2bbfb0u: goto label_2bbfb0;
        case 0x2bbfd4u: goto label_2bbfd4;
        default: break;
    }

    ctx->pc = 0x2bbf78u;

    // 0x2bbf78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bbf78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bbf7c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2bbf7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2bbf80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bbf80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bbf84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bbf84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbf88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bbf88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2bbf8c: 0xc0af004  jal         func_2BC010
    ctx->pc = 0x2BBF8Cu;
    SET_GPR_U32(ctx, 31, 0x2BBF94u);
    ctx->pc = 0x2BBF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBF8Cu;
    // 0x2bbf90: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC010u, 0x2BBF8Cu, 0x2BBF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBF94u;
label_2bbf94:
    // 0x2bbf94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bbf94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbf98: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2BBF98u;
    {
        const bool branch_taken_0x2bbf98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBF98u;
        // 0x2bbf9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbf98) {
            ctx->pc = 0x2BBFF4u;
            goto label_2bbff4;
        }
    }
    ctx->pc = 0x2BBFA0u;
    // 0x2bbfa0: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x2bbfa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2bbfa4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2bbfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2bbfa8: 0xc0a8c00  jal         func_2A3000
    ctx->pc = 0x2BBFA8u;
    SET_GPR_U32(ctx, 31, 0x2BBFB0u);
    ctx->pc = 0x2BBFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBFA8u;
    // 0x2bbfac: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3000u, 0x2BBFA8u, 0x2BBFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBFB0u;
label_2bbfb0:
    // 0x2bbfb0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2BBFB0u;
    {
        const bool branch_taken_0x2bbfb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBFB0u;
        // 0x2bbfb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbfb0) {
            ctx->pc = 0x2BBFF4u;
            goto label_2bbff4;
        }
    }
    ctx->pc = 0x2BBFB8u;
    // 0x2bbfb8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2bbfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2bbfbc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2bbfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bbfc0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2bbfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2bbfc4: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2bbfc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bbfc8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2bbfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2bbfcc: 0xc049c48  jal         func_127120
    ctx->pc = 0x2BBFCCu;
    SET_GPR_U32(ctx, 31, 0x2BBFD4u);
    ctx->pc = 0x2BBFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBFCCu;
    // 0x2bbfd0: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2BBFCCu, 0x2BBFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBFD4u;
label_2bbfd4:
    // 0x2bbfd4: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2bbfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2bbfd8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bbfd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbfdc: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x2bbfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x2bbfe0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2bbfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2bbfe4: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2bbfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x2bbfe8: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2bbfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2bbfec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2BBFECu;
    {
        const bool branch_taken_0x2bbfec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBFECu;
        // 0x2bbff0: 0xae040010  sw          $a0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbfec) {
            ctx->pc = 0x2BBFF8u;
            goto label_2bbff8;
        }
    }
    ctx->pc = 0x2BBFF4u;
label_2bbff4:
    // 0x2bbff4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bbff4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bbff8:
    // 0x2bbff8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bbff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bbffc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2bbffcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bc000: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bc000u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc004: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC004u;
        // 0x2bc008: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC00Cu;
    // 0x2bc00c: 0x0  nop
    ctx->pc = 0x2bc00cu;
    // NOP
}
