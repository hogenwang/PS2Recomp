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

// Function: sub_0014D580
// Address: 0x14d580 - 0x14d660
void sub_0014D580_0x14d580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D580_0x14d580");
#endif

    ctx->pc = 0x14d580u;

    // 0x14d580: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x14d580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x14d584: 0x8042f340  lb          $v0, -0xCC0($v0)
    ctx->pc = 0x14d584u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964032)));
    // 0x14d588: 0x2c41000b  sltiu       $at, $v0, 0xB
    ctx->pc = 0x14d588u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x14d58c: 0x5020002f  beql        $at, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x14D58Cu;
    {
        const bool branch_taken_0x14d58c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d58c) {
            ctx->pc = 0x14D590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D58Cu;
            // 0x14d590: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D64Cu;
            goto label_14d64c;
        }
    }
    ctx->pc = 0x14D594u;
    // 0x14d594: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x14d594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x14d598: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14d598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14d59c: 0x2463cf90  addiu       $v1, $v1, -0x3070
    ctx->pc = 0x14d59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954896));
    // 0x14d5a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14d5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14d5a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14d5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14d5a8: 0x400008  jr          $v0
    ctx->pc = 0x14D5A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14D5B0u: goto label_14d5b0;
            case 0x14D5B8u: goto label_14d5b8;
            case 0x14D5E4u: goto label_14d5e4;
            case 0x14D5ECu: goto label_14d5ec;
            case 0x14D5F4u: goto label_14d5f4;
            case 0x14D620u: goto label_14d620;
            case 0x14D628u: goto label_14d628;
            case 0x14D630u: goto label_14d630;
            case 0x14D638u: goto label_14d638;
            case 0x14D640u: goto label_14d640;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D5A8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x14D5B0u;
label_14d5b0:
    // 0x14d5b0: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x14D5B0u;
    {
        const bool branch_taken_0x14d5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D5B0u;
        // 0x14d5b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d5b0) {
            ctx->pc = 0x14D64Cu;
            goto label_14d64c;
        }
    }
    ctx->pc = 0x14D5B8u;
label_14d5b8:
    // 0x14d5b8: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x14d5b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14d5bc: 0x4420023  bltzl       $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x14D5BCu;
    {
        const bool branch_taken_0x14d5bc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x14d5bc) {
            ctx->pc = 0x14D5C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D5BCu;
            // 0x14d5c0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D64Cu;
            goto label_14d64c;
        }
    }
    ctx->pc = 0x14D5C4u;
    // 0x14d5c4: 0x28410422  slti        $at, $v0, 0x422
    ctx->pc = 0x14d5c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1058) ? 1 : 0);
    // 0x14d5c8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D5C8u;
    {
        const bool branch_taken_0x14d5c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d5c8) {
            ctx->pc = 0x14D5D8u;
            goto label_14d5d8;
        }
    }
    ctx->pc = 0x14D5D0u;
    // 0x14d5d0: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x14D5D0u;
    {
        const bool branch_taken_0x14d5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D5D0u;
        // 0x14d5d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d5d0) {
            ctx->pc = 0x14D64Cu;
            goto label_14d64c;
        }
    }
    ctx->pc = 0x14D5D8u;
label_14d5d8:
    // 0x14d5d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14d5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14d5dc: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x14D5DCu;
    {
        const bool branch_taken_0x14d5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d5dc) {
            ctx->pc = 0x14D64Cu;
            goto label_14d64c;
        }
    }
    ctx->pc = 0x14D5E4u;
label_14d5e4:
    // 0x14d5e4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x14D5E4u;
    {
        const bool branch_taken_0x14d5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D5E4u;
        // 0x14d5e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d5e4) {
            ctx->pc = 0x14D64Cu;
            goto label_14d64c;
        }
    }
    ctx->pc = 0x14D5ECu;
label_14d5ec:
    // 0x14d5ec: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x14D5ECu;
    {
        const bool branch_taken_0x14d5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D5ECu;
        // 0x14d5f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d5ec) {
            ctx->pc = 0x14D64Cu;
            goto label_14d64c;
        }
    }
    ctx->pc = 0x14D5F4u;
label_14d5f4:
    // 0x14d5f4: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x14d5f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14d5f8: 0x28410189  slti        $at, $v0, 0x189
    ctx->pc = 0x14d5f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)393) ? 1 : 0);
    // 0x14d5fc: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D5FCu;
    {
        const bool branch_taken_0x14d5fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d5fc) {
            ctx->pc = 0x14D600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D5FCu;
            // 0x14d600: 0x28410506  slti        $at, $v0, 0x506 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1286) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D60Cu;
            goto label_14d60c;
        }
    }
    ctx->pc = 0x14D604u;
    // 0x14d604: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x14D604u;
    {
        const bool branch_taken_0x14d604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D604u;
        // 0x14d608: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d604) {
            ctx->pc = 0x14D64Cu;
            goto label_14d64c;
        }
    }
    ctx->pc = 0x14D60Cu;
label_14d60c:
    // 0x14d60c: 0x50200002  beql        $at, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x14D60Cu;
    {
        const bool branch_taken_0x14d60c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d60c) {
            ctx->pc = 0x14D610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D60Cu;
            // 0x14d610: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D618u;
            goto label_14d618;
        }
    }
    ctx->pc = 0x14D614u;
    // 0x14d614: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14d614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14d618:
    // 0x14d618: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x14D618u;
    {
        const bool branch_taken_0x14d618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d618) {
            ctx->pc = 0x14D64Cu;
            goto label_14d64c;
        }
    }
    ctx->pc = 0x14D620u;
label_14d620:
    // 0x14d620: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x14D620u;
    {
        const bool branch_taken_0x14d620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D620u;
        // 0x14d624: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d620) {
            ctx->pc = 0x14D64Cu;
            goto label_14d64c;
        }
    }
    ctx->pc = 0x14D628u;
label_14d628:
    // 0x14d628: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14D628u;
    {
        const bool branch_taken_0x14d628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D628u;
        // 0x14d62c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d628) {
            ctx->pc = 0x14D64Cu;
            goto label_14d64c;
        }
    }
    ctx->pc = 0x14D630u;
label_14d630:
    // 0x14d630: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14D630u;
    {
        const bool branch_taken_0x14d630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D630u;
        // 0x14d634: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d630) {
            ctx->pc = 0x14D64Cu;
            goto label_14d64c;
        }
    }
    ctx->pc = 0x14D638u;
label_14d638:
    // 0x14d638: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14D638u;
    {
        const bool branch_taken_0x14d638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D638u;
        // 0x14d63c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d638) {
            ctx->pc = 0x14D64Cu;
            goto label_14d64c;
        }
    }
    ctx->pc = 0x14D640u;
label_14d640:
    // 0x14d640: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14D640u;
    {
        const bool branch_taken_0x14d640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D640u;
        // 0x14d644: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d640) {
            ctx->pc = 0x14D64Cu;
            goto label_14d64c;
        }
    }
    ctx->pc = 0x14D648u;
    // 0x14d648: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14d648u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14d64c:
    // 0x14d64c: 0x3e00008  jr          $ra
    ctx->pc = 0x14D64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D654u;
    // 0x14d654: 0x0  nop
    ctx->pc = 0x14d654u;
    // NOP
    // 0x14d658: 0x0  nop
    ctx->pc = 0x14d658u;
    // NOP
    // 0x14d65c: 0x0  nop
    ctx->pc = 0x14d65cu;
    // NOP
    if (ctx->pc == 0x14d65cu) { ctx->pc = 0x14d660u; }
}
