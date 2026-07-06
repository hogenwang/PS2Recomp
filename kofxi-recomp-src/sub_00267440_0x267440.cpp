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

// Function: sub_00267440
// Address: 0x267440 - 0x267518
void sub_00267440_0x267440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267440_0x267440");
#endif

    switch (ctx->pc) {
        case 0x267470u: goto label_267470;
        case 0x267480u: goto label_267480;
        case 0x267498u: goto label_267498;
        case 0x2674b0u: goto label_2674b0;
        default: break;
    }

    ctx->pc = 0x267440u;

    // 0x267440: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x267440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x267444: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x267444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x267448: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x267448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x26744c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x26744cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x267450: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x267450u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267454: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x267454u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267458: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x267458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x26745c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x26745cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x267460: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x267460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267464: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x267464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267468: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x267468u;
    SET_GPR_U32(ctx, 31, 0x267470u);
    ctx->pc = 0x26746Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267468u;
    // 0x26746c: 0x2412fff8  addiu       $s2, $zero, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x267468u, 0x267470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267470u;
label_267470:
    // 0x267470: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x267470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267474: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x267474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267478: 0xc04a966  jal         func_12A598
    ctx->pc = 0x267478u;
    SET_GPR_U32(ctx, 31, 0x267480u);
    ctx->pc = 0x26747Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267478u;
    // 0x26747c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x267478u, 0x267480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267480u;
label_267480:
    // 0x267480: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x267480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267484: 0x3405c014  ori         $a1, $zero, 0xC014
    ctx->pc = 0x267484u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49172);
    // 0x267488: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x267488u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x26748c: 0x34a5697d  ori         $a1, $a1, 0x697D
    ctx->pc = 0x26748cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27005);
    // 0x267490: 0xc097bf2  jal         func_25EFC8
    ctx->pc = 0x267490u;
    SET_GPR_U32(ctx, 31, 0x267498u);
    ctx->pc = 0x267494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267490u;
    // 0x267494: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EFC8u, 0x267490u, 0x267498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267498u;
label_267498:
    // 0x267498: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x267498u;
    {
        const bool branch_taken_0x267498 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26749Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267498u;
        // 0x26749c: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267498) {
            ctx->pc = 0x2674B8u;
            goto label_2674b8;
        }
    }
    ctx->pc = 0x2674A0u;
    // 0x2674a0: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x2674a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x2674a4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2674a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2674a8: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2674A8u;
    SET_GPR_U32(ctx, 31, 0x2674B0u);
    ctx->pc = 0x2674ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2674A8u;
    // 0x2674ac: 0x24a578e0  addiu       $a1, $a1, 0x78E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2674A8u, 0x2674B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2674B0u;
label_2674b0:
    // 0x2674b0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2674B0u;
    {
        const bool branch_taken_0x2674b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2674B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2674B0u;
        // 0x2674b4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2674b0) {
            ctx->pc = 0x2674FCu;
            goto label_2674fc;
        }
    }
    ctx->pc = 0x2674B8u;
label_2674b8:
    // 0x2674b8: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2674b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2674bc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2674BCu;
    {
        const bool branch_taken_0x2674bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2674C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2674BCu;
        // 0x2674c0: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2674bc) {
            ctx->pc = 0x2674F8u;
            goto label_2674f8;
        }
    }
    ctx->pc = 0x2674C4u;
    // 0x2674c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2674c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2674c8: 0x24427930  addiu       $v0, $v0, 0x7930
    ctx->pc = 0x2674c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31024));
    // 0x2674cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2674ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2674d0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2674d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2674d4: 0x800008  jr          $a0
    ctx->pc = 0x2674D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2674DCu: goto label_2674dc;
            case 0x2674E4u: goto label_2674e4;
            case 0x2674ECu: goto label_2674ec;
            case 0x2674F4u: goto label_2674f4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2674D4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2674DCu;
label_2674dc:
    // 0x2674dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2674DCu;
    {
        const bool branch_taken_0x2674dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2674E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2674DCu;
        // 0x2674e0: 0x2412fed3  addiu       $s2, $zero, -0x12D (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966995));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2674dc) {
            ctx->pc = 0x2674F8u;
            goto label_2674f8;
        }
    }
    ctx->pc = 0x2674E4u;
label_2674e4:
    // 0x2674e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2674E4u;
    {
        const bool branch_taken_0x2674e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2674E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2674E4u;
        // 0x2674e8: 0x2412fed2  addiu       $s2, $zero, -0x12E (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966994));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2674e4) {
            ctx->pc = 0x2674F8u;
            goto label_2674f8;
        }
    }
    ctx->pc = 0x2674ECu;
label_2674ec:
    // 0x2674ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2674ECu;
    {
        const bool branch_taken_0x2674ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2674F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2674ECu;
        // 0x2674f0: 0x2412fed1  addiu       $s2, $zero, -0x12F (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966993));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2674ec) {
            ctx->pc = 0x2674F8u;
            goto label_2674f8;
        }
    }
    ctx->pc = 0x2674F4u;
label_2674f4:
    // 0x2674f4: 0x2412fed0  addiu       $s2, $zero, -0x130
    ctx->pc = 0x2674f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966992));
label_2674f8:
    // 0x2674f8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2674f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2674fc:
    // 0x2674fc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2674fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x267500: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x267500u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x267504: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x267504u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x267508: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x267508u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26750c: 0x3e00008  jr          $ra
    ctx->pc = 0x26750Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x267510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26750Cu;
        // 0x267510: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26750Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x267514u;
    // 0x267514: 0x0  nop
    ctx->pc = 0x267514u;
    // NOP
    if (ctx->pc == 0x267514u) { ctx->pc = 0x267518u; }
}
