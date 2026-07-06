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

// Function: sub_001E7218
// Address: 0x1e7218 - 0x1e7340
void sub_001E7218_0x1e7218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7218_0x1e7218");
#endif

    switch (ctx->pc) {
        case 0x1e723cu: goto label_1e723c;
        case 0x1e725cu: goto label_1e725c;
        case 0x1e72b4u: goto label_1e72b4;
        case 0x1e72bcu: goto label_1e72bc;
        case 0x1e72c4u: goto label_1e72c4;
        case 0x1e72d8u: goto label_1e72d8;
        case 0x1e730cu: goto label_1e730c;
        case 0x1e7324u: goto label_1e7324;
        default: break;
    }

    ctx->pc = 0x1e7218u;

    // 0x1e7218: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e721c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e721cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e7220: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e7220u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7224: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e7224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e7228: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x1e7228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1e722c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E722Cu;
    {
        const bool branch_taken_0x1e722c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E722Cu;
        // 0x1e7230: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e722c) {
            ctx->pc = 0x1E7248u;
            goto label_1e7248;
        }
    }
    ctx->pc = 0x1E7234u;
    // 0x1e7234: 0xc079f2c  jal         func_1E7CB0
    ctx->pc = 0x1E7234u;
    SET_GPR_U32(ctx, 31, 0x1E723Cu);
    ctx->pc = 0x1E7CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7CB0u, 0x1E7234u, 0x1E723Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E723Cu;
label_1e723c:
    // 0x1e723c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E723Cu;
    {
        const bool branch_taken_0x1e723c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E723Cu;
        // 0x1e7240: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e723c) {
            ctx->pc = 0x1E7248u;
            goto label_1e7248;
        }
    }
    ctx->pc = 0x1E7244u;
    // 0x1e7244: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1e7244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1e7248:
    // 0x1e7248: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x1e7248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1e724c: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E724Cu;
    {
        const bool branch_taken_0x1e724c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e724c) {
            ctx->pc = 0x1E7250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E724Cu;
            // 0x1e7250: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E7274u;
            goto label_1e7274;
        }
    }
    ctx->pc = 0x1E7254u;
    // 0x1e7254: 0xc079672  jal         func_1E59C8
    ctx->pc = 0x1E7254u;
    SET_GPR_U32(ctx, 31, 0x1E725Cu);
    ctx->pc = 0x1E59C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E59C8u, 0x1E7254u, 0x1E725Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E725Cu;
label_1e725c:
    // 0x1e725c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e725cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7260: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E7260u;
    {
        const bool branch_taken_0x1e7260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e7260) {
            ctx->pc = 0x1E7264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E7260u;
            // 0x1e7264: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E7274u;
            goto label_1e7274;
        }
    }
    ctx->pc = 0x1E7268u;
    // 0x1e7268: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1e7268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e726c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1e726cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1e7270: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e7270u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e7274:
    // 0x1e7274: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e7274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e7278: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7278u;
        // 0x1e727c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7280u;
    // 0x1e7280: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e7284: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7288: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e728c: 0x8079cd8  j           func_1E7360
    ctx->pc = 0x1E728Cu;
    ctx->pc = 0x1E7290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E728Cu;
    // 0x1e7290: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7360u, 0x1E728Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1E7294u;
    // 0x1e7294: 0x0  nop
    ctx->pc = 0x1e7294u;
    // NOP
    // 0x1e7298: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e7298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e729c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e729cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e72a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e72a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e72a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e72a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e72a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e72a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e72ac: 0xc079ea4  jal         func_1E7A90
    ctx->pc = 0x1E72ACu;
    SET_GPR_U32(ctx, 31, 0x1E72B4u);
    ctx->pc = 0x1E72B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E72ACu;
    // 0x1e72b0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7A90u, 0x1E72ACu, 0x1E72B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E72B4u;
label_1e72b4:
    // 0x1e72b4: 0xc079ec0  jal         func_1E7B00
    ctx->pc = 0x1E72B4u;
    SET_GPR_U32(ctx, 31, 0x1E72BCu);
    ctx->pc = 0x1E72B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E72B4u;
    // 0x1e72b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7B00u, 0x1E72B4u, 0x1E72BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E72BCu;
label_1e72bc:
    // 0x1e72bc: 0xc079cd0  jal         func_1E7340
    ctx->pc = 0x1E72BCu;
    SET_GPR_U32(ctx, 31, 0x1E72C4u);
    ctx->pc = 0x1E7340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7340u, 0x1E72BCu, 0x1E72C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E72C4u;
label_1e72c4:
    // 0x1e72c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e72c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e72c8: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E72C8u;
    {
        const bool branch_taken_0x1e72c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E72CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E72C8u;
        // 0x1e72cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e72c8) {
            ctx->pc = 0x1E72DCu;
            goto label_1e72dc;
        }
    }
    ctx->pc = 0x1E72D0u;
    // 0x1e72d0: 0xc079d58  jal         func_1E7560
    ctx->pc = 0x1E72D0u;
    SET_GPR_U32(ctx, 31, 0x1E72D8u);
    ctx->pc = 0x1E7560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7560u, 0x1E72D0u, 0x1E72D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E72D8u;
label_1e72d8:
    // 0x1e72d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e72d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e72dc:
    // 0x1e72dc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e72dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e72e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e72e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e72e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e72e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e72e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e72e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e72ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1E72ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E72F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E72ECu;
        // 0x1e72f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E72ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E72F4u;
    // 0x1e72f4: 0x0  nop
    ctx->pc = 0x1e72f4u;
    // NOP
    // 0x1e72f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e72f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e72fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e72fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e7300: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e7300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e7304: 0xc079cd0  jal         func_1E7340
    ctx->pc = 0x1E7304u;
    SET_GPR_U32(ctx, 31, 0x1E730Cu);
    ctx->pc = 0x1E7308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7304u;
    // 0x1e7308: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7340u, 0x1E7304u, 0x1E730Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E730Cu;
label_1e730c:
    // 0x1e730c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e730cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7310: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7314: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E7314u;
    {
        const bool branch_taken_0x1e7314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E7318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7314u;
        // 0x1e7318: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7314) {
            ctx->pc = 0x1E7328u;
            goto label_1e7328;
        }
    }
    ctx->pc = 0x1E731Cu;
    // 0x1e731c: 0xc079d58  jal         func_1E7560
    ctx->pc = 0x1E731Cu;
    SET_GPR_U32(ctx, 31, 0x1E7324u);
    ctx->pc = 0x1E7560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7560u, 0x1E731Cu, 0x1E7324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7324u;
label_1e7324:
    // 0x1e7324: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e7324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e7328:
    // 0x1e7328: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e7328u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e732c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1e732cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7330: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e7330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e7334: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7334u;
        // 0x1e7338: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E733Cu;
    // 0x1e733c: 0x0  nop
    ctx->pc = 0x1e733cu;
    // NOP
}
