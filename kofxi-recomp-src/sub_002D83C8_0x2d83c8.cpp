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

// Function: sub_002D83C8
// Address: 0x2d83c8 - 0x2d85e0
void sub_002D83C8_0x2d83c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D83C8_0x2d83c8");
#endif

    switch (ctx->pc) {
        case 0x2d83e0u: goto label_2d83e0;
        case 0x2d83e8u: goto label_2d83e8;
        case 0x2d8410u: goto label_2d8410;
        case 0x2d8420u: goto label_2d8420;
        case 0x2d8450u: goto label_2d8450;
        case 0x2d8488u: goto label_2d8488;
        case 0x2d84a0u: goto label_2d84a0;
        case 0x2d84c8u: goto label_2d84c8;
        case 0x2d84d8u: goto label_2d84d8;
        case 0x2d8500u: goto label_2d8500;
        case 0x2d8510u: goto label_2d8510;
        case 0x2d8540u: goto label_2d8540;
        case 0x2d8578u: goto label_2d8578;
        case 0x2d85b8u: goto label_2d85b8;
        default: break;
    }

    ctx->pc = 0x2d83c8u;

    // 0x2d83c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d83c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d83cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d83ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d83d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d83d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d83d4: 0x80b6112  j           func_2D8448
    ctx->pc = 0x2D83D4u;
    ctx->pc = 0x2D83D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D83D4u;
    // 0x2d83d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8448u;
    goto label_2d8448;
    ctx->pc = 0x2D83DCu;
    // 0x2d83dc: 0x0  nop
    ctx->pc = 0x2d83dcu;
    // NOP
label_2d83e0:
    // 0x2d83e0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2d83e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d83e4: 0x0  nop
    ctx->pc = 0x2d83e4u;
    // NOP
label_2d83e8:
    // 0x2d83e8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2d83e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d83ec: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2d83ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2d83f0: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x2d83f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2d83f4: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x2d83f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d83f8: 0x0  nop
    ctx->pc = 0x2d83f8u;
    // NOP
    // 0x2d83fc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D83FCu;
    {
        const bool branch_taken_0x2d83fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D83FCu;
        // 0x2d8400: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d83fc) {
            ctx->pc = 0x2D83E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d83e8;
        }
    }
    ctx->pc = 0x2D8404u;
    // 0x2d8404: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8404u;
        // 0x2d8408: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D840Cu;
    // 0x2d840c: 0x0  nop
    ctx->pc = 0x2d840cu;
    // NOP
label_2d8410:
    // 0x2d8410: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x2d8410u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d8414: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D8414u;
    {
        const bool branch_taken_0x2d8414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8414u;
        // 0x2d8418: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8414) {
            ctx->pc = 0x2D843Cu;
            goto label_2d843c;
        }
    }
    ctx->pc = 0x2D841Cu;
    // 0x2d841c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2d841cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2d8420:
    // 0x2d8420: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x2d8420u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d8424: 0x0  nop
    ctx->pc = 0x2d8424u;
    // NOP
    // 0x2d8428: 0x0  nop
    ctx->pc = 0x2d8428u;
    // NOP
    // 0x2d842c: 0x0  nop
    ctx->pc = 0x2d842cu;
    // NOP
    // 0x2d8430: 0x0  nop
    ctx->pc = 0x2d8430u;
    // NOP
    // 0x2d8434: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D8434u;
    {
        const bool branch_taken_0x2d8434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d8434) {
            ctx->pc = 0x2D8438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D8434u;
            // 0x2d8438: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8420u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d8420;
        }
    }
    ctx->pc = 0x2D843Cu;
label_2d843c:
    // 0x2d843c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D843Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D843Cu;
        // 0x2d8440: 0x831023  subu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D843Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8444u;
    // 0x2d8444: 0x0  nop
    ctx->pc = 0x2d8444u;
    // NOP
label_2d8448:
    // 0x2d8448: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D8448u;
    {
        const bool branch_taken_0x2d8448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8448u;
        // 0x2d844c: 0x80830000  lb          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8448) {
            ctx->pc = 0x2D8458u;
            goto label_2d8458;
        }
    }
    ctx->pc = 0x2D8450u;
label_2d8450:
    // 0x2d8450: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2d8450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2d8454: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x2d8454u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2d8458:
    // 0x2d8458: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D8458u;
    {
        const bool branch_taken_0x2d8458 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8458) {
            ctx->pc = 0x2D845Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D8458u;
            // 0x2d845c: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8478u;
            goto label_2d8478;
        }
    }
    ctx->pc = 0x2D8460u;
    // 0x2d8460: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x2d8460u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d8464: 0x0  nop
    ctx->pc = 0x2d8464u;
    // NOP
    // 0x2d8468: 0x0  nop
    ctx->pc = 0x2d8468u;
    // NOP
    // 0x2d846c: 0x5062fff8  beql        $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2D846Cu;
    {
        const bool branch_taken_0x2d846c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d846c) {
            ctx->pc = 0x2D8470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D846Cu;
            // 0x2d8470: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8450u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d8450;
        }
    }
    ctx->pc = 0x2D8474u;
    // 0x2d8474: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2d8474u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2d8478:
    // 0x2d8478: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2d8478u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d847c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D847Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D847Cu;
        // 0x2d8480: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D847Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8484u;
    // 0x2d8484: 0x0  nop
    ctx->pc = 0x2d8484u;
    // NOP
label_2d8488:
    // 0x2d8488: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2d8488u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d848c: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x2d848cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2d8490: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x2D8490u;
    {
        const bool branch_taken_0x2d8490 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8490u;
        // 0x2d8494: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8490) {
            ctx->pc = 0x2D84BCu;
            goto label_2d84bc;
        }
    }
    ctx->pc = 0x2D8498u;
    // 0x2d8498: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2d8498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d849c: 0x0  nop
    ctx->pc = 0x2d849cu;
    // NOP
label_2d84a0:
    // 0x2d84a0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2d84a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2d84a4: 0xa0e50000  sb          $a1, 0x0($a3)
    ctx->pc = 0x2d84a4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x2d84a8: 0x0  nop
    ctx->pc = 0x2d84a8u;
    // NOP
    // 0x2d84ac: 0x0  nop
    ctx->pc = 0x2d84acu;
    // NOP
    // 0x2d84b0: 0x0  nop
    ctx->pc = 0x2d84b0u;
    // NOP
    // 0x2d84b4: 0x1466fffa  bne         $v1, $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D84B4u;
    {
        const bool branch_taken_0x2d84b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x2D84B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D84B4u;
        // 0x2d84b8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d84b4) {
            ctx->pc = 0x2D84A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d84a0;
        }
    }
    ctx->pc = 0x2D84BCu;
label_2d84bc:
    // 0x2d84bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D84BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D84BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D84C4u;
    // 0x2d84c4: 0x0  nop
    ctx->pc = 0x2d84c4u;
    // NOP
label_2d84c8:
    // 0x2d84c8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2d84c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d84cc: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D84CCu;
    {
        const bool branch_taken_0x2d84cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D84D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D84CCu;
        // 0x2d84d0: 0x24c3ffff  addiu       $v1, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d84cc) {
            ctx->pc = 0x2D84F4u;
            goto label_2d84f4;
        }
    }
    ctx->pc = 0x2D84D4u;
    // 0x2d84d4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2d84d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2d84d8:
    // 0x2d84d8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2d84d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d84dc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2d84dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2d84e0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2d84e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2d84e4: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x2d84e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d84e8: 0x0  nop
    ctx->pc = 0x2d84e8u;
    // NOP
    // 0x2d84ec: 0x1466fffa  bne         $v1, $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D84ECu;
    {
        const bool branch_taken_0x2d84ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x2D84F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D84ECu;
        // 0x2d84f0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d84ec) {
            ctx->pc = 0x2D84D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d84d8;
        }
    }
    ctx->pc = 0x2D84F4u;
label_2d84f4:
    // 0x2d84f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D84F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D84F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D84F4u;
        // 0x2d84f8: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D84F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D84FCu;
    // 0x2d84fc: 0x0  nop
    ctx->pc = 0x2d84fcu;
    // NOP
label_2d8500:
    // 0x2d8500: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x2D8500u;
    {
        const bool branch_taken_0x2d8500 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8500u;
        // 0x2d8504: 0x24c7ffff  addiu       $a3, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8500) {
            ctx->pc = 0x2D8534u;
            goto label_2d8534;
        }
    }
    ctx->pc = 0x2D8508u;
    // 0x2d8508: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2d8508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d850c: 0x0  nop
    ctx->pc = 0x2d850cu;
    // NOP
label_2d8510:
    // 0x2d8510: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2d8510u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d8514: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2d8514u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d8518: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D8518u;
    {
        const bool branch_taken_0x2d8518 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d8518) {
            ctx->pc = 0x2D851Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D8518u;
            // 0x2d851c: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8528u;
            goto label_2d8528;
        }
    }
    ctx->pc = 0x2D8520u;
    // 0x2d8520: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8520u;
        // 0x2d8524: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8528u;
label_2d8528:
    // 0x2d8528: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2d8528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2d852c: 0x14e6fff8  bne         $a3, $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2D852Cu;
    {
        const bool branch_taken_0x2d852c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x2D8530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D852Cu;
        // 0x2d8530: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d852c) {
            ctx->pc = 0x2D8510u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d8510;
        }
    }
    ctx->pc = 0x2D8534u;
label_2d8534:
    // 0x2d8534: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8534u;
        // 0x2d8538: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D853Cu;
    // 0x2d853c: 0x0  nop
    ctx->pc = 0x2d853cu;
    // NOP
label_2d8540:
    // 0x2d8540: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x2d8540u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2d8544: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2D8544u;
    {
        const bool branch_taken_0x2d8544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8544u;
        // 0x2d8548: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8544) {
            ctx->pc = 0x2D85A0u;
            goto label_2d85a0;
        }
    }
    ctx->pc = 0x2D854Cu;
    // 0x2d854c: 0xa63821  addu        $a3, $a1, $a2
    ctx->pc = 0x2d854cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2d8550: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x2d8550u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2d8554: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D8554u;
    {
        const bool branch_taken_0x2d8554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8554) {
            ctx->pc = 0x2D8558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D8554u;
            // 0x2d8558: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D85A4u;
            goto label_2d85a4;
        }
    }
    ctx->pc = 0x2D855Cu;
    // 0x2d855c: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x2d855cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2d8560: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2d8560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2d8564: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2d8564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d8568: 0x10c2001a  beq         $a2, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2D8568u;
    {
        const bool branch_taken_0x2d8568 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D856Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8568u;
        // 0x2d856c: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8568) {
            ctx->pc = 0x2D85D4u;
            goto label_2d85d4;
        }
    }
    ctx->pc = 0x2D8570u;
    // 0x2d8570: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2d8570u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d8574: 0x0  nop
    ctx->pc = 0x2d8574u;
    // NOP
label_2d8578:
    // 0x2d8578: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2d8578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2d857c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2d857cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2d8580: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2d8580u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d8584: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2d8584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2d8588: 0x0  nop
    ctx->pc = 0x2d8588u;
    // NOP
    // 0x2d858c: 0x14c7fffa  bne         $a2, $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D858Cu;
    {
        const bool branch_taken_0x2d858c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        ctx->pc = 0x2D8590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D858Cu;
        // 0x2d8590: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d858c) {
            ctx->pc = 0x2D8578u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d8578;
        }
    }
    ctx->pc = 0x2D8594u;
    // 0x2d8594: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8594u;
        // 0x2d8598: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D859Cu;
    // 0x2d859c: 0x0  nop
    ctx->pc = 0x2d859cu;
    // NOP
label_2d85a0:
    // 0x2d85a0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2d85a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_2d85a4:
    // 0x2d85a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2d85a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d85a8: 0x10c2000b  beq         $a2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D85A8u;
    {
        const bool branch_taken_0x2d85a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D85ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D85A8u;
        // 0x2d85ac: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d85a8) {
            ctx->pc = 0x2D85D8u;
            goto label_2d85d8;
        }
    }
    ctx->pc = 0x2D85B0u;
    // 0x2d85b0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2d85b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d85b4: 0x0  nop
    ctx->pc = 0x2d85b4u;
    // NOP
label_2d85b8:
    // 0x2d85b8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2d85b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d85bc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2d85bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2d85c0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2d85c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2d85c4: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x2d85c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d85c8: 0x0  nop
    ctx->pc = 0x2d85c8u;
    // NOP
    // 0x2d85cc: 0x14c7fffa  bne         $a2, $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D85CCu;
    {
        const bool branch_taken_0x2d85cc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        ctx->pc = 0x2D85D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D85CCu;
        // 0x2d85d0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d85cc) {
            ctx->pc = 0x2D85B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d85b8;
        }
    }
    ctx->pc = 0x2D85D4u;
label_2d85d4:
    // 0x2d85d4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2d85d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d85d8:
    // 0x2d85d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D85D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D85D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D85E0u;
}
