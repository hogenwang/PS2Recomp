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

// Function: sub_0033C460
// Address: 0x33c460 - 0x33cc90
void sub_0033C460_0x33c460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033C460_0x33c460");
#endif

    switch (ctx->pc) {
        case 0x33c468u: goto label_33c468;
        case 0x33c4a8u: goto label_33c4a8;
        case 0x33c4dcu: goto label_33c4dc;
        case 0x33c574u: goto label_33c574;
        case 0x33c57cu: goto label_33c57c;
        case 0x33c588u: goto label_33c588;
        case 0x33c590u: goto label_33c590;
        case 0x33c598u: goto label_33c598;
        case 0x33c5a0u: goto label_33c5a0;
        case 0x33c5c0u: goto label_33c5c0;
        case 0x33c5f0u: goto label_33c5f0;
        case 0x33c61cu: goto label_33c61c;
        case 0x33c648u: goto label_33c648;
        case 0x33c65cu: goto label_33c65c;
        case 0x33c6a4u: goto label_33c6a4;
        case 0x33c6b8u: goto label_33c6b8;
        case 0x33c70cu: goto label_33c70c;
        case 0x33c714u: goto label_33c714;
        case 0x33c720u: goto label_33c720;
        case 0x33c734u: goto label_33c734;
        case 0x33c73cu: goto label_33c73c;
        case 0x33c748u: goto label_33c748;
        case 0x33c780u: goto label_33c780;
        case 0x33c7b8u: goto label_33c7b8;
        case 0x33c7d8u: goto label_33c7d8;
        case 0x33c810u: goto label_33c810;
        case 0x33c838u: goto label_33c838;
        case 0x33c8a0u: goto label_33c8a0;
        case 0x33c8b8u: goto label_33c8b8;
        case 0x33c8c4u: goto label_33c8c4;
        case 0x33c8d0u: goto label_33c8d0;
        case 0x33c8f8u: goto label_33c8f8;
        case 0x33c900u: goto label_33c900;
        case 0x33c920u: goto label_33c920;
        case 0x33c974u: goto label_33c974;
        case 0x33c988u: goto label_33c988;
        case 0x33c9a0u: goto label_33c9a0;
        case 0x33c9b0u: goto label_33c9b0;
        case 0x33ca18u: goto label_33ca18;
        case 0x33cad4u: goto label_33cad4;
        case 0x33cae8u: goto label_33cae8;
        case 0x33cb0cu: goto label_33cb0c;
        case 0x33cb34u: goto label_33cb34;
        case 0x33cb70u: goto label_33cb70;
        case 0x33cb9cu: goto label_33cb9c;
        case 0x33cbb0u: goto label_33cbb0;
        case 0x33cbc0u: goto label_33cbc0;
        case 0x33cbd0u: goto label_33cbd0;
        case 0x33cbf8u: goto label_33cbf8;
        case 0x33cc5cu: goto label_33cc5c;
        case 0x33cc68u: goto label_33cc68;
        default: break;
    }

    ctx->pc = 0x33c460u;

    // 0x33c460: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33c460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33c464: 0x3c07003d  lui         $a3, 0x3D
    ctx->pc = 0x33c464u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)61 << 16));
label_33c468:
    // 0x33c468: 0xa060e890  sb          $zero, -0x1770($v1)
    ctx->pc = 0x33c468u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961296), (uint8_t)GPR_U32(ctx, 0));
    // 0x33c46c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x33c46cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33c470: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33c470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33c474: 0x24e733d2  addiu       $a3, $a3, 0x33D2
    ctx->pc = 0x33c474u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 13266));
    // 0x33c478: 0xa060e891  sb          $zero, -0x176F($v1)
    ctx->pc = 0x33c478u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961297), (uint8_t)GPR_U32(ctx, 0));
    // 0x33c47c: 0x3086ffff  andi        $a2, $a0, 0xFFFF
    ctx->pc = 0x33c47cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x33c480: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33c480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33c484: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x33c484u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x33c488: 0xa060e892  sb          $zero, -0x176E($v1)
    ctx->pc = 0x33c488u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961298), (uint8_t)GPR_U32(ctx, 0));
    // 0x33c48c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33c48cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33c490: 0xa060e893  sb          $zero, -0x176D($v1)
    ctx->pc = 0x33c490u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961299), (uint8_t)GPR_U32(ctx, 0));
    // 0x33c494: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33c494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33c498: 0xa060e894  sb          $zero, -0x176C($v1)
    ctx->pc = 0x33c498u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961300), (uint8_t)GPR_U32(ctx, 0));
    // 0x33c49c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33c49cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33c4a0: 0xa060e895  sb          $zero, -0x176B($v1)
    ctx->pc = 0x33c4a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961301), (uint8_t)GPR_U32(ctx, 0));
    // 0x33c4a4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33c4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_33c4a8:
    // 0x33c4a8: 0x94e40000  lhu         $a0, 0x0($a3)
    ctx->pc = 0x33c4a8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x33c4ac: 0x14a40002  bne         $a1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x33C4ACu;
    {
        const bool branch_taken_0x33c4ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x33c4ac) {
            ctx->pc = 0x33C4B8u;
            goto label_33c4b8;
        }
    }
    ctx->pc = 0x33C4B4u;
    // 0x33c4b4: 0xa068e890  sb          $t0, -0x1770($v1)
    ctx->pc = 0x33c4b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961296), (uint8_t)GPR_U32(ctx, 8));
label_33c4b8:
    // 0x33c4b8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x33c4b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x33c4bc: 0x29040009  slti        $a0, $t0, 0x9
    ctx->pc = 0x33c4bcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x33c4c0: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x33C4C0u;
    {
        const bool branch_taken_0x33c4c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x33C4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C4C0u;
        // 0x33c4c4: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c4c0) {
            ctx->pc = 0x33C4A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_33c4a8;
        }
    }
    ctx->pc = 0x33C4C8u;
    // 0x33c4c8: 0x3c07003d  lui         $a3, 0x3D
    ctx->pc = 0x33c4c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)61 << 16));
    // 0x33c4cc: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x33c4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
    // 0x33c4d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x33c4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c4d4: 0x24e733b8  addiu       $a3, $a3, 0x33B8
    ctx->pc = 0x33c4d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 13240));
    // 0x33c4d8: 0x24a5e891  addiu       $a1, $a1, -0x176F
    ctx->pc = 0x33c4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961297));
label_33c4dc:
    // 0x33c4dc: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x33c4dcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x33c4e0: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x33c4e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x33c4e4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33C4E4u;
    {
        const bool branch_taken_0x33c4e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c4e4) {
            ctx->pc = 0x33C4F8u;
            goto label_33c4f8;
        }
    }
    ctx->pc = 0x33C4ECu;
    // 0x33c4ec: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x33c4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x33c4f0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x33c4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x33c4f4: 0x0  nop
    ctx->pc = 0x33c4f4u;
    // NOP
label_33c4f8:
    // 0x33c4f8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x33c4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x33c4fc: 0x28830007  slti        $v1, $a0, 0x7
    ctx->pc = 0x33c4fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x33c500: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x33C500u;
    {
        const bool branch_taken_0x33c500 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33C504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C500u;
        // 0x33c504: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c500) {
            ctx->pc = 0x33C4DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_33c4dc;
        }
    }
    ctx->pc = 0x33C508u;
    // 0x33c508: 0x3e00008  jr          $ra
    ctx->pc = 0x33C508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C510u;
    // 0x33c510: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33c510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33c514: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33c514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33c518: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33c518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33c51c: 0x9064e818  lbu         $a0, -0x17E8($v1)
    ctx->pc = 0x33c51cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961176)));
    // 0x33c520: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x33c520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x33c524: 0x50830123  beql        $a0, $v1, . + 4 + (0x123 << 2)
    ctx->pc = 0x33C524u;
    {
        const bool branch_taken_0x33c524 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33c524) {
            ctx->pc = 0x33C528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33C524u;
            // 0x33c528: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33C9B4u;
            goto label_33c9b4;
        }
    }
    ctx->pc = 0x33C52Cu;
    // 0x33c52c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x33c52cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33c530: 0x1083011d  beq         $a0, $v1, . + 4 + (0x11D << 2)
    ctx->pc = 0x33C530u;
    {
        const bool branch_taken_0x33c530 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33c530) {
            ctx->pc = 0x33C9A8u;
            goto label_33c9a8;
        }
    }
    ctx->pc = 0x33C538u;
    // 0x33c538: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x33c538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33c53c: 0x10830116  beq         $a0, $v1, . + 4 + (0x116 << 2)
    ctx->pc = 0x33C53Cu;
    {
        const bool branch_taken_0x33c53c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33c53c) {
            ctx->pc = 0x33C998u;
            goto label_33c998;
        }
    }
    ctx->pc = 0x33C544u;
    // 0x33c544: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33c544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33c548: 0x10830096  beq         $a0, $v1, . + 4 + (0x96 << 2)
    ctx->pc = 0x33C548u;
    {
        const bool branch_taken_0x33c548 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33c548) {
            ctx->pc = 0x33C7A4u;
            goto label_33c7a4;
        }
    }
    ctx->pc = 0x33C550u;
    // 0x33c550: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33c550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33c554: 0x10850022  beq         $a0, $a1, . + 4 + (0x22 << 2)
    ctx->pc = 0x33C554u;
    {
        const bool branch_taken_0x33c554 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x33c554) {
            ctx->pc = 0x33C5E0u;
            goto label_33c5e0;
        }
    }
    ctx->pc = 0x33C55Cu;
    // 0x33c55c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33C55Cu;
    {
        const bool branch_taken_0x33c55c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c55c) {
            ctx->pc = 0x33C56Cu;
            goto label_33c56c;
        }
    }
    ctx->pc = 0x33C564u;
    // 0x33c564: 0x10000112  b           . + 4 + (0x112 << 2)
    ctx->pc = 0x33C564u;
    {
        const bool branch_taken_0x33c564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c564) {
            ctx->pc = 0x33C9B0u;
            goto label_33c9b0;
        }
    }
    ctx->pc = 0x33C56Cu;
label_33c56c:
    // 0x33c56c: 0xc053438  jal         func_14D0E0
    ctx->pc = 0x33C56Cu;
    SET_GPR_U32(ctx, 31, 0x33C574u);
    ctx->pc = 0x14D0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D0E0u, 0x33C56Cu, 0x33C574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C574u;
label_33c574:
    // 0x33c574: 0xc0ced38  jal         func_33B4E0
    ctx->pc = 0x33C574u;
    SET_GPR_U32(ctx, 31, 0x33C57Cu);
    ctx->pc = 0x33B4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B4E0u, 0x33C574u, 0x33C57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C57Cu;
label_33c57c:
    // 0x33c57c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x33c57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c580: 0xc0c06b8  jal         func_301AE0
    ctx->pc = 0x33C580u;
    SET_GPR_U32(ctx, 31, 0x33C588u);
    ctx->pc = 0x33C584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C580u;
    // 0x33c584: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AE0u, 0x33C580u, 0x33C588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C588u;
label_33c588:
    // 0x33c588: 0xc0cc0bc  jal         func_3302F0
    ctx->pc = 0x33C588u;
    SET_GPR_U32(ctx, 31, 0x33C590u);
    ctx->pc = 0x3302F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3302F0u, 0x33C588u, 0x33C590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C590u;
label_33c590:
    // 0x33c590: 0xc0cc0cc  jal         func_330330
    ctx->pc = 0x33C590u;
    SET_GPR_U32(ctx, 31, 0x33C598u);
    ctx->pc = 0x330330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330330u, 0x33C590u, 0x33C598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C598u;
label_33c598:
    // 0x33c598: 0xc0cee84  jal         func_33BA10
    ctx->pc = 0x33C598u;
    SET_GPR_U32(ctx, 31, 0x33C5A0u);
    ctx->pc = 0x33BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BA10u, 0x33C598u, 0x33C5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C5A0u;
label_33c5a0:
    // 0x33c5a0: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x33c5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x33c5a4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x33c5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x33c5a8: 0x2484c9c0  addiu       $a0, $a0, -0x3640
    ctx->pc = 0x33c5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953408));
    // 0x33c5ac: 0x24a54b90  addiu       $a1, $a1, 0x4B90
    ctx->pc = 0x33c5acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19344));
    // 0x33c5b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x33c5b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c5b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33c5b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c5b8: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x33C5B8u;
    SET_GPR_U32(ctx, 31, 0x33C5C0u);
    ctx->pc = 0x33C5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C5B8u;
    // 0x33c5bc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x33C5B8u, 0x33C5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C5C0u;
label_33c5c0:
    // 0x33c5c0: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33c5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33c5c4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33c5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33c5c8: 0x9084e818  lbu         $a0, -0x17E8($a0)
    ctx->pc = 0x33c5c8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294961176)));
    // 0x33c5cc: 0xac60e8f0  sw          $zero, -0x1710($v1)
    ctx->pc = 0x33c5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961392), GPR_U32(ctx, 0));
    // 0x33c5d0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33c5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33c5d4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x33c5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x33c5d8: 0x100000f5  b           . + 4 + (0xF5 << 2)
    ctx->pc = 0x33C5D8u;
    {
        const bool branch_taken_0x33c5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C5D8u;
        // 0x33c5dc: 0xa064e818  sb          $a0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c5d8) {
            ctx->pc = 0x33C9B0u;
            goto label_33c9b0;
        }
    }
    ctx->pc = 0x33C5E0u;
label_33c5e0:
    // 0x33c5e0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33c5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33c5e4: 0x90449730  lbu         $a0, -0x68D0($v0)
    ctx->pc = 0x33c5e4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
    // 0x33c5e8: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x33C5E8u;
    SET_GPR_U32(ctx, 31, 0x33C5F0u);
    ctx->pc = 0x33C5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C5E8u;
    // 0x33c5ec: 0x24066000  addiu       $a2, $zero, 0x6000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x33C5E8u, 0x33C5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C5F0u;
label_33c5f0:
    // 0x33c5f0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x33C5F0u;
    {
        const bool branch_taken_0x33c5f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33c5f0) {
            ctx->pc = 0x33C62Cu;
            goto label_33c62c;
        }
    }
    ctx->pc = 0x33C5F8u;
    // 0x33c5f8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33c5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33c5fc: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33c5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33c600: 0x90429730  lbu         $v0, -0x68D0($v0)
    ctx->pc = 0x33c600u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
    // 0x33c604: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x33c604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x33c608: 0x8064e8f0  lb          $a0, -0x1710($v1)
    ctx->pc = 0x33c608u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961392)));
    // 0x33c60c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33c60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33c610: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x33c610u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
    // 0x33c614: 0xc0cd978  jal         func_3365E0
    ctx->pc = 0x33C614u;
    SET_GPR_U32(ctx, 31, 0x33C61Cu);
    ctx->pc = 0x33C618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C614u;
    // 0x33c618: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3365E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3365E0u, 0x33C614u, 0x33C61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C61Cu;
label_33c61c:
    // 0x33c61c: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x33c61cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x33c620: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x33c620u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x33c624: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33c624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33c628: 0xac43e8f0  sw          $v1, -0x1710($v0)
    ctx->pc = 0x33c628u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961392), GPR_U32(ctx, 3));
label_33c62c:
    // 0x33c62c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33c62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33c630: 0x24044000  addiu       $a0, $zero, 0x4000
    ctx->pc = 0x33c630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x33c634: 0x90429730  lbu         $v0, -0x68D0($v0)
    ctx->pc = 0x33c634u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
    // 0x33c638: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33c638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33c63c: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x33c63cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
    // 0x33c640: 0xc0cda84  jal         func_336A10
    ctx->pc = 0x33C640u;
    SET_GPR_U32(ctx, 31, 0x33C648u);
    ctx->pc = 0x33C644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C640u;
    // 0x33c644: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A10u, 0x33C640u, 0x33C648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C648u;
label_33c648:
    // 0x33c648: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x33C648u;
    {
        const bool branch_taken_0x33c648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c648) {
            ctx->pc = 0x33C688u;
            goto label_33c688;
        }
    }
    ctx->pc = 0x33C650u;
    // 0x33c650: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x33c650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x33c654: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x33C654u;
    SET_GPR_U32(ctx, 31, 0x33C65Cu);
    ctx->pc = 0x33C658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C654u;
    // 0x33c658: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x33C654u, 0x33C65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C65Cu;
label_33c65c:
    // 0x33c65c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x33c65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x33c660: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33c660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33c664: 0xac64e8b8  sw          $a0, -0x1748($v1)
    ctx->pc = 0x33c664u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961336), GPR_U32(ctx, 4));
    // 0x33c668: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33c668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33c66c: 0xac64e8f0  sw          $a0, -0x1710($v1)
    ctx->pc = 0x33c66cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961392), GPR_U32(ctx, 4));
    // 0x33c670: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33c670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33c674: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x33c674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33c678: 0xac60e8e8  sw          $zero, -0x1718($v1)
    ctx->pc = 0x33c678u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961384), GPR_U32(ctx, 0));
    // 0x33c67c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33c67cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33c680: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x33C680u;
    {
        const bool branch_taken_0x33c680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C680u;
        // 0x33c684: 0xa064e818  sb          $a0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c680) {
            ctx->pc = 0x33C9B0u;
            goto label_33c9b0;
        }
    }
    ctx->pc = 0x33C688u;
label_33c688:
    // 0x33c688: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33c688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33c68c: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x33c68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x33c690: 0x90429730  lbu         $v0, -0x68D0($v0)
    ctx->pc = 0x33c690u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
    // 0x33c694: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33c694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33c698: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x33c698u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
    // 0x33c69c: 0xc0cda84  jal         func_336A10
    ctx->pc = 0x33C69Cu;
    SET_GPR_U32(ctx, 31, 0x33C6A4u);
    ctx->pc = 0x33C6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C69Cu;
    // 0x33c6a0: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A10u, 0x33C69Cu, 0x33C6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C6A4u;
label_33c6a4:
    // 0x33c6a4: 0x104000c2  beqz        $v0, . + 4 + (0xC2 << 2)
    ctx->pc = 0x33C6A4u;
    {
        const bool branch_taken_0x33c6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c6a4) {
            ctx->pc = 0x33C9B0u;
            goto label_33c9b0;
        }
    }
    ctx->pc = 0x33C6ACu;
    // 0x33c6ac: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x33c6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x33c6b0: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x33C6B0u;
    SET_GPR_U32(ctx, 31, 0x33C6B8u);
    ctx->pc = 0x33C6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C6B0u;
    // 0x33c6b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x33C6B0u, 0x33C6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C6B8u;
label_33c6b8:
    // 0x33c6b8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33c6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33c6bc: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x33c6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x33c6c0: 0x8c65e8f0  lw          $a1, -0x1710($v1)
    ctx->pc = 0x33c6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961392)));
    // 0x33c6c4: 0x24842800  addiu       $a0, $a0, 0x2800
    ctx->pc = 0x33c6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10240));
    // 0x33c6c8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x33c6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x33c6cc: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33c6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33c6d0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x33c6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x33c6d4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x33c6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33c6d8: 0x2c810009  sltiu       $at, $a0, 0x9
    ctx->pc = 0x33c6d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x33c6dc: 0x1020002e  beqz        $at, . + 4 + (0x2E << 2)
    ctx->pc = 0x33C6DCu;
    {
        const bool branch_taken_0x33c6dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C6DCu;
        // 0x33c6e0: 0xac64e8b8  sw          $a0, -0x1748($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961336), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c6dc) {
            ctx->pc = 0x33C798u;
            goto label_33c798;
        }
    }
    ctx->pc = 0x33C6E4u;
    // 0x33c6e4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x33c6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x33c6e8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x33c6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x33c6ec: 0x24844e40  addiu       $a0, $a0, 0x4E40
    ctx->pc = 0x33c6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20032));
    // 0x33c6f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33c6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33c6f4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x33c6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33c6f8: 0x600008  jr          $v1
    ctx->pc = 0x33C6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x33C700u: goto label_33c700;
            case 0x33C728u: goto label_33c728;
            case 0x33C750u: goto label_33c750;
            case 0x33C774u: goto label_33c774;
            case 0x33C78Cu: goto label_33c78c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C6F8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x33C700u;
label_33c700:
    // 0x33c700: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33c700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33c704: 0xc0ced38  jal         func_33B4E0
    ctx->pc = 0x33C704u;
    SET_GPR_U32(ctx, 31, 0x33C70Cu);
    ctx->pc = 0x33C708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C704u;
    // 0x33c708: 0xac40e8c8  sw          $zero, -0x1738($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961352), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B4E0u, 0x33C704u, 0x33C70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C70Cu;
label_33c70c:
    // 0x33c70c: 0xc0cee84  jal         func_33BA10
    ctx->pc = 0x33C70Cu;
    SET_GPR_U32(ctx, 31, 0x33C714u);
    ctx->pc = 0x33BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BA10u, 0x33C70Cu, 0x33C714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C714u;
label_33c714:
    // 0x33c714: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33c714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33c718: 0xc0c1650  jal         func_305940
    ctx->pc = 0x33C718u;
    SET_GPR_U32(ctx, 31, 0x33C720u);
    ctx->pc = 0x33C71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C718u;
    // 0x33c71c: 0xa040e818  sb          $zero, -0x17E8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305940u, 0x33C718u, 0x33C720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C720u;
label_33c720:
    // 0x33c720: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x33C720u;
    {
        const bool branch_taken_0x33c720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c720) {
            ctx->pc = 0x33C798u;
            goto label_33c798;
        }
    }
    ctx->pc = 0x33C728u;
label_33c728:
    // 0x33c728: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33c728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33c72c: 0xc0ced38  jal         func_33B4E0
    ctx->pc = 0x33C72Cu;
    SET_GPR_U32(ctx, 31, 0x33C734u);
    ctx->pc = 0x33C730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C72Cu;
    // 0x33c730: 0xac40e8c8  sw          $zero, -0x1738($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961352), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B4E0u, 0x33C72Cu, 0x33C734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C734u;
label_33c734:
    // 0x33c734: 0xc0cee84  jal         func_33BA10
    ctx->pc = 0x33C734u;
    SET_GPR_U32(ctx, 31, 0x33C73Cu);
    ctx->pc = 0x33BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BA10u, 0x33C734u, 0x33C73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C73Cu;
label_33c73c:
    // 0x33c73c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33c73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33c740: 0xc0c1650  jal         func_305940
    ctx->pc = 0x33C740u;
    SET_GPR_U32(ctx, 31, 0x33C748u);
    ctx->pc = 0x33C744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C740u;
    // 0x33c744: 0xa040e818  sb          $zero, -0x17E8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305940u, 0x33C740u, 0x33C748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C748u;
label_33c748:
    // 0x33c748: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x33C748u;
    {
        const bool branch_taken_0x33c748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c748) {
            ctx->pc = 0x33C798u;
            goto label_33c798;
        }
    }
    ctx->pc = 0x33C750u;
label_33c750:
    // 0x33c750: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x33c750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33c754: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33c754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33c758: 0xac64e860  sw          $a0, -0x17A0($v1)
    ctx->pc = 0x33c758u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961248), GPR_U32(ctx, 4));
    // 0x33c75c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33c75cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33c760: 0xac64e864  sw          $a0, -0x179C($v1)
    ctx->pc = 0x33c760u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961252), GPR_U32(ctx, 4));
    // 0x33c764: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x33c764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33c768: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33c768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33c76c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x33C76Cu;
    {
        const bool branch_taken_0x33c76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C76Cu;
        // 0x33c770: 0xa064e818  sb          $a0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c76c) {
            ctx->pc = 0x33C798u;
            goto label_33c798;
        }
    }
    ctx->pc = 0x33C774u;
label_33c774:
    // 0x33c774: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x33c774u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x33c778: 0xc0c1678  jal         func_3059E0
    ctx->pc = 0x33C778u;
    SET_GPR_U32(ctx, 31, 0x33C780u);
    ctx->pc = 0x33C77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C778u;
    // 0x33c77c: 0x24847110  addiu       $a0, $a0, 0x7110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3059E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3059E0u, 0x33C778u, 0x33C780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C780u;
label_33c780:
    // 0x33c780: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33c780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33c784: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x33C784u;
    {
        const bool branch_taken_0x33c784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C784u;
        // 0x33c788: 0xa060e818  sb          $zero, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c784) {
            ctx->pc = 0x33C798u;
            goto label_33c798;
        }
    }
    ctx->pc = 0x33C78Cu;
label_33c78c:
    // 0x33c78c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x33c78cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33c790: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33c790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33c794: 0xa064e818  sb          $a0, -0x17E8($v1)
    ctx->pc = 0x33c794u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
label_33c798:
    // 0x33c798: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33c798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33c79c: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x33C79Cu;
    {
        const bool branch_taken_0x33c79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C79Cu;
        // 0x33c7a0: 0xac60e8e8  sw          $zero, -0x1718($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961384), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c79c) {
            ctx->pc = 0x33C9B0u;
            goto label_33c9b0;
        }
    }
    ctx->pc = 0x33C7A4u;
label_33c7a4:
    // 0x33c7a4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33c7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33c7a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33c7a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c7ac: 0x90449730  lbu         $a0, -0x68D0($v0)
    ctx->pc = 0x33c7acu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
    // 0x33c7b0: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x33C7B0u;
    SET_GPR_U32(ctx, 31, 0x33C7B8u);
    ctx->pc = 0x33C7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C7B0u;
    // 0x33c7b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x33C7B0u, 0x33C7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C7B8u;
label_33c7b8:
    // 0x33c7b8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x33c7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x33c7bc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x33c7bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x33c7c0: 0x304200a0  andi        $v0, $v0, 0xA0
    ctx->pc = 0x33c7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)160);
    // 0x33c7c4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x33C7C4u;
    {
        const bool branch_taken_0x33c7c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c7c4) {
            ctx->pc = 0x33C7F4u;
            goto label_33c7f4;
        }
    }
    ctx->pc = 0x33C7CCu;
    // 0x33c7cc: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x33c7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x33c7d0: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x33C7D0u;
    SET_GPR_U32(ctx, 31, 0x33C7D8u);
    ctx->pc = 0x33C7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C7D0u;
    // 0x33c7d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x33C7D0u, 0x33C7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C7D8u;
label_33c7d8:
    // 0x33c7d8: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33c7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33c7dc: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33c7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33c7e0: 0x8c84e8e8  lw          $a0, -0x1718($a0)
    ctx->pc = 0x33c7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961384)));
    // 0x33c7e4: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x33c7e4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x33c7e8: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x33c7e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x33c7ec: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x33C7ECu;
    {
        const bool branch_taken_0x33c7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C7ECu;
        // 0x33c7f0: 0xac64e8e8  sw          $a0, -0x1718($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961384), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c7ec) {
            ctx->pc = 0x33C9B0u;
            goto label_33c9b0;
        }
    }
    ctx->pc = 0x33C7F4u;
label_33c7f4:
    // 0x33c7f4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33c7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33c7f8: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x33c7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x33c7fc: 0x90429730  lbu         $v0, -0x68D0($v0)
    ctx->pc = 0x33c7fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
    // 0x33c800: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33c800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33c804: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x33c804u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
    // 0x33c808: 0xc0cda84  jal         func_336A10
    ctx->pc = 0x33C808u;
    SET_GPR_U32(ctx, 31, 0x33C810u);
    ctx->pc = 0x33C80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C808u;
    // 0x33c80c: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A10u, 0x33C808u, 0x33C810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C810u;
label_33c810:
    // 0x33c810: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x33C810u;
    {
        const bool branch_taken_0x33c810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c810) {
            ctx->pc = 0x33C958u;
            goto label_33c958;
        }
    }
    ctx->pc = 0x33C818u;
    // 0x33c818: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33c818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33c81c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33c81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33c820: 0x9042e818  lbu         $v0, -0x17E8($v0)
    ctx->pc = 0x33c820u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961176)));
    // 0x33c824: 0x1443004c  bne         $v0, $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x33C824u;
    {
        const bool branch_taken_0x33c824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x33c824) {
            ctx->pc = 0x33C958u;
            goto label_33c958;
        }
    }
    ctx->pc = 0x33C82Cu;
    // 0x33c82c: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x33c82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x33c830: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x33C830u;
    SET_GPR_U32(ctx, 31, 0x33C838u);
    ctx->pc = 0x33C834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C830u;
    // 0x33c834: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x33C830u, 0x33C838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C838u;
label_33c838:
    // 0x33c838: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33c838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33c83c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x33c83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33c840: 0x8c63e8e8  lw          $v1, -0x1718($v1)
    ctx->pc = 0x33c840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961384)));
    // 0x33c844: 0x14640041  bne         $v1, $a0, . + 4 + (0x41 << 2)
    ctx->pc = 0x33C844u;
    {
        const bool branch_taken_0x33c844 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x33c844) {
            ctx->pc = 0x33C94Cu;
            goto label_33c94c;
        }
    }
    ctx->pc = 0x33C84Cu;
    // 0x33c84c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33c84cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33c850: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x33c850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x33c854: 0x8c64e8b8  lw          $a0, -0x1748($v1)
    ctx->pc = 0x33c854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961336)));
    // 0x33c858: 0x10850017  beq         $a0, $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x33C858u;
    {
        const bool branch_taken_0x33c858 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x33c858) {
            ctx->pc = 0x33C8B8u;
            goto label_33c8b8;
        }
    }
    ctx->pc = 0x33C860u;
    // 0x33c860: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x33c860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x33c864: 0x50830012  beql        $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x33C864u;
    {
        const bool branch_taken_0x33c864 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33c864) {
            ctx->pc = 0x33C868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33C864u;
            // 0x33c868: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33C8B0u;
            goto label_33c8b0;
        }
    }
    ctx->pc = 0x33C86Cu;
    // 0x33c86c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x33c86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x33c870: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x33C870u;
    {
        const bool branch_taken_0x33c870 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33c870) {
            ctx->pc = 0x33C898u;
            goto label_33c898;
        }
    }
    ctx->pc = 0x33C878u;
    // 0x33c878: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x33c878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x33c87c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x33C87Cu;
    {
        const bool branch_taken_0x33c87c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33c87c) {
            ctx->pc = 0x33C898u;
            goto label_33c898;
        }
    }
    ctx->pc = 0x33C884u;
    // 0x33c884: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x33c884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33c888: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x33C888u;
    {
        const bool branch_taken_0x33c888 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33c888) {
            ctx->pc = 0x33C898u;
            goto label_33c898;
        }
    }
    ctx->pc = 0x33C890u;
    // 0x33c890: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x33C890u;
    {
        const bool branch_taken_0x33c890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c890) {
            ctx->pc = 0x33C9B0u;
            goto label_33c9b0;
        }
    }
    ctx->pc = 0x33C898u;
label_33c898:
    // 0x33c898: 0xc0cf324  jal         func_33CC90
    ctx->pc = 0x33C898u;
    SET_GPR_U32(ctx, 31, 0x33C8A0u);
    ctx->pc = 0x33CC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CC90u, 0x33C898u, 0x33C8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C8A0u;
label_33c8a0:
    // 0x33c8a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x33c8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33c8a4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33c8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33c8a8: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x33C8A8u;
    {
        const bool branch_taken_0x33c8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C8A8u;
        // 0x33c8ac: 0xa064e818  sb          $a0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c8a8) {
            ctx->pc = 0x33C9B0u;
            goto label_33c9b0;
        }
    }
    ctx->pc = 0x33C8B0u;
label_33c8b0:
    // 0x33c8b0: 0xc0cf324  jal         func_33CC90
    ctx->pc = 0x33C8B0u;
    SET_GPR_U32(ctx, 31, 0x33C8B8u);
    ctx->pc = 0x33CC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CC90u, 0x33C8B0u, 0x33C8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C8B8u;
label_33c8b8:
    // 0x33c8b8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x33c8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x33c8bc: 0xc0ce690  jal         func_339A40
    ctx->pc = 0x33C8BCu;
    SET_GPR_U32(ctx, 31, 0x33C8C4u);
    ctx->pc = 0x33C8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C8BCu;
    // 0x33c8c0: 0xac40d590  sw          $zero, -0x2A70($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956432), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339A40u, 0x33C8BCu, 0x33C8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C8C4u;
label_33c8c4:
    // 0x33c8c4: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x33c8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x33c8c8: 0xc0c1678  jal         func_3059E0
    ctx->pc = 0x33C8C8u;
    SET_GPR_U32(ctx, 31, 0x33C8D0u);
    ctx->pc = 0x33C8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C8C8u;
    // 0x33c8cc: 0x24847e70  addiu       $a0, $a0, 0x7E70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3059E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3059E0u, 0x33C8C8u, 0x33C8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C8D0u;
label_33c8d0:
    // 0x33c8d0: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x33c8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x33c8d4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33c8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33c8d8: 0xa04395c0  sb          $v1, -0x6A40($v0)
    ctx->pc = 0x33c8d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940096), (uint8_t)GPR_U32(ctx, 3));
    // 0x33c8dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x33c8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c8e0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33c8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33c8e4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x33c8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33c8e8: 0x9043e880  lbu         $v1, -0x1780($v0)
    ctx->pc = 0x33c8e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961280)));
    // 0x33c8ec: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x33c8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x33c8f0: 0xc0c06b8  jal         func_301AE0
    ctx->pc = 0x33C8F0u;
    SET_GPR_U32(ctx, 31, 0x33C8F8u);
    ctx->pc = 0x33C8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C8F0u;
    // 0x33c8f4: 0xa043b240  sb          $v1, -0x4DC0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294947392), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AE0u, 0x33C8F0u, 0x33C8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C8F8u;
label_33c8f8:
    // 0x33c8f8: 0xc0cc0bc  jal         func_3302F0
    ctx->pc = 0x33C8F8u;
    SET_GPR_U32(ctx, 31, 0x33C900u);
    ctx->pc = 0x3302F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3302F0u, 0x33C8F8u, 0x33C900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C900u;
label_33c900:
    // 0x33c900: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x33c900u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x33c904: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x33c904u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x33c908: 0x24840970  addiu       $a0, $a0, 0x970
    ctx->pc = 0x33c908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2416));
    // 0x33c90c: 0x24a54b90  addiu       $a1, $a1, 0x4B90
    ctx->pc = 0x33c90cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19344));
    // 0x33c910: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x33c910u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c914: 0x24070034  addiu       $a3, $zero, 0x34
    ctx->pc = 0x33c914u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x33c918: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x33C918u;
    SET_GPR_U32(ctx, 31, 0x33C920u);
    ctx->pc = 0x33C91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C918u;
    // 0x33c91c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x33C918u, 0x33C920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C920u;
label_33c920:
    // 0x33c920: 0x8c470010  lw          $a3, 0x10($v0)
    ctx->pc = 0x33c920u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x33c924: 0x2406ffc0  addiu       $a2, $zero, -0x40
    ctx->pc = 0x33c924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x33c928: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x33c928u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x33c92c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33c92cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33c930: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33c930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33c934: 0xa4e00002  sh          $zero, 0x2($a3)
    ctx->pc = 0x33c934u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x33c938: 0xa4e60004  sh          $a2, 0x4($a3)
    ctx->pc = 0x33c938u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4), (uint16_t)GPR_U32(ctx, 6));
    // 0x33c93c: 0xa0e00001  sb          $zero, 0x1($a3)
    ctx->pc = 0x33c93cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x33c940: 0xa065e818  sb          $a1, -0x17E8($v1)
    ctx->pc = 0x33c940u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 5));
    // 0x33c944: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x33C944u;
    {
        const bool branch_taken_0x33c944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C944u;
        // 0x33c948: 0xa08095c0  sb          $zero, -0x6A40($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4294940096), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c944) {
            ctx->pc = 0x33C9B0u;
            goto label_33c9b0;
        }
    }
    ctx->pc = 0x33C94Cu;
label_33c94c:
    // 0x33c94c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33c94cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33c950: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x33C950u;
    {
        const bool branch_taken_0x33c950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C950u;
        // 0x33c954: 0xa064e818  sb          $a0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c950) {
            ctx->pc = 0x33C9B0u;
            goto label_33c9b0;
        }
    }
    ctx->pc = 0x33C958u;
label_33c958:
    // 0x33c958: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33c958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33c95c: 0x24044000  addiu       $a0, $zero, 0x4000
    ctx->pc = 0x33c95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x33c960: 0x90429730  lbu         $v0, -0x68D0($v0)
    ctx->pc = 0x33c960u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
    // 0x33c964: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33c964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33c968: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x33c968u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
    // 0x33c96c: 0xc0cda84  jal         func_336A10
    ctx->pc = 0x33C96Cu;
    SET_GPR_U32(ctx, 31, 0x33C974u);
    ctx->pc = 0x33C970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C96Cu;
    // 0x33c970: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A10u, 0x33C96Cu, 0x33C974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C974u;
label_33c974:
    // 0x33c974: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x33C974u;
    {
        const bool branch_taken_0x33c974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c974) {
            ctx->pc = 0x33C9B0u;
            goto label_33c9b0;
        }
    }
    ctx->pc = 0x33C97Cu;
    // 0x33c97c: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x33c97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x33c980: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x33C980u;
    SET_GPR_U32(ctx, 31, 0x33C988u);
    ctx->pc = 0x33C984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C980u;
    // 0x33c984: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x33C980u, 0x33C988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C988u;
label_33c988:
    // 0x33c988: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x33c988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33c98c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33c98cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33c990: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x33C990u;
    {
        const bool branch_taken_0x33c990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C990u;
        // 0x33c994: 0xa064e818  sb          $a0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c990) {
            ctx->pc = 0x33C9B0u;
            goto label_33c9b0;
        }
    }
    ctx->pc = 0x33C998u;
label_33c998:
    // 0x33c998: 0xc0cf41c  jal         func_33D070
    ctx->pc = 0x33C998u;
    SET_GPR_U32(ctx, 31, 0x33C9A0u);
    ctx->pc = 0x33D070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D070u, 0x33C998u, 0x33C9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C9A0u;
label_33c9a0:
    // 0x33c9a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x33C9A0u;
    {
        const bool branch_taken_0x33c9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c9a0) {
            ctx->pc = 0x33C9B0u;
            goto label_33c9b0;
        }
    }
    ctx->pc = 0x33C9A8u;
label_33c9a8:
    // 0x33c9a8: 0xc0cf66c  jal         func_33D9B0
    ctx->pc = 0x33C9A8u;
    SET_GPR_U32(ctx, 31, 0x33C9B0u);
    ctx->pc = 0x33D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D9B0u, 0x33C9A8u, 0x33C9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C9B0u;
label_33c9b0:
    // 0x33c9b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33c9b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33c9b4:
    // 0x33c9b4: 0x3e00008  jr          $ra
    ctx->pc = 0x33C9B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C9B4u;
        // 0x33c9b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C9B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C9BCu;
    // 0x33c9bc: 0x0  nop
    ctx->pc = 0x33c9bcu;
    // NOP
    // 0x33c9c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x33c9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x33c9c4: 0x3c05009f  lui         $a1, 0x9F
    ctx->pc = 0x33c9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)159 << 16));
    // 0x33c9c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x33c9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x33c9cc: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x33c9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x33c9d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33c9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x33c9d4: 0x240604b4  addiu       $a2, $zero, 0x4B4
    ctx->pc = 0x33c9d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1204));
    // 0x33c9d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33c9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33c9dc: 0x24a58b10  addiu       $a1, $a1, -0x74F0
    ctx->pc = 0x33c9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937360));
    // 0x33c9e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33c9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33c9e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33c9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33c9e8: 0x90679730  lbu         $a3, -0x68D0($v1)
    ctx->pc = 0x33c9e8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940464)));
    // 0x33c9ec: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x33c9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x33c9f0: 0xe63018  mult        $a2, $a3, $a2
    ctx->pc = 0x33c9f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x33c9f4: 0x90639738  lbu         $v1, -0x68C8($v1)
    ctx->pc = 0x33c9f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940472)));
    // 0x33c9f8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x33C9F8u;
    {
        const bool branch_taken_0x33c9f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C9F8u;
        // 0x33c9fc: 0xa69021  addu        $s2, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c9f8) {
            ctx->pc = 0x33CA10u;
            goto label_33ca10;
        }
    }
    ctx->pc = 0x33CA00u;
    // 0x33ca00: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x33ca00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x33ca04: 0x906395c0  lbu         $v1, -0x6A40($v1)
    ctx->pc = 0x33ca04u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940096)));
    // 0x33ca08: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x33CA08u;
    {
        const bool branch_taken_0x33ca08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33ca08) {
            ctx->pc = 0x33CA20u;
            goto label_33ca20;
        }
    }
    ctx->pc = 0x33CA10u;
label_33ca10:
    // 0x33ca10: 0xc055728  jal         func_155CA0
    ctx->pc = 0x33CA10u;
    SET_GPR_U32(ctx, 31, 0x33CA18u);
    ctx->pc = 0x155CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155CA0u, 0x33CA10u, 0x33CA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CA18u;
label_33ca18:
    // 0x33ca18: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x33CA18u;
    {
        const bool branch_taken_0x33ca18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CA18u;
        // 0x33ca1c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ca18) {
            ctx->pc = 0x33CC6Cu;
            goto label_33cc6c;
        }
    }
    ctx->pc = 0x33CA20u;
label_33ca20:
    // 0x33ca20: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33ca20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33ca24: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x33ca24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x33ca28: 0x9066e818  lbu         $a2, -0x17E8($v1)
    ctx->pc = 0x33ca28u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961176)));
    // 0x33ca2c: 0x10c50062  beq         $a2, $a1, . + 4 + (0x62 << 2)
    ctx->pc = 0x33CA2Cu;
    {
        const bool branch_taken_0x33ca2c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x33ca2c) {
            ctx->pc = 0x33CBB8u;
            goto label_33cbb8;
        }
    }
    ctx->pc = 0x33CA34u;
    // 0x33ca34: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x33ca34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33ca38: 0x50c3005b  beql        $a2, $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x33CA38u;
    {
        const bool branch_taken_0x33ca38 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x33ca38) {
            ctx->pc = 0x33CA3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33CA38u;
            // 0x33ca3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33CBA8u;
            goto label_33cba8;
        }
    }
    ctx->pc = 0x33CA40u;
    // 0x33ca40: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x33ca40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33ca44: 0x50c3002b  beql        $a2, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x33CA44u;
    {
        const bool branch_taken_0x33ca44 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x33ca44) {
            ctx->pc = 0x33CA48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33CA44u;
            // 0x33ca48: 0x241100c0  addiu       $s1, $zero, 0xC0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33CAF4u;
            goto label_33caf4;
        }
    }
    ctx->pc = 0x33CA4Cu;
    // 0x33ca4c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33ca4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33ca50: 0x10c30008  beq         $a2, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x33CA50u;
    {
        const bool branch_taken_0x33ca50 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x33ca50) {
            ctx->pc = 0x33CA74u;
            goto label_33ca74;
        }
    }
    ctx->pc = 0x33CA58u;
    // 0x33ca58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33ca58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33ca5c: 0x10c30058  beq         $a2, $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x33CA5Cu;
    {
        const bool branch_taken_0x33ca5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x33ca5c) {
            ctx->pc = 0x33CBC0u;
            goto label_33cbc0;
        }
    }
    ctx->pc = 0x33CA64u;
    // 0x33ca64: 0x10c00080  beqz        $a2, . + 4 + (0x80 << 2)
    ctx->pc = 0x33CA64u;
    {
        const bool branch_taken_0x33ca64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ca64) {
            ctx->pc = 0x33CC68u;
            goto label_33cc68;
        }
    }
    ctx->pc = 0x33CA6Cu;
    // 0x33ca6c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x33CA6Cu;
    {
        const bool branch_taken_0x33ca6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ca6c) {
            ctx->pc = 0x33CBC0u;
            goto label_33cbc0;
        }
    }
    ctx->pc = 0x33CA74u;
label_33ca74:
    // 0x33ca74: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33ca74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33ca78: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x33ca78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x33ca7c: 0x8c49e8f0  lw          $t1, -0x1710($v0)
    ctx->pc = 0x33ca7cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961392)));
    // 0x33ca80: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x33ca80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x33ca84: 0x24a54a00  addiu       $a1, $a1, 0x4A00
    ctx->pc = 0x33ca84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18944));
    // 0x33ca88: 0x24844a02  addiu       $a0, $a0, 0x4A02
    ctx->pc = 0x33ca88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18946));
    // 0x33ca8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33ca8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ca90: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x33ca90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x33ca94: 0x91940  sll         $v1, $t1, 5
    ctx->pc = 0x33ca94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
    // 0x33ca98: 0x24422f90  addiu       $v0, $v0, 0x2F90
    ctx->pc = 0x33ca98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
    // 0x33ca9c: 0x94080  sll         $t0, $t1, 2
    ctx->pc = 0x33ca9cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x33caa0: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x33caa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33caa4: 0x1091021  addu        $v0, $t0, $t1
    ctx->pc = 0x33caa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x33caa8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x33caa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x33caac: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x33caacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x33cab0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33cab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x33cab4: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x33cab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x33cab8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x33cab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33cabc: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x33cabcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33cac0: 0x94500000  lhu         $s0, 0x0($v0)
    ctx->pc = 0x33cac0u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33cac4: 0x247100b4  addiu       $s1, $v1, 0xB4
    ctx->pc = 0x33cac4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x33cac8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33cac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33cacc: 0xc0ce5bc  jal         func_3396F0
    ctx->pc = 0x33CACCu;
    SET_GPR_U32(ctx, 31, 0x33CAD4u);
    ctx->pc = 0x33CAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CACCu;
    // 0x33cad0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3396F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3396F0u, 0x33CACCu, 0x33CAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CAD4u;
label_33cad4:
    // 0x33cad4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33cad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33cad8: 0x26240024  addiu       $a0, $s1, 0x24
    ctx->pc = 0x33cad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x33cadc: 0x8046e8e8  lb          $a2, -0x1718($v0)
    ctx->pc = 0x33cadcu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961384)));
    // 0x33cae0: 0xc0ce7a4  jal         func_339E90
    ctx->pc = 0x33CAE0u;
    SET_GPR_U32(ctx, 31, 0x33CAE8u);
    ctx->pc = 0x33CAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CAE0u;
    // 0x33cae4: 0x26050012  addiu       $a1, $s0, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339E90u, 0x33CAE0u, 0x33CAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CAE8u;
label_33cae8:
    // 0x33cae8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x33CAE8u;
    {
        const bool branch_taken_0x33cae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33cae8) {
            ctx->pc = 0x33CBC0u;
            goto label_33cbc0;
        }
    }
    ctx->pc = 0x33CAF0u;
    // 0x33caf0: 0x241100c0  addiu       $s1, $zero, 0xC0
    ctx->pc = 0x33caf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_33caf4:
    // 0x33caf4: 0x24100080  addiu       $s0, $zero, 0x80
    ctx->pc = 0x33caf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x33caf8: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x33caf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x33cafc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33cafcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33cb00: 0x248432fc  addiu       $a0, $a0, 0x32FC
    ctx->pc = 0x33cb00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13052));
    // 0x33cb04: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x33CB04u;
    SET_GPR_U32(ctx, 31, 0x33CB0Cu);
    ctx->pc = 0x33CB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CB04u;
    // 0x33cb08: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x33CB04u, 0x33CB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CB0Cu;
label_33cb0c:
    // 0x33cb0c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33cb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33cb10: 0x8c42e8b0  lw          $v0, -0x1750($v0)
    ctx->pc = 0x33cb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961328)));
    // 0x33cb14: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x33CB14u;
    {
        const bool branch_taken_0x33cb14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33cb14) {
            ctx->pc = 0x33CB34u;
            goto label_33cb34;
        }
    }
    ctx->pc = 0x33CB1Cu;
    // 0x33cb1c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x33cb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x33cb20: 0x24050160  addiu       $a1, $zero, 0x160
    ctx->pc = 0x33cb20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x33cb24: 0x24843398  addiu       $a0, $a0, 0x3398
    ctx->pc = 0x33cb24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13208));
    // 0x33cb28: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x33cb28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33cb2c: 0xc0c0ae8  jal         func_302BA0
    ctx->pc = 0x33CB2Cu;
    SET_GPR_U32(ctx, 31, 0x33CB34u);
    ctx->pc = 0x33CB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CB2Cu;
    // 0x33cb30: 0x240700a0  addiu       $a3, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302BA0u, 0x33CB2Cu, 0x33CB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CB34u;
label_33cb34:
    // 0x33cb34: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33cb34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33cb38: 0x8c43e864  lw          $v1, -0x179C($v0)
    ctx->pc = 0x33cb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961252)));
    // 0x33cb3c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x33CB3Cu;
    {
        const bool branch_taken_0x33cb3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33cb3c) {
            ctx->pc = 0x33CB78u;
            goto label_33cb78;
        }
    }
    ctx->pc = 0x33CB44u;
    // 0x33cb44: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33cb44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33cb48: 0x8c42e860  lw          $v0, -0x17A0($v0)
    ctx->pc = 0x33cb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961248)));
    // 0x33cb4c: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x33cb4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x33cb50: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33CB50u;
    {
        const bool branch_taken_0x33cb50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33cb50) {
            ctx->pc = 0x33CB78u;
            goto label_33cb78;
        }
    }
    ctx->pc = 0x33CB58u;
    // 0x33cb58: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x33cb58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x33cb5c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x33cb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x33cb60: 0x24843314  addiu       $a0, $a0, 0x3314
    ctx->pc = 0x33cb60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13076));
    // 0x33cb64: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x33cb64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x33cb68: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x33CB68u;
    SET_GPR_U32(ctx, 31, 0x33CB70u);
    ctx->pc = 0x33CB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CB68u;
    // 0x33cb6c: 0x24050180  addiu       $a1, $zero, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x33CB68u, 0x33CB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CB70u;
label_33cb70:
    // 0x33cb70: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x33CB70u;
    {
        const bool branch_taken_0x33cb70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33cb70) {
            ctx->pc = 0x33CBC0u;
            goto label_33cbc0;
        }
    }
    ctx->pc = 0x33CB78u;
label_33cb78:
    // 0x33cb78: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33cb78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33cb7c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x33cb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x33cb80: 0x8c42e860  lw          $v0, -0x17A0($v0)
    ctx->pc = 0x33cb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961248)));
    // 0x33cb84: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x33cb84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x33cb88: 0x2033021  addu        $a2, $s0, $v1
    ctx->pc = 0x33cb88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x33cb8c: 0x24843308  addiu       $a0, $a0, 0x3308
    ctx->pc = 0x33cb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13064));
    // 0x33cb90: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x33cb90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x33cb94: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x33CB94u;
    SET_GPR_U32(ctx, 31, 0x33CB9Cu);
    ctx->pc = 0x33CB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CB94u;
    // 0x33cb98: 0x2222821  addu        $a1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x33CB94u, 0x33CB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CB9Cu;
label_33cb9c:
    // 0x33cb9c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33CB9Cu;
    {
        const bool branch_taken_0x33cb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33cb9c) {
            ctx->pc = 0x33CBC0u;
            goto label_33cbc0;
        }
    }
    ctx->pc = 0x33CBA4u;
    // 0x33cba4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33cba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33cba8:
    // 0x33cba8: 0xc0ceed0  jal         func_33BB40
    ctx->pc = 0x33CBA8u;
    SET_GPR_U32(ctx, 31, 0x33CBB0u);
    ctx->pc = 0x33CBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CBA8u;
    // 0x33cbac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33BB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BB40u, 0x33CBA8u, 0x33CBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CBB0u;
label_33cbb0:
    // 0x33cbb0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x33CBB0u;
    {
        const bool branch_taken_0x33cbb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33cbb0) {
            ctx->pc = 0x33CC68u;
            goto label_33cc68;
        }
    }
    ctx->pc = 0x33CBB8u;
label_33cbb8:
    // 0x33cbb8: 0xc055728  jal         func_155CA0
    ctx->pc = 0x33CBB8u;
    SET_GPR_U32(ctx, 31, 0x33CBC0u);
    ctx->pc = 0x155CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155CA0u, 0x33CBB8u, 0x33CBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CBC0u;
label_33cbc0:
    // 0x33cbc0: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x33cbc0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x33cbc4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x33cbc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33cbc8: 0x26314a00  addiu       $s1, $s1, 0x4A00
    ctx->pc = 0x33cbc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 18944));
    // 0x33cbcc: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x33cbccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33cbd0:
    // 0x33cbd0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33cbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33cbd4: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x33cbd4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33cbd8: 0x8c63e8f0  lw          $v1, -0x1710($v1)
    ctx->pc = 0x33cbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961392)));
    // 0x33cbdc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33cbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33cbe0: 0x96050002  lhu         $a1, 0x2($s0)
    ctx->pc = 0x33cbe0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x33cbe4: 0x26260004  addiu       $a2, $s1, 0x4
    ctx->pc = 0x33cbe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x33cbe8: 0x733826  xor         $a3, $v1, $s3
    ctx->pc = 0x33cbe8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 19));
    // 0x33cbec: 0x7382b  sltu        $a3, $zero, $a3
    ctx->pc = 0x33cbecu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x33cbf0: 0xc0ce5bc  jal         func_3396F0
    ctx->pc = 0x33CBF0u;
    SET_GPR_U32(ctx, 31, 0x33CBF8u);
    ctx->pc = 0x33CBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CBF0u;
    // 0x33cbf4: 0xac47e8e0  sw          $a3, -0x1720($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961376), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3396F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3396F0u, 0x33CBF0u, 0x33CBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CBF8u;
label_33cbf8:
    // 0x33cbf8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x33cbf8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x33cbfc: 0x2631002c  addiu       $s1, $s1, 0x2C
    ctx->pc = 0x33cbfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    // 0x33cc00: 0x2a620009  slti        $v0, $s3, 0x9
    ctx->pc = 0x33cc00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x33cc04: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x33CC04u;
    {
        const bool branch_taken_0x33cc04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33CC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CC04u;
        // 0x33cc08: 0x2610002c  addiu       $s0, $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cc04) {
            ctx->pc = 0x33CBD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_33cbd0;
        }
    }
    ctx->pc = 0x33CC0Cu;
    // 0x33cc0c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33cc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33cc10: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x33cc10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x33cc14: 0x8c45e8f0  lw          $a1, -0x1710($v0)
    ctx->pc = 0x33cc14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961392)));
    // 0x33cc18: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x33cc18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x33cc1c: 0x24634a00  addiu       $v1, $v1, 0x4A00
    ctx->pc = 0x33cc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18944));
    // 0x33cc20: 0x24c64e68  addiu       $a2, $a2, 0x4E68
    ctx->pc = 0x33cc20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20072));
    // 0x33cc24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33cc24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33cc28: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x33cc28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x33cc2c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x33cc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x33cc30: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x33cc30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x33cc34: 0x24424a02  addiu       $v0, $v0, 0x4A02
    ctx->pc = 0x33cc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18946));
    // 0x33cc38: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x33cc38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x33cc3c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x33cc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x33cc40: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x33cc40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x33cc44: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33cc44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33cc48: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x33cc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x33cc4c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x33cc4cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33cc50: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x33cc50u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33cc54: 0xc0ce5bc  jal         func_3396F0
    ctx->pc = 0x33CC54u;
    SET_GPR_U32(ctx, 31, 0x33CC5Cu);
    ctx->pc = 0x33CC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CC54u;
    // 0x33cc58: 0x2464ffee  addiu       $a0, $v1, -0x12 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967278));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3396F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3396F0u, 0x33CC54u, 0x33CC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CC5Cu;
label_33cc5c:
    // 0x33cc5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33cc5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33cc60: 0xc0ceed0  jal         func_33BB40
    ctx->pc = 0x33CC60u;
    SET_GPR_U32(ctx, 31, 0x33CC68u);
    ctx->pc = 0x33CC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CC60u;
    // 0x33cc64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33BB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BB40u, 0x33CC60u, 0x33CC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CC68u;
label_33cc68:
    // 0x33cc68: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x33cc68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_33cc6c:
    // 0x33cc6c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33cc6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33cc70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33cc70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33cc74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33cc74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33cc78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33cc78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33cc7c: 0x3e00008  jr          $ra
    ctx->pc = 0x33CC7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33CC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CC7Cu;
        // 0x33cc80: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CC7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33CC84u;
    // 0x33cc84: 0x0  nop
    ctx->pc = 0x33cc84u;
    // NOP
    // 0x33cc88: 0x0  nop
    ctx->pc = 0x33cc88u;
    // NOP
    // 0x33cc8c: 0x0  nop
    ctx->pc = 0x33cc8cu;
    // NOP
}
