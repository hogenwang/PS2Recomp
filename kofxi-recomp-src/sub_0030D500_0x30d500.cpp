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

// Function: sub_0030D500
// Address: 0x30d500 - 0x30d630
void sub_0030D500_0x30d500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D500_0x30d500");
#endif

    switch (ctx->pc) {
        case 0x30d5a8u: goto label_30d5a8;
        case 0x30d5b4u: goto label_30d5b4;
        case 0x30d5c0u: goto label_30d5c0;
        case 0x30d5c8u: goto label_30d5c8;
        case 0x30d5d0u: goto label_30d5d0;
        case 0x30d5dcu: goto label_30d5dc;
        case 0x30d5fcu: goto label_30d5fc;
        default: break;
    }

    ctx->pc = 0x30d500u;

    // 0x30d500: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30d500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30d504: 0x3c0301d2  lui         $v1, 0x1D2
    ctx->pc = 0x30d504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)466 << 16));
    // 0x30d508: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30d508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30d50c: 0x94631e40  lhu         $v1, 0x1E40($v1)
    ctx->pc = 0x30d50cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 7744)));
    // 0x30d510: 0x54600042  bnel        $v1, $zero, . + 4 + (0x42 << 2)
    ctx->pc = 0x30D510u;
    {
        const bool branch_taken_0x30d510 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30d510) {
            ctx->pc = 0x30D514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30D510u;
            // 0x30d514: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30D61Cu;
            goto label_30d61c;
        }
    }
    ctx->pc = 0x30D518u;
    // 0x30d518: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x30d518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x30d51c: 0x90649738  lbu         $a0, -0x68C8($v1)
    ctx->pc = 0x30d51cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940472)));
    // 0x30d520: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30D520u;
    {
        const bool branch_taken_0x30d520 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d520) {
            ctx->pc = 0x30D540u;
            goto label_30d540;
        }
    }
    ctx->pc = 0x30D528u;
    // 0x30d528: 0x3c0301d2  lui         $v1, 0x1D2
    ctx->pc = 0x30d528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)466 << 16));
    // 0x30d52c: 0x90631e38  lbu         $v1, 0x1E38($v1)
    ctx->pc = 0x30d52cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 7736)));
    // 0x30d530: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x30D530u;
    {
        const bool branch_taken_0x30d530 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30d530) {
            ctx->pc = 0x30D55Cu;
            goto label_30d55c;
        }
    }
    ctx->pc = 0x30D538u;
    // 0x30d538: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x30D538u;
    {
        const bool branch_taken_0x30d538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d538) {
            ctx->pc = 0x30D618u;
            goto label_30d618;
        }
    }
    ctx->pc = 0x30D540u;
label_30d540:
    // 0x30d540: 0x3c0301d1  lui         $v1, 0x1D1
    ctx->pc = 0x30d540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)465 << 16));
    // 0x30d544: 0x8c631df0  lw          $v1, 0x1DF0($v1)
    ctx->pc = 0x30d544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7664)));
    // 0x30d548: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30D548u;
    {
        const bool branch_taken_0x30d548 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30d548) {
            ctx->pc = 0x30D55Cu;
            goto label_30d55c;
        }
    }
    ctx->pc = 0x30D550u;
    // 0x30d550: 0x3c0301d2  lui         $v1, 0x1D2
    ctx->pc = 0x30d550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)466 << 16));
    // 0x30d554: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x30D554u;
    {
        const bool branch_taken_0x30d554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D554u;
        // 0x30d558: 0xa0601e38  sb          $zero, 0x1E38($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 7736), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d554) {
            ctx->pc = 0x30D618u;
            goto label_30d618;
        }
    }
    ctx->pc = 0x30D55Cu;
label_30d55c:
    // 0x30d55c: 0x3c0301d2  lui         $v1, 0x1D2
    ctx->pc = 0x30d55cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)466 << 16));
    // 0x30d560: 0x3c0201d2  lui         $v0, 0x1D2
    ctx->pc = 0x30d560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)466 << 16));
    // 0x30d564: 0xac601e30  sw          $zero, 0x1E30($v1)
    ctx->pc = 0x30d564u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7728), GPR_U32(ctx, 0));
    // 0x30d568: 0xac401e18  sw          $zero, 0x1E18($v0)
    ctx->pc = 0x30d568u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7704), GPR_U32(ctx, 0));
    // 0x30d56c: 0x3c0301d2  lui         $v1, 0x1D2
    ctx->pc = 0x30d56cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)466 << 16));
    // 0x30d570: 0x3c0201d2  lui         $v0, 0x1D2
    ctx->pc = 0x30d570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)466 << 16));
    // 0x30d574: 0xac601e10  sw          $zero, 0x1E10($v1)
    ctx->pc = 0x30d574u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7696), GPR_U32(ctx, 0));
    // 0x30d578: 0xac401e08  sw          $zero, 0x1E08($v0)
    ctx->pc = 0x30d578u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7688), GPR_U32(ctx, 0));
    // 0x30d57c: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30d57cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30d580: 0x3c0201d2  lui         $v0, 0x1D2
    ctx->pc = 0x30d580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)466 << 16));
    // 0x30d584: 0xac601e60  sw          $zero, 0x1E60($v1)
    ctx->pc = 0x30d584u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7776), GPR_U32(ctx, 0));
    // 0x30d588: 0xac401e28  sw          $zero, 0x1E28($v0)
    ctx->pc = 0x30d588u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7720), GPR_U32(ctx, 0));
    // 0x30d58c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30d58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30d590: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x30d590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x30d594: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30D594u;
    {
        const bool branch_taken_0x30d594 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D594u;
        // 0x30d598: 0xac431e68  sw          $v1, 0x1E68($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 7784), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d594) {
            ctx->pc = 0x30D5A8u;
            goto label_30d5a8;
        }
    }
    ctx->pc = 0x30D59Cu;
    // 0x30d59c: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30d59cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30d5a0: 0xc0c3528  jal         func_30D4A0
    ctx->pc = 0x30D5A0u;
    SET_GPR_U32(ctx, 31, 0x30D5A8u);
    ctx->pc = 0x30D5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D5A0u;
    // 0x30d5a4: 0x248447a0  addiu       $a0, $a0, 0x47A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D4A0u, 0x30D5A0u, 0x30D5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D5A8u;
label_30d5a8:
    // 0x30d5a8: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30d5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30d5ac: 0xc0c2c8c  jal         func_30B230
    ctx->pc = 0x30D5ACu;
    SET_GPR_U32(ctx, 31, 0x30D5B4u);
    ctx->pc = 0x30D5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D5ACu;
    // 0x30d5b0: 0x248447a0  addiu       $a0, $a0, 0x47A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B230u, 0x30D5ACu, 0x30D5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D5B4u;
label_30d5b4:
    // 0x30d5b4: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30d5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30d5b8: 0xc0c2fc0  jal         func_30BF00
    ctx->pc = 0x30D5B8u;
    SET_GPR_U32(ctx, 31, 0x30D5C0u);
    ctx->pc = 0x30D5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D5B8u;
    // 0x30d5bc: 0x248447a0  addiu       $a0, $a0, 0x47A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BF00u, 0x30D5B8u, 0x30D5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D5C0u;
label_30d5c0:
    // 0x30d5c0: 0xc0c2c98  jal         func_30B260
    ctx->pc = 0x30D5C0u;
    SET_GPR_U32(ctx, 31, 0x30D5C8u);
    ctx->pc = 0x30B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B260u, 0x30D5C0u, 0x30D5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D5C8u;
label_30d5c8:
    // 0x30d5c8: 0xc0c2630  jal         func_3098C0
    ctx->pc = 0x30D5C8u;
    SET_GPR_U32(ctx, 31, 0x30D5D0u);
    ctx->pc = 0x3098C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3098C0u, 0x30D5C8u, 0x30D5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D5D0u;
label_30d5d0:
    // 0x30d5d0: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30d5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30d5d4: 0xc0c2a80  jal         func_30AA00
    ctx->pc = 0x30D5D4u;
    SET_GPR_U32(ctx, 31, 0x30D5DCu);
    ctx->pc = 0x30D5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D5D4u;
    // 0x30d5d8: 0x248447a0  addiu       $a0, $a0, 0x47A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30AA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30AA00u, 0x30D5D4u, 0x30D5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D5DCu;
label_30d5dc:
    // 0x30d5dc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x30d5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x30d5e0: 0x9063d9c8  lbu         $v1, -0x2638($v1)
    ctx->pc = 0x30d5e0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957512)));
    // 0x30d5e4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x30d5e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x30d5e8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30D5E8u;
    {
        const bool branch_taken_0x30d5e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d5e8) {
            ctx->pc = 0x30D5FCu;
            goto label_30d5fc;
        }
    }
    ctx->pc = 0x30D5F0u;
    // 0x30d5f0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30d5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30d5f4: 0xc0c7c28  jal         func_31F0A0
    ctx->pc = 0x30D5F4u;
    SET_GPR_U32(ctx, 31, 0x30D5FCu);
    ctx->pc = 0x30D5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D5F4u;
    // 0x30d5f8: 0xc44cd9c0  lwc1        $f12, -0x2640($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F0A0u, 0x30D5F4u, 0x30D5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D5FCu;
label_30d5fc:
    // 0x30d5fc: 0x3c0301d2  lui         $v1, 0x1D2
    ctx->pc = 0x30d5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)466 << 16));
    // 0x30d600: 0x3c0401d2  lui         $a0, 0x1D2
    ctx->pc = 0x30d600u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)466 << 16));
    // 0x30d604: 0x90651e38  lbu         $a1, 0x1E38($v1)
    ctx->pc = 0x30d604u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 7736)));
    // 0x30d608: 0x3c0301d1  lui         $v1, 0x1D1
    ctx->pc = 0x30d608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)465 << 16));
    // 0x30d60c: 0xac601df0  sw          $zero, 0x1DF0($v1)
    ctx->pc = 0x30d60cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7664), GPR_U32(ctx, 0));
    // 0x30d610: 0x34a300f0  ori         $v1, $a1, 0xF0
    ctx->pc = 0x30d610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)240);
    // 0x30d614: 0xa0831e38  sb          $v1, 0x1E38($a0)
    ctx->pc = 0x30d614u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7736), (uint8_t)GPR_U32(ctx, 3));
label_30d618:
    // 0x30d618: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30d618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30d61c:
    // 0x30d61c: 0x3e00008  jr          $ra
    ctx->pc = 0x30D61Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D61Cu;
        // 0x30d620: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D61Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D624u;
    // 0x30d624: 0x0  nop
    ctx->pc = 0x30d624u;
    // NOP
    // 0x30d628: 0x0  nop
    ctx->pc = 0x30d628u;
    // NOP
    // 0x30d62c: 0x0  nop
    ctx->pc = 0x30d62cu;
    // NOP
}
