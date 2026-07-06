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

// Function: sub_0017A400
// Address: 0x17a400 - 0x17a530
void sub_0017A400_0x17a400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A400_0x17a400");
#endif

    switch (ctx->pc) {
        case 0x17a470u: goto label_17a470;
        default: break;
    }

    ctx->pc = 0x17a400u;

    // 0x17a400: 0x28810100  slti        $at, $a0, 0x100
    ctx->pc = 0x17a400u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x17a404: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x17A404u;
    {
        const bool branch_taken_0x17a404 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a404) {
            ctx->pc = 0x17A408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A404u;
            // 0x17a408: 0x42600  sll         $a0, $a0, 24 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A414u;
            goto label_17a414;
        }
    }
    ctx->pc = 0x17A40Cu;
    // 0x17a40c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x17a40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x17a410: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x17a410u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_17a414:
    // 0x17a414: 0x805e8d8  j           func_17A360
    ctx->pc = 0x17A414u;
    ctx->pc = 0x17A360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A360u, 0x17A414u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x17A41Cu;
    // 0x17a41c: 0x0  nop
    ctx->pc = 0x17a41cu;
    // NOP
    // 0x17a420: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x17a420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x17a424: 0x3e00008  jr          $ra
    ctx->pc = 0x17A424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A424u;
        // 0x17a428: 0xaca2000c  sw          $v0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A42Cu;
    // 0x17a42c: 0x0  nop
    ctx->pc = 0x17a42cu;
    // NOP
    // 0x17a430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17a430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17a434: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17a434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17a438: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17a438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17a43c: 0x2463b600  addiu       $v1, $v1, -0x4A00
    ctx->pc = 0x17a43cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948352));
    // 0x17a440: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17a440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17a444: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17a444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17a448: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17a448u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a44c: 0x84840002  lh          $a0, 0x2($a0)
    ctx->pc = 0x17a44cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x17a450: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17a450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17a454: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x17a454u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17a458: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17A458u;
    {
        const bool branch_taken_0x17a458 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17a458) {
            ctx->pc = 0x17A45Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A458u;
            // 0x17a45c: 0x306500ff  andi        $a1, $v1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A468u;
            goto label_17a468;
        }
    }
    ctx->pc = 0x17A460u;
    // 0x17a460: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17A460u;
    {
        const bool branch_taken_0x17a460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A460u;
        // 0x17a464: 0x26020004  addiu       $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a460) {
            ctx->pc = 0x17A48Cu;
            goto label_17a48c;
        }
    }
    ctx->pc = 0x17A468u;
label_17a468:
    // 0x17a468: 0xc053420  jal         func_14D080
    ctx->pc = 0x17A468u;
    SET_GPR_U32(ctx, 31, 0x17A470u);
    ctx->pc = 0x17A46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A468u;
    // 0x17a46c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D080u, 0x17A468u, 0x17A470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A470u;
label_17a470:
    // 0x17a470: 0x86040002  lh          $a0, 0x2($s0)
    ctx->pc = 0x17a470u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x17a474: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17a474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17a478: 0x2463b600  addiu       $v1, $v1, -0x4A00
    ctx->pc = 0x17a478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948352));
    // 0x17a47c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x17a47cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17a480: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x17a480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x17a484: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17a484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17a488: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x17a488u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
label_17a48c:
    // 0x17a48c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17a48cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a490: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a490u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a494: 0x3e00008  jr          $ra
    ctx->pc = 0x17A494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A494u;
        // 0x17a498: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A49Cu;
    // 0x17a49c: 0x0  nop
    ctx->pc = 0x17a49cu;
    // NOP
    // 0x17a4a0: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x17a4a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x17a4a4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17a4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17a4a8: 0x2442ac60  addiu       $v0, $v0, -0x53A0
    ctx->pc = 0x17a4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945888));
    // 0x17a4ac: 0x2467ffff  addiu       $a3, $v1, -0x1
    ctx->pc = 0x17a4acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x17a4b0: 0x473021  addu        $a2, $v0, $a3
    ctx->pc = 0x17a4b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x17a4b4: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x17a4b4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17a4b8: 0x30a20020  andi        $v0, $a1, 0x20
    ctx->pc = 0x17a4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
    // 0x17a4bc: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x17A4BCu;
    {
        const bool branch_taken_0x17a4bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a4bc) {
            ctx->pc = 0x17A4C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A4BCu;
            // 0x17a4c0: 0x24820004  addiu       $v0, $a0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A4F4u;
            goto label_17a4f4;
        }
    }
    ctx->pc = 0x17A4C4u;
    // 0x17a4c4: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x17a4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x17a4c8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17a4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17a4cc: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x17a4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x17a4d0: 0x2442af70  addiu       $v0, $v0, -0x5090
    ctx->pc = 0x17a4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946672));
    // 0x17a4d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17a4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17a4d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17a4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17a4dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17a4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17a4e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17A4E0u;
    {
        const bool branch_taken_0x17a4e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a4e0) {
            ctx->pc = 0x17A4F0u;
            goto label_17a4f0;
        }
    }
    ctx->pc = 0x17A4E8u;
    // 0x17a4e8: 0x34a20004  ori         $v0, $a1, 0x4
    ctx->pc = 0x17a4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
    // 0x17a4ec: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x17a4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_17a4f0:
    // 0x17a4f0: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x17a4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_17a4f4:
    // 0x17a4f4: 0x3e00008  jr          $ra
    ctx->pc = 0x17A4F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A4F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A4FCu;
    // 0x17a4fc: 0x0  nop
    ctx->pc = 0x17a4fcu;
    // NOP
    // 0x17a500: 0x8ca5001c  lw          $a1, 0x1C($a1)
    ctx->pc = 0x17a500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x17a504: 0x24820002  addiu       $v0, $a0, 0x2
    ctx->pc = 0x17a504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x17a508: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17a508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17a50c: 0x2463ac60  addiu       $v1, $v1, -0x53A0
    ctx->pc = 0x17a50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945888));
    // 0x17a510: 0x52302  srl         $a0, $a1, 12
    ctx->pc = 0x17a510u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 12));
    // 0x17a514: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x17a514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x17a518: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x17a518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17a51c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x17a51cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17a520: 0x306300fb  andi        $v1, $v1, 0xFB
    ctx->pc = 0x17a520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)251);
    // 0x17a524: 0x3e00008  jr          $ra
    ctx->pc = 0x17A524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A524u;
        // 0x17a528: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A52Cu;
    // 0x17a52c: 0x0  nop
    ctx->pc = 0x17a52cu;
    // NOP
}
