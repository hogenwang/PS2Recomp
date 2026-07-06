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

// Function: sub_002F7968
// Address: 0x2f7968 - 0x2f7a48
void sub_002F7968_0x2f7968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7968_0x2f7968");
#endif

    switch (ctx->pc) {
        case 0x2f7994u: goto label_2f7994;
        case 0x2f799cu: goto label_2f799c;
        case 0x2f79a0u: goto label_2f79a0;
        case 0x2f79a4u: goto label_2f79a4;
        case 0x2f79acu: goto label_2f79ac;
        case 0x2f79c0u: goto label_2f79c0;
        case 0x2f79c8u: goto label_2f79c8;
        case 0x2f79d0u: goto label_2f79d0;
        case 0x2f79d8u: goto label_2f79d8;
        case 0x2f79ecu: goto label_2f79ec;
        case 0x2f7a00u: goto label_2f7a00;
        case 0x2f7a14u: goto label_2f7a14;
        case 0x2f7a18u: goto label_2f7a18;
        case 0x2f7a28u: goto label_2f7a28;
        default: break;
    }

    ctx->pc = 0x2f7968u;

    // 0x2f7968: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f7968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f796c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f796cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f7970: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f7970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f7974: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x2f7974u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f7978: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f7978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f797c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f797cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7980: 0x8e040130  lw          $a0, 0x130($s0)
    ctx->pc = 0x2f7980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x2f7984: 0x5091000a  beql        $a0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x2F7984u;
    {
        const bool branch_taken_0x2f7984 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        if (branch_taken_0x2f7984) {
            ctx->pc = 0x2F7988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7984u;
            // 0x2f7988: 0x8e04012c  lw          $a0, 0x12C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F79B0u;
            goto label_2f79b0;
        }
    }
    ctx->pc = 0x2F798Cu;
    // 0x2f798c: 0xc0bf148  jal         func_2FC520
    ctx->pc = 0x2F798Cu;
    SET_GPR_U32(ctx, 31, 0x2F7994u);
    ctx->pc = 0x2FC520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC520u, 0x2F798Cu, 0x2F7994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7994u;
label_2f7994:
    // 0x2f7994: 0xc0432ac  jal         func_10CAB0
    ctx->pc = 0x2F7994u;
    SET_GPR_U32(ctx, 31, 0x2F799Cu);
    ctx->pc = 0x2F7998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7994u;
    // 0x2f7998: 0x8e040130  lw          $a0, 0x130($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CAB0u, 0x2F7994u, 0x2F799Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F799Cu;
label_2f799c:
    // 0x2f799c: 0xc04329c  jal         func_10CA70
label_2f79a0:
    if (ctx->pc == 0x2F79A0u) {
        ctx->pc = 0x2F79A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F799Cu;
        // 0x2f79a0: 0x8e040130  lw          $a0, 0x130($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F79A4u;
        goto label_2f79a4;
    }
    ctx->pc = 0x2F799Cu;
    SET_GPR_U32(ctx, 31, 0x2F79A4u);
    ctx->pc = 0x2F79A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F799Cu;
    // 0x2f79a0: 0x8e040130  lw          $a0, 0x130($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CA70u, 0x2F799Cu, 0x2F79A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F79A4u;
label_2f79a4:
    // 0x2f79a4: 0xc0be45e  jal         func_2F9178
    ctx->pc = 0x2F79A4u;
    SET_GPR_U32(ctx, 31, 0x2F79ACu);
    ctx->pc = 0x2F79A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F79A4u;
    // 0x2f79a8: 0x8e040138  lw          $a0, 0x138($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9178u, 0x2F79A4u, 0x2F79ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F79ACu;
label_2f79ac:
    // 0x2f79ac: 0x8e04012c  lw          $a0, 0x12C($s0)
    ctx->pc = 0x2f79acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_2f79b0:
    // 0x2f79b0: 0x10910009  beq         $a0, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F79B0u;
    {
        const bool branch_taken_0x2f79b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        ctx->pc = 0x2F79B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F79B0u;
        // 0x2f79b4: 0xae110130  sw          $s1, 0x130($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f79b0) {
            ctx->pc = 0x2F79D8u;
            goto label_2f79d8;
        }
    }
    ctx->pc = 0x2F79B8u;
    // 0x2f79b8: 0xc0bf148  jal         func_2FC520
    ctx->pc = 0x2F79B8u;
    SET_GPR_U32(ctx, 31, 0x2F79C0u);
    ctx->pc = 0x2FC520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC520u, 0x2F79B8u, 0x2F79C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F79C0u;
label_2f79c0:
    // 0x2f79c0: 0xc0432ac  jal         func_10CAB0
    ctx->pc = 0x2F79C0u;
    SET_GPR_U32(ctx, 31, 0x2F79C8u);
    ctx->pc = 0x2F79C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F79C0u;
    // 0x2f79c4: 0x8e04012c  lw          $a0, 0x12C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CAB0u, 0x2F79C0u, 0x2F79C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F79C8u;
label_2f79c8:
    // 0x2f79c8: 0xc04329c  jal         func_10CA70
    ctx->pc = 0x2F79C8u;
    SET_GPR_U32(ctx, 31, 0x2F79D0u);
    ctx->pc = 0x2F79CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F79C8u;
    // 0x2f79cc: 0x8e04012c  lw          $a0, 0x12C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CA70u, 0x2F79C8u, 0x2F79D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F79D0u;
label_2f79d0:
    // 0x2f79d0: 0xc0be45e  jal         func_2F9178
    ctx->pc = 0x2F79D0u;
    SET_GPR_U32(ctx, 31, 0x2F79D8u);
    ctx->pc = 0x2F79D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F79D0u;
    // 0x2f79d4: 0x8e040134  lw          $a0, 0x134($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9178u, 0x2F79D0u, 0x2F79D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F79D8u;
label_2f79d8:
    // 0x2f79d8: 0x8e040150  lw          $a0, 0x150($s0)
    ctx->pc = 0x2f79d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2f79dc: 0x10910003  beq         $a0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F79DCu;
    {
        const bool branch_taken_0x2f79dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        ctx->pc = 0x2F79E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F79DCu;
        // 0x2f79e0: 0xae11012c  sw          $s1, 0x12C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f79dc) {
            ctx->pc = 0x2F79ECu;
            goto label_2f79ec;
        }
    }
    ctx->pc = 0x2F79E4u;
    // 0x2f79e4: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x2F79E4u;
    SET_GPR_U32(ctx, 31, 0x2F79ECu);
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x2F79E4u, 0x2F79ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F79ECu;
label_2f79ec:
    // 0x2f79ec: 0x8e040154  lw          $a0, 0x154($s0)
    ctx->pc = 0x2f79ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
    // 0x2f79f0: 0x10910003  beq         $a0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F79F0u;
    {
        const bool branch_taken_0x2f79f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        ctx->pc = 0x2F79F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F79F0u;
        // 0x2f79f4: 0xae110150  sw          $s1, 0x150($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f79f0) {
            ctx->pc = 0x2F7A00u;
            goto label_2f7a00;
        }
    }
    ctx->pc = 0x2F79F8u;
    // 0x2f79f8: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x2F79F8u;
    SET_GPR_U32(ctx, 31, 0x2F7A00u);
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x2F79F8u, 0x2F7A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7A00u;
label_2f7a00:
    // 0x2f7a00: 0x8e040158  lw          $a0, 0x158($s0)
    ctx->pc = 0x2f7a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x2f7a04: 0x10910003  beq         $a0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F7A04u;
    {
        const bool branch_taken_0x2f7a04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        ctx->pc = 0x2F7A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7A04u;
        // 0x2f7a08: 0xae110154  sw          $s1, 0x154($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7a04) {
            ctx->pc = 0x2F7A14u;
            goto label_2f7a14;
        }
    }
    ctx->pc = 0x2F7A0Cu;
    // 0x2f7a0c: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x2F7A0Cu;
    SET_GPR_U32(ctx, 31, 0x2F7A14u);
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x2F7A0Cu, 0x2F7A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7A14u;
label_2f7a14:
    // 0x2f7a14: 0x8e04015c  lw          $a0, 0x15C($s0)
    ctx->pc = 0x2f7a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
label_2f7a18:
    // 0x2f7a18: 0x10910003  beq         $a0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F7A18u;
    {
        const bool branch_taken_0x2f7a18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        ctx->pc = 0x2F7A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7A18u;
        // 0x2f7a1c: 0xae110158  sw          $s1, 0x158($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7a18) {
            ctx->pc = 0x2F7A28u;
            goto label_2f7a28;
        }
    }
    ctx->pc = 0x2F7A20u;
    // 0x2f7a20: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x2F7A20u;
    SET_GPR_U32(ctx, 31, 0x2F7A28u);
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x2F7A20u, 0x2F7A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7A28u;
label_2f7a28:
    // 0x2f7a28: 0xae110158  sw          $s1, 0x158($s0)
    ctx->pc = 0x2f7a28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 17));
    // 0x2f7a2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f7a2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7a30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f7a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f7a34: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f7a34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f7a38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f7a38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f7a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7A3Cu;
        // 0x2f7a40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7A44u;
    // 0x2f7a44: 0x0  nop
    ctx->pc = 0x2f7a44u;
    // NOP
    if (ctx->pc == 0x2f7a44u) { ctx->pc = 0x2f7a48u; }
}
