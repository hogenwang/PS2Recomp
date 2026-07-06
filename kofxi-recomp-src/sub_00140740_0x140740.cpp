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

// Function: sub_00140740
// Address: 0x140740 - 0x140820
void sub_00140740_0x140740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140740_0x140740");
#endif

    switch (ctx->pc) {
        case 0x140774u: goto label_140774;
        case 0x1407b4u: goto label_1407b4;
        case 0x1407f0u: goto label_1407f0;
        case 0x14080cu: goto label_14080c;
        default: break;
    }

    ctx->pc = 0x140740u;

    // 0x140740: 0x80501d4  j           func_140750
    ctx->pc = 0x140740u;
    ctx->pc = 0x140750u;
    goto label_140750;
    ctx->pc = 0x140748u;
    // 0x140748: 0x0  nop
    ctx->pc = 0x140748u;
    // NOP
    // 0x14074c: 0x0  nop
    ctx->pc = 0x14074cu;
    // NOP
label_140750:
    // 0x140750: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x140750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x140754: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x140754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x140758: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x140758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14075c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14075cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x140760: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x140760u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140764: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x140764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x140768: 0x8ca400dc  lw          $a0, 0xDC($a1)
    ctx->pc = 0x140768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 220)));
    // 0x14076c: 0xc05c6ac  jal         func_171AB0
    ctx->pc = 0x14076Cu;
    SET_GPR_U32(ctx, 31, 0x140774u);
    ctx->pc = 0x140770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14076Cu;
    // 0x140770: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171AB0u, 0x14076Cu, 0x140774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140774u;
label_140774:
    // 0x140774: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x140774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x140778: 0x10600052  beqz        $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x140778u;
    {
        const bool branch_taken_0x140778 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140778u;
        // 0x14077c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140778) {
            ctx->pc = 0x1408C4u;
            return;
        }
    }
    ctx->pc = 0x140780u;
    // 0x140780: 0x8e23023c  lw          $v1, 0x23C($s1)
    ctx->pc = 0x140780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 572)));
    // 0x140784: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x140784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x140788: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x140788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14078c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14078cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140790: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x140790u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140794: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x140794u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140798: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x140798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14079c: 0xae22023c  sw          $v0, 0x23C($s1)
    ctx->pc = 0x14079cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 2));
    // 0x1407a0: 0xa620024c  sh          $zero, 0x24C($s1)
    ctx->pc = 0x1407a0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 588), (uint16_t)GPR_U32(ctx, 0));
    // 0x1407a4: 0x86220228  lh          $v0, 0x228($s1)
    ctx->pc = 0x1407a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 552)));
    // 0x1407a8: 0xa622022a  sh          $v0, 0x22A($s1)
    ctx->pc = 0x1407a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 554), (uint16_t)GPR_U32(ctx, 2));
    // 0x1407ac: 0xc05a888  jal         func_16A220
    ctx->pc = 0x1407ACu;
    SET_GPR_U32(ctx, 31, 0x1407B4u);
    ctx->pc = 0x1407B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1407ACu;
    // 0x1407b0: 0xa6200228  sh          $zero, 0x228($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 552), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x1407ACu, 0x1407B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1407B4u;
label_1407b4:
    // 0x1407b4: 0x2e41000b  sltiu       $at, $s2, 0xB
    ctx->pc = 0x1407b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x1407b8: 0x5020003f  beql        $at, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x1407B8u;
    {
        const bool branch_taken_0x1407b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1407b8) {
            ctx->pc = 0x1407BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1407B8u;
            // 0x1407bc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1408B8u;
            return;
        }
    }
    ctx->pc = 0x1407C0u;
    // 0x1407c0: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1407c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1407c4: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1407c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1407c8: 0x2484ccd0  addiu       $a0, $a0, -0x3330
    ctx->pc = 0x1407c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954192));
    // 0x1407cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1407ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1407d0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1407d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1407d4: 0x600008  jr          $v1
    ctx->pc = 0x1407D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1407DCu: goto label_1407dc;
            case 0x1407F8u: goto label_1407f8;
            case 0x140814u: goto label_140814;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1407D4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1407DCu;
label_1407dc:
    // 0x1407dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1407dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1407e0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1407e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1407e4: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x1407e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1407e8: 0xc05a888  jal         func_16A220
    ctx->pc = 0x1407E8u;
    SET_GPR_U32(ctx, 31, 0x1407F0u);
    ctx->pc = 0x1407ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1407E8u;
    // 0x1407ec: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x1407E8u, 0x1407F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1407F0u;
label_1407f0:
    // 0x1407f0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1407F0u;
    {
        const bool branch_taken_0x1407f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1407f0) {
            ctx->pc = 0x1408B4u;
            return;
        }
    }
    ctx->pc = 0x1407F8u;
label_1407f8:
    // 0x1407f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1407f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1407fc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1407fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x140800: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x140800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x140804: 0xc05a888  jal         func_16A220
    ctx->pc = 0x140804u;
    SET_GPR_U32(ctx, 31, 0x14080Cu);
    ctx->pc = 0x140808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140804u;
    // 0x140808: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x140804u, 0x14080Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14080Cu;
label_14080c:
    // 0x14080c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x14080Cu;
    {
        const bool branch_taken_0x14080c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14080c) {
            ctx->pc = 0x1408B4u;
            return;
        }
    }
    ctx->pc = 0x140814u;
label_140814:
    // 0x140814: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x140814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140818: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x140818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14081c: 0x24062000  addiu       $a2, $zero, 0x2000
    ctx->pc = 0x14081cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
}
