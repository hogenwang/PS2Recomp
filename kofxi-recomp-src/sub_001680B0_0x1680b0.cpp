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

// Function: sub_001680B0
// Address: 0x1680b0 - 0x1681a0
void sub_001680B0_0x1680b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001680B0_0x1680b0");
#endif

    ctx->pc = 0x1680b0u;

    // 0x1680b0: 0x90a70021  lbu         $a3, 0x21($a1)
    ctx->pc = 0x1680b0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 33)));
    // 0x1680b4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1680b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1680b8: 0x10e3000e  beq         $a3, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1680B8u;
    {
        const bool branch_taken_0x1680b8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x1680BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1680B8u;
        // 0x1680bc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1680b8) {
            ctx->pc = 0x1680F4u;
            goto label_1680f4;
        }
    }
    ctx->pc = 0x1680C0u;
    // 0x1680c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1680c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1680c4: 0x50e3000c  beql        $a3, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1680C4u;
    {
        const bool branch_taken_0x1680c4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x1680c4) {
            ctx->pc = 0x1680C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1680C4u;
            // 0x1680c8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1680F8u;
            goto label_1680f8;
        }
    }
    ctx->pc = 0x1680CCu;
    // 0x1680cc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1680ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1680d0: 0x50e30009  beql        $a3, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1680D0u;
    {
        const bool branch_taken_0x1680d0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x1680d0) {
            ctx->pc = 0x1680D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1680D0u;
            // 0x1680d4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1680F8u;
            goto label_1680f8;
        }
    }
    ctx->pc = 0x1680D8u;
    // 0x1680d8: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1680D8u;
    {
        const bool branch_taken_0x1680d8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1680d8) {
            ctx->pc = 0x1680E8u;
            goto label_1680e8;
        }
    }
    ctx->pc = 0x1680E0u;
    // 0x1680e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1680E0u;
    {
        const bool branch_taken_0x1680e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1680e0) {
            ctx->pc = 0x1680F8u;
            goto label_1680f8;
        }
    }
    ctx->pc = 0x1680E8u;
label_1680e8:
    // 0x1680e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1680e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1680ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1680ECu;
    {
        const bool branch_taken_0x1680ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1680ec) {
            ctx->pc = 0x1680F8u;
            goto label_1680f8;
        }
    }
    ctx->pc = 0x1680F4u;
label_1680f4:
    // 0x1680f4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1680f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1680f8:
    // 0x1680f8: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x1680f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x1680fc: 0x90a70022  lbu         $a3, 0x22($a1)
    ctx->pc = 0x1680fcu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 34)));
    // 0x168100: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x168100u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x168104: 0x34880  sll         $t1, $v1, 2
    ctx->pc = 0x168104u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x168108: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x168108u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x16810c: 0x1245021  addu        $t2, $t1, $a0
    ctx->pc = 0x16810cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x168110: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x168110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168114: 0xa14703c0  sb          $a3, 0x3C0($t2)
    ctx->pc = 0x168114u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 960), (uint8_t)GPR_U32(ctx, 7));
    // 0x168118: 0x90a90023  lbu         $t1, 0x23($a1)
    ctx->pc = 0x168118u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 35)));
    // 0x16811c: 0xa14903c1  sb          $t1, 0x3C1($t2)
    ctx->pc = 0x16811cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 961), (uint8_t)GPR_U32(ctx, 9));
    // 0x168120: 0xa14603c2  sb          $a2, 0x3C2($t2)
    ctx->pc = 0x168120u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 962), (uint8_t)GPR_U32(ctx, 6));
    // 0x168124: 0x94a60000  lhu         $a2, 0x0($a1)
    ctx->pc = 0x168124u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x168128: 0xa54603ba  sh          $a2, 0x3BA($t2)
    ctx->pc = 0x168128u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 954), (uint16_t)GPR_U32(ctx, 6));
    // 0x16812c: 0x94a60002  lhu         $a2, 0x2($a1)
    ctx->pc = 0x16812cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x168130: 0xa54603bc  sh          $a2, 0x3BC($t2)
    ctx->pc = 0x168130u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 956), (uint16_t)GPR_U32(ctx, 6));
    // 0x168134: 0xa14803c3  sb          $t0, 0x3C3($t2)
    ctx->pc = 0x168134u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 963), (uint8_t)GPR_U32(ctx, 8));
    // 0x168138: 0x94a6001a  lhu         $a2, 0x1A($a1)
    ctx->pc = 0x168138u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 26)));
    // 0x16813c: 0xa54603be  sh          $a2, 0x3BE($t2)
    ctx->pc = 0x16813cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 958), (uint16_t)GPR_U32(ctx, 6));
    // 0x168140: 0x94a60008  lhu         $a2, 0x8($a1)
    ctx->pc = 0x168140u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x168144: 0xa54603c6  sh          $a2, 0x3C6($t2)
    ctx->pc = 0x168144u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 966), (uint16_t)GPR_U32(ctx, 6));
    // 0x168148: 0x94a60004  lhu         $a2, 0x4($a1)
    ctx->pc = 0x168148u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x16814c: 0xa14603c8  sb          $a2, 0x3C8($t2)
    ctx->pc = 0x16814cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 968), (uint8_t)GPR_U32(ctx, 6));
    // 0x168150: 0x90a60020  lbu         $a2, 0x20($a1)
    ctx->pc = 0x168150u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x168154: 0xc31804  sllv        $v1, $v1, $a2
    ctx->pc = 0x168154u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
    // 0x168158: 0xa14303c4  sb          $v1, 0x3C4($t2)
    ctx->pc = 0x168158u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 964), (uint8_t)GPR_U32(ctx, 3));
    // 0x16815c: 0x94a3001c  lhu         $v1, 0x1C($a1)
    ctx->pc = 0x16815cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x168160: 0xad4303b0  sw          $v1, 0x3B0($t2)
    ctx->pc = 0x168160u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 944), GPR_U32(ctx, 3));
    // 0x168164: 0xad4003b4  sw          $zero, 0x3B4($t2)
    ctx->pc = 0x168164u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 948), GPR_U32(ctx, 0));
    // 0x168168: 0x948300ec  lhu         $v1, 0xEC($a0)
    ctx->pc = 0x168168u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 236)));
    // 0x16816c: 0xa54303b8  sh          $v1, 0x3B8($t2)
    ctx->pc = 0x16816cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 952), (uint16_t)GPR_U32(ctx, 3));
    // 0x168170: 0x94a3000e  lhu         $v1, 0xE($a1)
    ctx->pc = 0x168170u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x168174: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x168174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x168178: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x168178u;
    {
        const bool branch_taken_0x168178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168178u;
        // 0x16817c: 0x254703b4  addiu       $a3, $t2, 0x3B4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 948));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168178) {
            ctx->pc = 0x16818Cu;
            goto label_16818c;
        }
    }
    ctx->pc = 0x168180u;
    // 0x168180: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x168180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x168184: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x168184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x168188: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x168188u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_16818c:
    // 0x16818c: 0x3e00008  jr          $ra
    ctx->pc = 0x16818Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16818Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168194u;
    // 0x168194: 0x0  nop
    ctx->pc = 0x168194u;
    // NOP
    // 0x168198: 0x0  nop
    ctx->pc = 0x168198u;
    // NOP
    // 0x16819c: 0x0  nop
    ctx->pc = 0x16819cu;
    // NOP
}
