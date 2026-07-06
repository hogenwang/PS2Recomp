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

// Function: sub_00200970
// Address: 0x200970 - 0x200ae0
void sub_00200970_0x200970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200970_0x200970");
#endif

    switch (ctx->pc) {
        case 0x2009b0u: goto label_2009b0;
        default: break;
    }

    ctx->pc = 0x200970u;

    // 0x200970: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x200970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x200974: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x200974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x200978: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x200978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20097c: 0x8080262  j           func_200988
    ctx->pc = 0x20097Cu;
    ctx->pc = 0x200980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20097Cu;
    // 0x200980: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200988u;
    goto label_200988;
    ctx->pc = 0x200984u;
    // 0x200984: 0x0  nop
    ctx->pc = 0x200984u;
    // NOP
label_200988:
    // 0x200988: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x200988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20098c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20098cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x200990: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x200990u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200994: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x200994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x200998: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x200998u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20099c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20099cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2009a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2009a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2009a4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2009a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2009a8: 0xc0802b8  jal         func_200AE0
    ctx->pc = 0x2009A8u;
    SET_GPR_U32(ctx, 31, 0x2009B0u);
    ctx->pc = 0x2009ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2009A8u;
    // 0x2009ac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AE0u, 0x2009A8u, 0x2009B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2009B0u;
label_2009b0:
    // 0x2009b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2009b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2009b4: 0x54430044  bnel        $v0, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x2009B4u;
    {
        const bool branch_taken_0x2009b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2009b4) {
            ctx->pc = 0x2009B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2009B4u;
            // 0x2009b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200AC8u;
            goto label_200ac8;
        }
    }
    ctx->pc = 0x2009BCu;
    // 0x2009bc: 0x2e220065  sltiu       $v0, $s1, 0x65
    ctx->pc = 0x2009bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)101) ? 1 : 0);
    // 0x2009c0: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2009C0u;
    {
        const bool branch_taken_0x2009c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2009C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2009C0u;
        // 0x2009c4: 0xae110034  sw          $s1, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2009c0) {
            ctx->pc = 0x200AA0u;
            goto label_200aa0;
        }
    }
    ctx->pc = 0x2009C8u;
    // 0x2009c8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2009c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2009cc: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x2009ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x2009d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2009d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2009d4: 0x8c63ef00  lw          $v1, -0x1100($v1)
    ctx->pc = 0x2009d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962944)));
    // 0x2009d8: 0x600008  jr          $v1
    ctx->pc = 0x2009D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2009E0u: goto label_2009e0;
            case 0x200A00u: goto label_200a00;
            case 0x200A20u: goto label_200a20;
            case 0x200A40u: goto label_200a40;
            case 0x200A60u: goto label_200a60;
            case 0x200A80u: goto label_200a80;
            case 0x200AA0u: goto label_200aa0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2009D8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2009E0u;
label_2009e0:
    // 0x2009e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2009e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2009e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2009e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2009e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2009e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2009ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2009ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2009f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2009f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2009f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2009f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2009f8: 0x80802e0  j           func_200B80
    ctx->pc = 0x2009F8u;
    ctx->pc = 0x2009FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2009F8u;
    // 0x2009fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200B80u, 0x2009F8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x200A00u;
label_200a00:
    // 0x200a00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x200a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200a04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x200a04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200a08: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x200a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200a0c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x200a0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200a10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x200a10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x200a14: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x200a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x200a18: 0x808031c  j           func_200C70
    ctx->pc = 0x200A18u;
    ctx->pc = 0x200A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200A18u;
    // 0x200a1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200C70u, 0x200A18u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x200A20u;
label_200a20:
    // 0x200a20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x200a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200a24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x200a24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200a28: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x200a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200a2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x200a2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200a30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x200a30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x200a34: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x200a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x200a38: 0x8080324  j           func_200C90
    ctx->pc = 0x200A38u;
    ctx->pc = 0x200A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200A38u;
    // 0x200a3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200C90u, 0x200A38u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x200A40u;
label_200a40:
    // 0x200a40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x200a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200a44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x200a44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200a48: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x200a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200a4c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x200a4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200a50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x200a50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x200a54: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x200a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x200a58: 0x808032c  j           func_200CB0
    ctx->pc = 0x200A58u;
    ctx->pc = 0x200A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200A58u;
    // 0x200a5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200CB0u, 0x200A58u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x200A60u;
label_200a60:
    // 0x200a60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x200a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200a64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x200a64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200a68: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x200a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200a6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x200a6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200a70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x200a70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x200a74: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x200a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x200a78: 0x8080334  j           func_200CD0
    ctx->pc = 0x200A78u;
    ctx->pc = 0x200A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200A78u;
    // 0x200a7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200CD0u, 0x200A78u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x200A80u;
label_200a80:
    // 0x200a80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x200a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200a84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x200a84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200a88: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x200a88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200a8c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x200a8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200a90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x200a90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x200a94: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x200a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x200a98: 0x80802e8  j           func_200BA0
    ctx->pc = 0x200A98u;
    ctx->pc = 0x200A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200A98u;
    // 0x200a9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200BA0u, 0x200A98u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x200AA0u;
label_200aa0:
    // 0x200aa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x200aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200aa4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x200aa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200aa8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x200aa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200aac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x200aacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200ab0: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x200ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x200ab4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x200ab4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x200ab8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x200ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x200abc: 0x24c6eec0  addiu       $a2, $a2, -0x1140
    ctx->pc = 0x200abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962880));
    // 0x200ac0: 0x808063e  j           func_2018F8
    ctx->pc = 0x200AC0u;
    ctx->pc = 0x200AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200AC0u;
    // 0x200ac4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2018F8u;
    sub_002018F8_0x2018f8(rdram, ctx, runtime); return;
    ctx->pc = 0x200AC8u;
label_200ac8:
    // 0x200ac8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x200ac8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x200acc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x200accu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200ad0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x200ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x200ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x200AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200AD4u;
        // 0x200ad8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200ADCu;
    // 0x200adc: 0x0  nop
    ctx->pc = 0x200adcu;
    // NOP
    if (ctx->pc == 0x200adcu) { ctx->pc = 0x200ae0u; }
}
