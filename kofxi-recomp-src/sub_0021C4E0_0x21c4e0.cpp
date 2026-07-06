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

// Function: sub_0021C4E0
// Address: 0x21c4e0 - 0x21c880
void sub_0021C4E0_0x21c4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C4E0_0x21c4e0");
#endif

    switch (ctx->pc) {
        case 0x21c4fcu: goto label_21c4fc;
        case 0x21c50cu: goto label_21c50c;
        case 0x21c51cu: goto label_21c51c;
        case 0x21c52cu: goto label_21c52c;
        case 0x21c5acu: goto label_21c5ac;
        case 0x21c5c0u: goto label_21c5c0;
        case 0x21c5d4u: goto label_21c5d4;
        case 0x21c5ecu: goto label_21c5ec;
        case 0x21c628u: goto label_21c628;
        case 0x21c638u: goto label_21c638;
        case 0x21c678u: goto label_21c678;
        case 0x21c688u: goto label_21c688;
        case 0x21c6d8u: goto label_21c6d8;
        case 0x21c714u: goto label_21c714;
        case 0x21c7acu: goto label_21c7ac;
        case 0x21c7c0u: goto label_21c7c0;
        case 0x21c7d4u: goto label_21c7d4;
        case 0x21c7ecu: goto label_21c7ec;
        case 0x21c818u: goto label_21c818;
        case 0x21c824u: goto label_21c824;
        case 0x21c84cu: goto label_21c84c;
        case 0x21c854u: goto label_21c854;
        default: break;
    }

    ctx->pc = 0x21c4e0u;

label_21c4e0:
    // 0x21c4e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21c4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21c4e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21c4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21c4e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21c4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21c4ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21c4ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c4f0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21c4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21c4f4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21C4F4u;
    SET_GPR_U32(ctx, 31, 0x21C4FCu);
    ctx->pc = 0x21C4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C4F4u;
    // 0x21c4f8: 0x24841760  addiu       $a0, $a0, 0x1760 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21C4F4u, 0x21C4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C4FCu;
label_21c4fc:
    // 0x21c4fc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x21c4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21c500: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21c500u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21c504: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21C504u;
    SET_GPR_U32(ctx, 31, 0x21C50Cu);
    ctx->pc = 0x21C508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C504u;
    // 0x21c508: 0x24841780  addiu       $a0, $a0, 0x1780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21C504u, 0x21C50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C50Cu;
label_21c50c:
    // 0x21c50c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x21c50cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21c510: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21c510u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21c514: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21C514u;
    SET_GPR_U32(ctx, 31, 0x21C51Cu);
    ctx->pc = 0x21C518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C514u;
    // 0x21c518: 0x24841790  addiu       $a0, $a0, 0x1790 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21C514u, 0x21C51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C51Cu;
label_21c51c:
    // 0x21c51c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x21c51cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x21c520: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21c520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21c524: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21C524u;
    SET_GPR_U32(ctx, 31, 0x21C52Cu);
    ctx->pc = 0x21C528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C524u;
    // 0x21c528: 0x24841120  addiu       $a0, $a0, 0x1120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21C524u, 0x21C52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C52Cu;
label_21c52c:
    // 0x21c52c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x21c52cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x21c530: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21c530u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21c534: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21c534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21c538: 0x248410f0  addiu       $a0, $a0, 0x10F0
    ctx->pc = 0x21c538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4336));
    // 0x21c53c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c53cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c540: 0x8043e52  j           func_10F948
    ctx->pc = 0x21C540u;
    ctx->pc = 0x21C544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C540u;
    // 0x21c544: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x21C548u;
    // 0x21c548: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x21c548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x21c54c: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x21c54cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21c550: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x21c550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x21c554: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x21c554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x21c558: 0x3c14003a  lui         $s4, 0x3A
    ctx->pc = 0x21c558u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
    // 0x21c55c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x21c55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x21c560: 0xae80ab58  sw          $zero, -0x54A8($s4)
    ctx->pc = 0x21c560u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294945624), GPR_U32(ctx, 0));
    // 0x21c564: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x21c564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x21c568: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21c568u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c56c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21c56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21c570: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x21c570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x21c574: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21c574u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c578: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x21c578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x21c57c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21c57cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c580: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x21c580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x21c584: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x21c584u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c588: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x21c588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x21c58c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21c58cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c590: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x21c590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x21c594: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x21c594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
    // 0x21c598: 0x8cad0000  lw          $t5, 0x0($a1)
    ctx->pc = 0x21c598u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21c59c: 0x8cd50000  lw          $s5, 0x0($a2)
    ctx->pc = 0x21c59cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21c5a0: 0xafad0004  sw          $t5, 0x4($sp)
    ctx->pc = 0x21c5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 13));
    // 0x21c5a4: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21C5A4u;
    SET_GPR_U32(ctx, 31, 0x21C5ACu);
    ctx->pc = 0x21C5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C5A4u;
    // 0x21c5a8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x21C5A4u, 0x21C5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C5ACu;
label_21c5ac:
    // 0x21c5ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21c5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c5b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21c5b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c5b4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21c5b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21c5b8: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21C5B8u;
    SET_GPR_U32(ctx, 31, 0x21C5C0u);
    ctx->pc = 0x21C5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C5B8u;
    // 0x21c5bc: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x21C5B8u, 0x21C5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C5C0u;
label_21c5c0:
    // 0x21c5c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21c5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c5c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21c5c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c5c8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21c5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21c5cc: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21C5CCu;
    SET_GPR_U32(ctx, 31, 0x21C5D4u);
    ctx->pc = 0x21C5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C5CCu;
    // 0x21c5d0: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x21C5CCu, 0x21C5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C5D4u;
label_21c5d4:
    // 0x21c5d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21c5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c5d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21c5d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c5dc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21c5dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21c5e0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21c5e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c5e4: 0xc084520  jal         func_211480
    ctx->pc = 0x21C5E4u;
    SET_GPR_U32(ctx, 31, 0x21C5ECu);
    ctx->pc = 0x21C5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C5E4u;
    // 0x21c5e8: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211480u, 0x21C5E4u, 0x21C5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C5ECu;
label_21c5ec:
    // 0x21c5ec: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x21c5ecu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c5f0: 0x29cf000b  slti        $t7, $t6, 0xB
    ctx->pc = 0x21c5f0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x21c5f4: 0x11e00048  beqz        $t7, . + 4 + (0x48 << 2)
    ctx->pc = 0x21C5F4u;
    {
        const bool branch_taken_0x21c5f4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C5F4u;
        // 0x21c5f8: 0x240dffff  addiu       $t5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c5f4) {
            ctx->pc = 0x21C718u;
            goto label_21c718;
        }
    }
    ctx->pc = 0x21C5FCu;
    // 0x21c5fc: 0x5c10003  bgez        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x21C5FCu;
    {
        const bool branch_taken_0x21c5fc = (GPR_S32(ctx, 14) >= 0);
        if (branch_taken_0x21c5fc) {
            ctx->pc = 0x21C60Cu;
            goto label_21c60c;
        }
    }
    ctx->pc = 0x21C604u;
    // 0x21c604: 0x240e000a  addiu       $t6, $zero, 0xA
    ctx->pc = 0x21c604u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x21c608: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x21c608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
label_21c60c:
    // 0x21c60c: 0x19c0002d  blez        $t6, . + 4 + (0x2D << 2)
    ctx->pc = 0x21C60Cu;
    {
        const bool branch_taken_0x21c60c = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x21C610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C60Cu;
        // 0x21c610: 0x29cf000a  slti        $t7, $t6, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c60c) {
            ctx->pc = 0x21C6C4u;
            goto label_21c6c4;
        }
    }
    ctx->pc = 0x21C614u;
    // 0x21c614: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x21c614u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c618: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x21c618u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21c61c: 0x3c14003a  lui         $s4, 0x3A
    ctx->pc = 0x21c61cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
    // 0x21c620: 0x2c0b82d  daddu       $s7, $s6, $zero
    ctx->pc = 0x21c620u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c624: 0xae80ab60  sw          $zero, -0x54A0($s4)
    ctx->pc = 0x21c624u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294945632), GPR_U32(ctx, 0));
label_21c628:
    // 0x21c628: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21c628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c62c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21c62cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c630: 0xc084dba  jal         func_2136E8
    ctx->pc = 0x21C630u;
    SET_GPR_U32(ctx, 31, 0x21C638u);
    ctx->pc = 0x21C634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C630u;
    // 0x21c634: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2136E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2136E8u, 0x21C630u, 0x21C638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C638u;
label_21c638:
    // 0x21c638: 0x4400037  bltz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x21C638u;
    {
        const bool branch_taken_0x21c638 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x21C63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C638u;
        // 0x21c63c: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c638) {
            ctx->pc = 0x21C718u;
            goto label_21c718;
        }
    }
    ctx->pc = 0x21C640u;
    // 0x21c640: 0x8e8fab60  lw          $t7, -0x54A0($s4)
    ctx->pc = 0x21c640u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294945632)));
    // 0x21c644: 0x11e0001a  beqz        $t7, . + 4 + (0x1A << 2)
    ctx->pc = 0x21C644u;
    {
        const bool branch_taken_0x21c644 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C644u;
        // 0x21c648: 0x8fae0000  lw          $t6, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c644) {
            ctx->pc = 0x21C6B0u;
            goto label_21c6b0;
        }
    }
    ctx->pc = 0x21C64Cu;
    // 0x21c64c: 0x8ecdab58  lw          $t5, -0x54A8($s6)
    ctx->pc = 0x21c64cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294945624)));
    // 0x21c650: 0x31af0003  andi        $t7, $t5, 0x3
    ctx->pc = 0x21c650u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)3);
    // 0x21c654: 0x11e0003d  beqz        $t7, . + 4 + (0x3D << 2)
    ctx->pc = 0x21C654u;
    {
        const bool branch_taken_0x21c654 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C654u;
        // 0x21c658: 0x25af0003  addiu       $t7, $t5, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c654) {
            ctx->pc = 0x21C74Cu;
            goto label_21c74c;
        }
    }
    ctx->pc = 0x21C65Cu;
    // 0x21c65c: 0x29ae0000  slti        $t6, $t5, 0x0
    ctx->pc = 0x21c65cu;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x21c660: 0x1ae780a  movz        $t7, $t5, $t6
    ctx->pc = 0x21c660u;
    if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 13));
    // 0x21c664: 0xf7883  sra         $t7, $t7, 2
    ctx->pc = 0x21c664u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 2));
    // 0x21c668: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x21c668u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x21c66c: 0x1af7823  subu        $t7, $t5, $t7
    ctx->pc = 0x21c66cu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x21c670: 0x240d0004  addiu       $t5, $zero, 0x4
    ctx->pc = 0x21c670u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21c674: 0x1af7023  subu        $t6, $t5, $t7
    ctx->pc = 0x21c674u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
label_21c678:
    // 0x21c678: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x21c678u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x21c67c: 0x11de000a  beq         $t6, $fp, . + 4 + (0xA << 2)
    ctx->pc = 0x21C67Cu;
    {
        const bool branch_taken_0x21c67c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 30));
        ctx->pc = 0x21C680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C67Cu;
        // 0x21c680: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c67c) {
            ctx->pc = 0x21C6A8u;
            goto label_21c6a8;
        }
    }
    ctx->pc = 0x21C684u;
    // 0x21c684: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x21c684u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_21c688:
    // 0x21c688: 0x8caf0000  lw          $t7, 0x0($a1)
    ctx->pc = 0x21c688u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21c68c: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x21c68cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x21c690: 0xa1e00000  sb          $zero, 0x0($t7)
    ctx->pc = 0x21c690u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x21c694: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x21c694u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x21c698: 0x0  nop
    ctx->pc = 0x21c698u;
    // NOP
    // 0x21c69c: 0x15cdfffa  bne         $t6, $t5, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21C69Cu;
    {
        const bool branch_taken_0x21c69c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 13));
        ctx->pc = 0x21C6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C69Cu;
        // 0x21c6a0: 0xacaf0000  sw          $t7, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c69c) {
            ctx->pc = 0x21C688u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21c688;
        }
    }
    ctx->pc = 0x21C6A4u;
    // 0x21c6a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21c6a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_21c6a8:
    // 0x21c6a8: 0xaee0ab58  sw          $zero, -0x54A8($s7)
    ctx->pc = 0x21c6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294945624), GPR_U32(ctx, 0));
    // 0x21c6ac: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x21c6acu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_21c6b0:
    // 0x21c6b0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x21c6b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x21c6b4: 0x24e782a  slt         $t7, $s2, $t6
    ctx->pc = 0x21c6b4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x21c6b8: 0x55e0ffdb  bnel        $t7, $zero, . + 4 + (-0x25 << 2)
    ctx->pc = 0x21C6B8u;
    {
        const bool branch_taken_0x21c6b8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c6b8) {
            ctx->pc = 0x21C6BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C6B8u;
            // 0x21c6bc: 0xae80ab60  sw          $zero, -0x54A0($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 4294945632), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C628u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21c628;
        }
    }
    ctx->pc = 0x21C6C0u;
    // 0x21c6c0: 0x29cf000a  slti        $t7, $t6, 0xA
    ctx->pc = 0x21c6c0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)10) ? 1 : 0);
label_21c6c4:
    // 0x21c6c4: 0x11e0000d  beqz        $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x21C6C4u;
    {
        const bool branch_taken_0x21c6c4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C6C4u;
        // 0x21c6c8: 0x1c0902d  daddu       $s2, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c6c4) {
            ctx->pc = 0x21C6FCu;
            goto label_21c6fc;
        }
    }
    ctx->pc = 0x21C6CCu;
    // 0x21c6cc: 0x3c0c003a  lui         $t4, 0x3A
    ctx->pc = 0x21c6ccu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)58 << 16));
    // 0x21c6d0: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x21c6d0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21c6d4: 0x8d8eab58  lw          $t6, -0x54A8($t4)
    ctx->pc = 0x21c6d4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294945624)));
label_21c6d8:
    // 0x21c6d8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x21c6d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x21c6dc: 0x25ad0074  addiu       $t5, $t5, 0x74
    ctx->pc = 0x21c6dcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 116));
    // 0x21c6e0: 0x2a4f000a  slti        $t7, $s2, 0xA
    ctx->pc = 0x21c6e0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x21c6e4: 0x0  nop
    ctx->pc = 0x21c6e4u;
    // NOP
    // 0x21c6e8: 0x0  nop
    ctx->pc = 0x21c6e8u;
    // NOP
    // 0x21c6ec: 0x15e0fffa  bnez        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21C6ECu;
    {
        const bool branch_taken_0x21c6ec = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C6ECu;
        // 0x21c6f0: 0x25ce0074  addiu       $t6, $t6, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c6ec) {
            ctx->pc = 0x21C6D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21c6d8;
        }
    }
    ctx->pc = 0x21C6F4u;
    // 0x21c6f4: 0xad8eab58  sw          $t6, -0x54A8($t4)
    ctx->pc = 0x21c6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4294945624), GPR_U32(ctx, 14));
    // 0x21c6f8: 0xae0d0000  sw          $t5, 0x0($s0)
    ctx->pc = 0x21c6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 13));
label_21c6fc:
    // 0x21c6fc: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x21c6fcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21c700: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x21c700u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21c704: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x21c704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x21c708: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x21c708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
    // 0x21c70c: 0xc087138  jal         func_21C4E0
    ctx->pc = 0x21C70Cu;
    SET_GPR_U32(ctx, 31, 0x21C714u);
    ctx->pc = 0x21C710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C70Cu;
    // 0x21c710: 0x2afa823  subu        $s5, $s5, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C4E0u;
    goto label_21c4e0;
    ctx->pc = 0x21C714u;
label_21c714:
    // 0x21c714: 0x2a0682d  daddu       $t5, $s5, $zero
    ctx->pc = 0x21c714u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_21c718:
    // 0x21c718: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x21c718u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c71c: 0x1a0102d  daddu       $v0, $t5, $zero
    ctx->pc = 0x21c71cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c720: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x21c720u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21c724: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21c724u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21c728: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x21c728u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21c72c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x21c72cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21c730: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x21c730u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21c734: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x21c734u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21c738: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x21c738u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21c73c: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x21c73cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21c740: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x21c740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x21c744: 0x3e00008  jr          $ra
    ctx->pc = 0x21C744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C744u;
        // 0x21c748: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C74Cu;
label_21c74c:
    // 0x21c74c: 0x1000ffca  b           . + 4 + (-0x36 << 2)
    ctx->pc = 0x21C74Cu;
    {
        const bool branch_taken_0x21c74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C74Cu;
        // 0x21c750: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c74c) {
            ctx->pc = 0x21C678u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21c678;
        }
    }
    ctx->pc = 0x21C754u;
    // 0x21c754: 0x0  nop
    ctx->pc = 0x21c754u;
    // NOP
    // 0x21c758: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x21c758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21c75c: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x21c75cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21c760: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x21c760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x21c764: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21c764u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21c768: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x21c768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
    // 0x21c76c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x21c76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x21c770: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x21c770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x21c774: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21c774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21c778: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x21c778u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c77c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x21c77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x21c780: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21c780u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c784: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x21c784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x21c788: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21c788u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c78c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x21c78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x21c790: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21c790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21c794: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x21c794u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x21c798: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21c798u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c79c: 0x8c950000  lw          $s5, 0x0($a0)
    ctx->pc = 0x21c79cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21c7a0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x21c7a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c7a4: 0xc084612  jal         func_211848
    ctx->pc = 0x21C7A4u;
    SET_GPR_U32(ctx, 31, 0x21C7ACu);
    ctx->pc = 0x21C7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C7A4u;
    // 0x21c7a8: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x21C7A4u, 0x21C7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C7ACu;
label_21c7ac:
    // 0x21c7ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21c7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c7b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21c7b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c7b4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21c7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21c7b8: 0xc084612  jal         func_211848
    ctx->pc = 0x21C7B8u;
    SET_GPR_U32(ctx, 31, 0x21C7C0u);
    ctx->pc = 0x21C7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C7B8u;
    // 0x21c7bc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x21C7B8u, 0x21C7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C7C0u;
label_21c7c0:
    // 0x21c7c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21c7c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c7c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21c7c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c7c8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21c7c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21c7cc: 0xc084612  jal         func_211848
    ctx->pc = 0x21C7CCu;
    SET_GPR_U32(ctx, 31, 0x21C7D4u);
    ctx->pc = 0x21C7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C7CCu;
    // 0x21c7d0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x21C7CCu, 0x21C7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C7D4u;
label_21c7d4:
    // 0x21c7d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21c7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c7d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21c7d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c7dc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21c7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21c7e0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21c7e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c7e4: 0xc084654  jal         func_211950
    ctx->pc = 0x21C7E4u;
    SET_GPR_U32(ctx, 31, 0x21C7ECu);
    ctx->pc = 0x21C7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C7E4u;
    // 0x21c7e8: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211950u, 0x21C7E4u, 0x21C7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C7ECu;
label_21c7ec:
    // 0x21c7ec: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x21c7ecu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c7f0: 0x29cf000b  slti        $t7, $t6, 0xB
    ctx->pc = 0x21c7f0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x21c7f4: 0x11e00017  beqz        $t7, . + 4 + (0x17 << 2)
    ctx->pc = 0x21C7F4u;
    {
        const bool branch_taken_0x21c7f4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C7F4u;
        // 0x21c7f8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c7f4) {
            ctx->pc = 0x21C854u;
            goto label_21c854;
        }
    }
    ctx->pc = 0x21C7FCu;
    // 0x21c7fc: 0x5c10003  bgez        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x21C7FCu;
    {
        const bool branch_taken_0x21c7fc = (GPR_S32(ctx, 14) >= 0);
        if (branch_taken_0x21c7fc) {
            ctx->pc = 0x21C80Cu;
            goto label_21c80c;
        }
    }
    ctx->pc = 0x21C804u;
    // 0x21c804: 0x240e000a  addiu       $t6, $zero, 0xA
    ctx->pc = 0x21c804u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x21c808: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x21c808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
label_21c80c:
    // 0x21c80c: 0x19c0000c  blez        $t6, . + 4 + (0xC << 2)
    ctx->pc = 0x21C80Cu;
    {
        const bool branch_taken_0x21c80c = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x21C810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C80Cu;
        // 0x21c810: 0x240effff  addiu       $t6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c80c) {
            ctx->pc = 0x21C840u;
            goto label_21c840;
        }
    }
    ctx->pc = 0x21C814u;
    // 0x21c814: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21c814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21c818:
    // 0x21c818: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21c818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c81c: 0xc084de6  jal         func_213798
    ctx->pc = 0x21C81Cu;
    SET_GPR_U32(ctx, 31, 0x21C824u);
    ctx->pc = 0x21C820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C81Cu;
    // 0x21c820: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213798u, 0x21C81Cu, 0x21C824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C824u;
label_21c824:
    // 0x21c824: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x21C824u;
    {
        const bool branch_taken_0x21c824 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x21C828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C824u;
        // 0x21c828: 0x8faf0000  lw          $t7, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c824) {
            ctx->pc = 0x21C878u;
            goto label_21c878;
        }
    }
    ctx->pc = 0x21C82Cu;
    // 0x21c82c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x21c82cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x21c830: 0x26f782a  slt         $t7, $s3, $t7
    ctx->pc = 0x21c830u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x21c834: 0x15e0fff8  bnez        $t7, . + 4 + (-0x8 << 2)
    ctx->pc = 0x21C834u;
    {
        const bool branch_taken_0x21c834 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C834u;
        // 0x21c838: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c834) {
            ctx->pc = 0x21C818u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21c818;
        }
    }
    ctx->pc = 0x21C83Cu;
    // 0x21c83c: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x21c83cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_21c840:
    // 0x21c840: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x21c840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c844: 0xc087138  jal         func_21C4E0
    ctx->pc = 0x21C844u;
    SET_GPR_U32(ctx, 31, 0x21C84Cu);
    ctx->pc = 0x21C848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C844u;
    // 0x21c848: 0xafae0000  sw          $t6, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C4E0u;
    goto label_21c4e0;
    ctx->pc = 0x21C84Cu;
label_21c84c:
    // 0x21c84c: 0x8e4f0000  lw          $t7, 0x0($s2)
    ctx->pc = 0x21c84cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21c850: 0x1f41023  subu        $v0, $t7, $s4
    ctx->pc = 0x21c850u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 20)));
label_21c854:
    // 0x21c854: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x21c854u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c858: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x21c858u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21c85c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21c85cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21c860: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x21c860u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21c864: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x21c864u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21c868: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x21c868u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21c86c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x21c86cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21c870: 0x3e00008  jr          $ra
    ctx->pc = 0x21C870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C870u;
        // 0x21c874: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C878u;
label_21c878:
    // 0x21c878: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x21C878u;
    {
        const bool branch_taken_0x21c878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C878u;
        // 0x21c87c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c878) {
            ctx->pc = 0x21C854u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21c854;
        }
    }
    ctx->pc = 0x21C880u;
}
