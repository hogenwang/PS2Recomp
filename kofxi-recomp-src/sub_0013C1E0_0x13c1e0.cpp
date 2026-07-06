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

// Function: sub_0013C1E0
// Address: 0x13c1e0 - 0x13c2a0
void sub_0013C1E0_0x13c1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C1E0_0x13c1e0");
#endif

    switch (ctx->pc) {
        case 0x13c27cu: goto label_13c27c;
        default: break;
    }

    ctx->pc = 0x13c1e0u;

    // 0x13c1e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13c1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13c1e4: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C1E4u;
    {
        const bool branch_taken_0x13c1e4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C1E4u;
        // 0x13c1e8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c1e4) {
            ctx->pc = 0x13C1F4u;
            goto label_13c1f4;
        }
    }
    ctx->pc = 0x13C1ECu;
    // 0x13c1ec: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x13C1ECu;
    {
        const bool branch_taken_0x13c1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C1ECu;
        // 0x13c1f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c1ec) {
            ctx->pc = 0x13C288u;
            goto label_13c288;
        }
    }
    ctx->pc = 0x13C1F4u;
label_13c1f4:
    // 0x13c1f4: 0x8cc60010  lw          $a2, 0x10($a2)
    ctx->pc = 0x13c1f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x13c1f8: 0x54c00003  bnel        $a2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C1F8u;
    {
        const bool branch_taken_0x13c1f8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c1f8) {
            ctx->pc = 0x13C1FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C1F8u;
            // 0x13c1fc: 0x8cc20490  lw          $v0, 0x490($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C208u;
            goto label_13c208;
        }
    }
    ctx->pc = 0x13C200u;
    // 0x13c200: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x13C200u;
    {
        const bool branch_taken_0x13c200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C200u;
        // 0x13c204: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c200) {
            ctx->pc = 0x13C288u;
            goto label_13c288;
        }
    }
    ctx->pc = 0x13C208u;
label_13c208:
    // 0x13c208: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13c208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13c20c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C20Cu;
    {
        const bool branch_taken_0x13c20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c20c) {
            ctx->pc = 0x13C210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C20Cu;
            // 0x13c210: 0x90a2008c  lbu         $v0, 0x8C($a1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C21Cu;
            goto label_13c21c;
        }
    }
    ctx->pc = 0x13C214u;
    // 0x13c214: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x13C214u;
    {
        const bool branch_taken_0x13c214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C214u;
        // 0x13c218: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c214) {
            ctx->pc = 0x13C288u;
            goto label_13c288;
        }
    }
    ctx->pc = 0x13C21Cu;
label_13c21c:
    // 0x13c21c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x13c21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x13c220: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x13C220u;
    {
        const bool branch_taken_0x13c220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c220) {
            ctx->pc = 0x13C224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C220u;
            // 0x13c224: 0x84a30000  lh          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C244u;
            goto label_13c244;
        }
    }
    ctx->pc = 0x13C228u;
    // 0x13c228: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x13c228u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13c22c: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x13c22cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13c230: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x13c230u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13c234: 0x5020000a  beql        $at, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x13C234u;
    {
        const bool branch_taken_0x13c234 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c234) {
            ctx->pc = 0x13C238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C234u;
            // 0x13c238: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C260u;
            goto label_13c260;
        }
    }
    ctx->pc = 0x13C23Cu;
    // 0x13c23c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x13C23Cu;
    {
        const bool branch_taken_0x13c23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C23Cu;
        // 0x13c240: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c23c) {
            ctx->pc = 0x13C288u;
            goto label_13c288;
        }
    }
    ctx->pc = 0x13C244u;
label_13c244:
    // 0x13c244: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x13c244u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13c248: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x13c248u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13c24c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C24Cu;
    {
        const bool branch_taken_0x13c24c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c24c) {
            ctx->pc = 0x13C25Cu;
            goto label_13c25c;
        }
    }
    ctx->pc = 0x13C254u;
    // 0x13c254: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x13C254u;
    {
        const bool branch_taken_0x13c254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C254u;
        // 0x13c258: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c254) {
            ctx->pc = 0x13C288u;
            goto label_13c288;
        }
    }
    ctx->pc = 0x13C25Cu;
label_13c25c:
    // 0x13c25c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13c25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13c260:
    // 0x13c260: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x13c260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c264: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x13c264u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x13c268: 0x8ca2023c  lw          $v0, 0x23C($a1)
    ctx->pc = 0x13c268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 572)));
    // 0x13c26c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x13c26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x13c270: 0xaca2023c  sw          $v0, 0x23C($a1)
    ctx->pc = 0x13c270u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 572), GPR_U32(ctx, 2));
    // 0x13c274: 0xc04f0a8  jal         func_13C2A0
    ctx->pc = 0x13C274u;
    SET_GPR_U32(ctx, 31, 0x13C27Cu);
    ctx->pc = 0x13C278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C274u;
    // 0x13c278: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2A0u, 0x13C274u, 0x13C27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C27Cu;
label_13c27c:
    // 0x13c27c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x13C27Cu;
    {
        const bool branch_taken_0x13c27c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c27c) {
            ctx->pc = 0x13C280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C27Cu;
            // 0x13c280: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C288u;
            goto label_13c288;
        }
    }
    ctx->pc = 0x13C284u;
    // 0x13c284: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13c284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13c288:
    // 0x13c288: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13c288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c28c: 0x3e00008  jr          $ra
    ctx->pc = 0x13C28Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C28Cu;
        // 0x13c290: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C28Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C294u;
    // 0x13c294: 0x0  nop
    ctx->pc = 0x13c294u;
    // NOP
    // 0x13c298: 0x0  nop
    ctx->pc = 0x13c298u;
    // NOP
    // 0x13c29c: 0x0  nop
    ctx->pc = 0x13c29cu;
    // NOP
    if (ctx->pc == 0x13c29cu) { ctx->pc = 0x13c2a0u; }
}
