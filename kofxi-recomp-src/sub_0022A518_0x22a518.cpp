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

// Function: sub_0022A518
// Address: 0x22a518 - 0x22a5b0
void sub_0022A518_0x22a518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A518_0x22a518");
#endif

    switch (ctx->pc) {
        case 0x22a53cu: goto label_22a53c;
        case 0x22a548u: goto label_22a548;
        case 0x22a554u: goto label_22a554;
        case 0x22a58cu: goto label_22a58c;
        default: break;
    }

    ctx->pc = 0x22a518u;

    // 0x22a518: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22a518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22a51c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x22a51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x22a520: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22a520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22a524: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x22a524u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a528: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22a528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x22a52c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x22a52cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a530: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22a530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22a534: 0xc08c682  jal         func_231A08
    ctx->pc = 0x22A534u;
    SET_GPR_U32(ctx, 31, 0x22A53Cu);
    ctx->pc = 0x22A538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A534u;
    // 0x22a538: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x22A534u, 0x22A53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A53Cu;
label_22a53c:
    // 0x22a53c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22a53cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a540: 0xc098552  jal         func_261548
    ctx->pc = 0x22A540u;
    SET_GPR_U32(ctx, 31, 0x22A548u);
    ctx->pc = 0x22A544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A540u;
    // 0x22a544: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x22A540u, 0x22A548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A548u;
label_22a548:
    // 0x22a548: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22a548u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a54c: 0xc08c698  jal         func_231A60
    ctx->pc = 0x22A54Cu;
    SET_GPR_U32(ctx, 31, 0x22A554u);
    ctx->pc = 0x22A550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A54Cu;
    // 0x22a550: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x22A54Cu, 0x22A554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A554u;
label_22a554:
    // 0x22a554: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x22A554u;
    {
        const bool branch_taken_0x22a554 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A554u;
        // 0x22a558: 0x26220020  addiu       $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a554) {
            ctx->pc = 0x22A580u;
            goto label_22a580;
        }
    }
    ctx->pc = 0x22A55Cu;
    // 0x22a55c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22a55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22a560: 0xa6320010  sh          $s2, 0x10($s1)
    ctx->pc = 0x22a560u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 18));
    // 0x22a564: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x22a564u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x22a568: 0xa6230012  sh          $v1, 0x12($s1)
    ctx->pc = 0x22a568u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x22a56c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x22a56cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x22a570: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x22a570u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x22a574: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x22A574u;
    {
        const bool branch_taken_0x22a574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A574u;
        // 0x22a578: 0xae20001c  sw          $zero, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a574) {
            ctx->pc = 0x22A590u;
            goto label_22a590;
        }
    }
    ctx->pc = 0x22A57Cu;
    // 0x22a57c: 0x0  nop
    ctx->pc = 0x22a57cu;
    // NOP
label_22a580:
    // 0x22a580: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x22a580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a584: 0xc08a8cc  jal         func_22A330
    ctx->pc = 0x22A584u;
    SET_GPR_U32(ctx, 31, 0x22A58Cu);
    ctx->pc = 0x22A588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A584u;
    // 0x22a588: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A330u, 0x22A584u, 0x22A58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A58Cu;
label_22a58c:
    // 0x22a58c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22a58cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22a590:
    // 0x22a590: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x22a590u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a594: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22a594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22a598: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x22a598u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22a59c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22a59cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22a5a0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22a5a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a5a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22a5a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a5a8: 0x3e00008  jr          $ra
    ctx->pc = 0x22A5A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A5A8u;
        // 0x22a5ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A5A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A5B0u;
}
