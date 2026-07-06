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

// Function: sub_001AE8A0
// Address: 0x1ae8a0 - 0x1ae938
void sub_001AE8A0_0x1ae8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AE8A0_0x1ae8a0");
#endif

    switch (ctx->pc) {
        case 0x1ae8a0u: goto label_1ae8a0;
        case 0x1ae8a4u: goto label_1ae8a4;
        case 0x1ae8a8u: goto label_1ae8a8;
        case 0x1ae8acu: goto label_1ae8ac;
        case 0x1ae8b0u: goto label_1ae8b0;
        case 0x1ae8b4u: goto label_1ae8b4;
        case 0x1ae8b8u: goto label_1ae8b8;
        case 0x1ae8bcu: goto label_1ae8bc;
        case 0x1ae8c0u: goto label_1ae8c0;
        case 0x1ae8c4u: goto label_1ae8c4;
        case 0x1ae8c8u: goto label_1ae8c8;
        case 0x1ae8ccu: goto label_1ae8cc;
        case 0x1ae8d0u: goto label_1ae8d0;
        case 0x1ae8d4u: goto label_1ae8d4;
        case 0x1ae8d8u: goto label_1ae8d8;
        case 0x1ae8dcu: goto label_1ae8dc;
        case 0x1ae8e0u: goto label_1ae8e0;
        case 0x1ae8e4u: goto label_1ae8e4;
        case 0x1ae8e8u: goto label_1ae8e8;
        case 0x1ae8ecu: goto label_1ae8ec;
        case 0x1ae8f0u: goto label_1ae8f0;
        case 0x1ae8f4u: goto label_1ae8f4;
        case 0x1ae8f8u: goto label_1ae8f8;
        case 0x1ae8fcu: goto label_1ae8fc;
        case 0x1ae900u: goto label_1ae900;
        case 0x1ae904u: goto label_1ae904;
        case 0x1ae908u: goto label_1ae908;
        case 0x1ae90cu: goto label_1ae90c;
        case 0x1ae910u: goto label_1ae910;
        case 0x1ae914u: goto label_1ae914;
        case 0x1ae918u: goto label_1ae918;
        case 0x1ae91cu: goto label_1ae91c;
        case 0x1ae920u: goto label_1ae920;
        case 0x1ae924u: goto label_1ae924;
        case 0x1ae928u: goto label_1ae928;
        case 0x1ae92cu: goto label_1ae92c;
        case 0x1ae930u: goto label_1ae930;
        case 0x1ae934u: goto label_1ae934;
        default: break;
    }

    ctx->pc = 0x1ae8a0u;

label_1ae8a0:
    // 0x1ae8a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ae8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ae8a4:
    // 0x1ae8a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ae8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1ae8a8:
    // 0x1ae8a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ae8a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ae8ac:
    // 0x1ae8ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ae8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1ae8b0:
    // 0x1ae8b0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1ae8b4:
    if (ctx->pc == 0x1AE8B4u) {
        ctx->pc = 0x1AE8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE8B0u;
        // 0x1ae8b4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE8B8u;
        goto label_1ae8b8;
    }
    ctx->pc = 0x1AE8B0u;
    {
        const bool branch_taken_0x1ae8b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE8B0u;
        // 0x1ae8b4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae8b0) {
            ctx->pc = 0x1AE8C0u;
            goto label_1ae8c0;
        }
    }
    ctx->pc = 0x1AE8B8u;
label_1ae8b8:
    // 0x1ae8b8: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
label_1ae8bc:
    if (ctx->pc == 0x1AE8BCu) {
        ctx->pc = 0x1AE8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE8B8u;
        // 0x1ae8bc: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE8C0u;
        goto label_1ae8c0;
    }
    ctx->pc = 0x1AE8B8u;
    {
        const bool branch_taken_0x1ae8b8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE8B8u;
        // 0x1ae8bc: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae8b8) {
            ctx->pc = 0x1AE8E0u;
            goto label_1ae8e0;
        }
    }
    ctx->pc = 0x1AE8C0u;
label_1ae8c0:
    // 0x1ae8c0: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1ae8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_1ae8c4:
    // 0x1ae8c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ae8c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ae8c8:
    // 0x1ae8c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ae8c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1ae8cc:
    // 0x1ae8cc: 0x24847378  addiu       $a0, $a0, 0x7378
    ctx->pc = 0x1ae8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29560));
label_1ae8d0:
    // 0x1ae8d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ae8d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ae8d4:
    // 0x1ae8d4: 0x807371e  j           func_1CDC78
label_1ae8d8:
    if (ctx->pc == 0x1AE8D8u) {
        ctx->pc = 0x1AE8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE8D4u;
        // 0x1ae8d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE8DCu;
        goto label_1ae8dc;
    }
    ctx->pc = 0x1AE8D4u;
    ctx->pc = 0x1AE8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE8D4u;
    // 0x1ae8d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDC78u;
    sub_001CDC78_0x1cdc78(rdram, ctx, runtime); return;
    ctx->pc = 0x1AE8DCu;
label_1ae8dc:
    // 0x1ae8dc: 0x0  nop
    ctx->pc = 0x1ae8dcu;
    // NOP
label_1ae8e0:
    // 0x1ae8e0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ae8e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ae8e4:
    // 0x1ae8e4: 0x2450f710  addiu       $s0, $v0, -0x8F0
    ctx->pc = 0x1ae8e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965008));
label_1ae8e8:
    // 0x1ae8e8: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x1ae8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1ae8ec:
    // 0x1ae8ec: 0xc04a966  jal         func_12A598
label_1ae8f0:
    if (ctx->pc == 0x1AE8F0u) {
        ctx->pc = 0x1AE8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE8ECu;
        // 0x1ae8f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE8F4u;
        goto label_1ae8f4;
    }
    ctx->pc = 0x1AE8ECu;
    SET_GPR_U32(ctx, 31, 0x1AE8F4u);
    ctx->pc = 0x1AE8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE8ECu;
    // 0x1ae8f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x1AE8ECu, 0x1AE8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE8F4u;
label_1ae8f4:
    // 0x1ae8f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ae8f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ae8f8:
    // 0x1ae8f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ae8f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ae8fc:
    // 0x1ae8fc: 0xc04a88c  jal         func_12A230
label_1ae900:
    if (ctx->pc == 0x1AE900u) {
        ctx->pc = 0x1AE900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE8FCu;
        // 0x1ae900: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE904u;
        goto label_1ae904;
    }
    ctx->pc = 0x1AE8FCu;
    SET_GPR_U32(ctx, 31, 0x1AE904u);
    ctx->pc = 0x1AE900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE8FCu;
    // 0x1ae900: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A230u, 0x1AE8FCu, 0x1AE904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE904u;
label_1ae904:
    // 0x1ae904: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1ae904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1ae908:
    // 0x1ae908: 0x8c63f708  lw          $v1, -0x8F8($v1)
    ctx->pc = 0x1ae908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965000)));
label_1ae90c:
    // 0x1ae90c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1ae910:
    if (ctx->pc == 0x1AE910u) {
        ctx->pc = 0x1AE910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE90Cu;
        // 0x1ae910: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE914u;
        goto label_1ae914;
    }
    ctx->pc = 0x1AE90Cu;
    {
        const bool branch_taken_0x1ae90c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE90Cu;
        // 0x1ae910: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae90c) {
            ctx->pc = 0x1AE920u;
            goto label_1ae920;
        }
    }
    ctx->pc = 0x1AE914u;
label_1ae914:
    // 0x1ae914: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ae914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1ae918:
    // 0x1ae918: 0x60f809  jalr        $v1
label_1ae91c:
    if (ctx->pc == 0x1AE91Cu) {
        ctx->pc = 0x1AE91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE918u;
        // 0x1ae91c: 0x8c44f70c  lw          $a0, -0x8F4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965004)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE920u;
        goto label_1ae920;
    }
    ctx->pc = 0x1AE918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AE920u);
        ctx->pc = 0x1AE91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE918u;
        // 0x1ae91c: 0x8c44f70c  lw          $a0, -0x8F4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965004)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE918u, 0x1AE920u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AE920u;
label_1ae920:
    // 0x1ae920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ae920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ae924:
    // 0x1ae924: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ae924u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ae928:
    // 0x1ae928: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ae928u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1ae92c:
    // 0x1ae92c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ae92cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ae930:
    // 0x1ae930: 0x807371e  j           func_1CDC78
label_1ae934:
    if (ctx->pc == 0x1AE934u) {
        ctx->pc = 0x1AE934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE930u;
        // 0x1ae934: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE938u;
        goto label_fallthrough_0x1ae930;
    }
    ctx->pc = 0x1AE930u;
    ctx->pc = 0x1AE934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE930u;
    // 0x1ae934: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDC78u;
    sub_001CDC78_0x1cdc78(rdram, ctx, runtime); return;
label_fallthrough_0x1ae930:
    ctx->pc = 0x1AE938u;
}
