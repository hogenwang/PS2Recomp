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

// Function: sub_0025B840
// Address: 0x25b840 - 0x25bd48
void sub_0025B840_0x25b840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B840_0x25b840");
#endif

    switch (ctx->pc) {
        case 0x25b884u: goto label_25b884;
        case 0x25b8ccu: goto label_25b8cc;
        case 0x25b984u: goto label_25b984;
        case 0x25b9a0u: goto label_25b9a0;
        case 0x25b9d0u: goto label_25b9d0;
        case 0x25ba40u: goto label_25ba40;
        case 0x25bae0u: goto label_25bae0;
        case 0x25bb0cu: goto label_25bb0c;
        case 0x25bb28u: goto label_25bb28;
        case 0x25bb7cu: goto label_25bb7c;
        case 0x25bbd0u: goto label_25bbd0;
        case 0x25bbfcu: goto label_25bbfc;
        case 0x25bc18u: goto label_25bc18;
        case 0x25bc2cu: goto label_25bc2c;
        case 0x25bc4cu: goto label_25bc4c;
        case 0x25bc74u: goto label_25bc74;
        case 0x25bc8cu: goto label_25bc8c;
        case 0x25bcb8u: goto label_25bcb8;
        case 0x25bd08u: goto label_25bd08;
        case 0x25bd18u: goto label_25bd18;
        default: break;
    }

    ctx->pc = 0x25b840u;

    // 0x25b840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25b840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25b844: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25b844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25b848: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25b848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25b84c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25b84cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b850: 0x86030018  lh          $v1, 0x18($s0)
    ctx->pc = 0x25b850u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x25b854: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x25b854u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x25b858: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x25B858u;
    {
        const bool branch_taken_0x25b858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B858u;
        // 0x25b85c: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b858) {
            ctx->pc = 0x25B89Cu;
            goto label_25b89c;
        }
    }
    ctx->pc = 0x25B860u;
    // 0x25b860: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25b860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25b864: 0x24427030  addiu       $v0, $v0, 0x7030
    ctx->pc = 0x25b864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28720));
    // 0x25b868: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25b868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25b86c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25b86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25b870: 0x800008  jr          $a0
    ctx->pc = 0x25B870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25B878u: goto label_25b878;
            case 0x25B88Cu: goto label_25b88c;
            case 0x25B894u: goto label_25b894;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B870u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25B878u;
label_25b878:
    // 0x25b878: 0xa6000018  sh          $zero, 0x18($s0)
    ctx->pc = 0x25b878u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 0));
    // 0x25b87c: 0xc0966a2  jal         func_259A88
    ctx->pc = 0x25B87Cu;
    SET_GPR_U32(ctx, 31, 0x25B884u);
    ctx->pc = 0x25B880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B87Cu;
    // 0x25b880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259A88u, 0x25B87Cu, 0x25B884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B884u;
label_25b884:
    // 0x25b884: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x25B884u;
    {
        const bool branch_taken_0x25b884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B884u;
        // 0x25b888: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b884) {
            ctx->pc = 0x25B89Cu;
            goto label_25b89c;
        }
    }
    ctx->pc = 0x25B88Cu;
label_25b88c:
    // 0x25b88c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25B88Cu;
    {
        const bool branch_taken_0x25b88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B88Cu;
        // 0x25b890: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b88c) {
            ctx->pc = 0x25B898u;
            goto label_25b898;
        }
    }
    ctx->pc = 0x25B894u;
label_25b894:
    // 0x25b894: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x25b894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_25b898:
    // 0x25b898: 0xa6020018  sh          $v0, 0x18($s0)
    ctx->pc = 0x25b898u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 2));
label_25b89c:
    // 0x25b89c: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x25B89Cu;
    {
        const bool branch_taken_0x25b89c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B89Cu;
        // 0x25b8a0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b89c) {
            ctx->pc = 0x25B8FCu;
            goto label_25b8fc;
        }
    }
    ctx->pc = 0x25B8A4u;
    // 0x25b8a4: 0x86020018  lh          $v0, 0x18($s0)
    ctx->pc = 0x25b8a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x25b8a8: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x25b8a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x25b8ac: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x25B8ACu;
    {
        const bool branch_taken_0x25b8ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B8ACu;
        // 0x25b8b0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b8ac) {
            ctx->pc = 0x25B8FCu;
            goto label_25b8fc;
        }
    }
    ctx->pc = 0x25B8B4u;
    // 0x25b8b4: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x25b8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x25b8b8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25B8B8u;
    {
        const bool branch_taken_0x25b8b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B8B8u;
        // 0x25b8bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b8b8) {
            ctx->pc = 0x25B8C4u;
            goto label_25b8c4;
        }
    }
    ctx->pc = 0x25B8C0u;
    // 0x25b8c0: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x25b8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_25b8c4:
    // 0x25b8c4: 0xc08c13c  jal         func_2304F0
    ctx->pc = 0x25B8C4u;
    SET_GPR_U32(ctx, 31, 0x25B8CCu);
    ctx->pc = 0x2304F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2304F0u, 0x25B8C4u, 0x25B8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B8CCu;
label_25b8cc:
    // 0x25b8cc: 0x86030018  lh          $v1, 0x18($s0)
    ctx->pc = 0x25b8ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x25b8d0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x25b8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x25b8d4: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25B8D4u;
    {
        const bool branch_taken_0x25b8d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x25B8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B8D4u;
        // 0x25b8d8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b8d4) {
            ctx->pc = 0x25B8FCu;
            goto label_25b8fc;
        }
    }
    ctx->pc = 0x25B8DCu;
    // 0x25b8dc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x25b8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x25b8e0: 0x8c441580  lw          $a0, 0x1580($v0)
    ctx->pc = 0x25b8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5504)));
    // 0x25b8e4: 0x18800004  blez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25B8E4u;
    {
        const bool branch_taken_0x25b8e4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x25B8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B8E4u;
        // 0x25b8e8: 0x3c03003a  lui         $v1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b8e4) {
            ctx->pc = 0x25B8F8u;
            goto label_25b8f8;
        }
    }
    ctx->pc = 0x25B8ECu;
    // 0x25b8ec: 0x8c62f990  lw          $v0, -0x670($v1)
    ctx->pc = 0x25b8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965648)));
    // 0x25b8f0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x25b8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x25b8f4: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x25b8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_25b8f8:
    // 0x25b8f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25b8f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25b8fc:
    // 0x25b8fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25b8fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b900: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25b900u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b904: 0x3e00008  jr          $ra
    ctx->pc = 0x25B904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B904u;
        // 0x25b908: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B90Cu;
    // 0x25b90c: 0x0  nop
    ctx->pc = 0x25b90cu;
    // NOP
    // 0x25b910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25b910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25b914: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x25b914u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b918: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25b918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25b91c: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x25b91cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b920: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25b920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25b924: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25B924u;
    {
        const bool branch_taken_0x25b924 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x25B928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B924u;
        // 0x25b928: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b924) {
            ctx->pc = 0x25B934u;
            goto label_25b934;
        }
    }
    ctx->pc = 0x25B92Cu;
    // 0x25b92c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x25B92Cu;
    {
        const bool branch_taken_0x25b92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B92Cu;
        // 0x25b930: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b92c) {
            ctx->pc = 0x25B9D8u;
            goto label_25b9d8;
        }
    }
    ctx->pc = 0x25B934u;
label_25b934:
    // 0x25b934: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x25b934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25b938: 0x2c82001a  sltiu       $v0, $a0, 0x1A
    ctx->pc = 0x25b938u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x25b93c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x25B93Cu;
    {
        const bool branch_taken_0x25b93c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B93Cu;
        // 0x25b940: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b93c) {
            ctx->pc = 0x25B9A8u;
            goto label_25b9a8;
        }
    }
    ctx->pc = 0x25B944u;
    // 0x25b944: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x25b944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x25b948: 0x822818  mult        $a1, $a0, $v0
    ctx->pc = 0x25b948u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x25b94c: 0x24681598  addiu       $t0, $v1, 0x1598
    ctx->pc = 0x25b94cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 5528));
    // 0x25b950: 0xa81021  addu        $v0, $a1, $t0
    ctx->pc = 0x25b950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x25b954: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x25b954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25b958: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x25b958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25b95c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x25B95Cu;
    {
        const bool branch_taken_0x25b95c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B95Cu;
        // 0x25b960: 0x21042  srl         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b95c) {
            ctx->pc = 0x25B9A8u;
            goto label_25b9a8;
        }
    }
    ctx->pc = 0x25B964u;
    // 0x25b964: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25b964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25b968: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x25B968u;
    {
        const bool branch_taken_0x25b968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B968u;
        // 0x25b96c: 0x1051021  addu        $v0, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b968) {
            ctx->pc = 0x25B98Cu;
            goto label_25b98c;
        }
    }
    ctx->pc = 0x25B970u;
    // 0x25b970: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x25b970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b974: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x25b974u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x25b978: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x25b978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b97c: 0xc08c74a  jal         func_231D28
    ctx->pc = 0x25B97Cu;
    SET_GPR_U32(ctx, 31, 0x25B984u);
    ctx->pc = 0x25B980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B97Cu;
    // 0x25b980: 0x160302d  daddu       $a2, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231D28u, 0x25B97Cu, 0x25B984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B984u;
label_25b984:
    // 0x25b984: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x25B984u;
    {
        const bool branch_taken_0x25b984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B984u;
        // 0x25b988: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b984) {
            ctx->pc = 0x25B9DCu;
            goto label_25b9dc;
        }
    }
    ctx->pc = 0x25B98Cu;
label_25b98c:
    // 0x25b98c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x25b98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b990: 0x8c480004  lw          $t0, 0x4($v0)
    ctx->pc = 0x25b990u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25b994: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x25b994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b998: 0xc08c724  jal         func_231C90
    ctx->pc = 0x25B998u;
    SET_GPR_U32(ctx, 31, 0x25B9A0u);
    ctx->pc = 0x25B99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B998u;
    // 0x25b99c: 0x160302d  daddu       $a2, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C90u, 0x25B998u, 0x25B9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B9A0u;
label_25b9a0:
    // 0x25b9a0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x25B9A0u;
    {
        const bool branch_taken_0x25b9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B9A0u;
        // 0x25b9a4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b9a0) {
            ctx->pc = 0x25B9DCu;
            goto label_25b9dc;
        }
    }
    ctx->pc = 0x25B9A8u;
label_25b9a8:
    // 0x25b9a8: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x25b9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x25b9ac: 0x1482000a  bne         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x25B9ACu;
    {
        const bool branch_taken_0x25b9ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x25B9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B9ACu;
        // 0x25b9b0: 0x2402006d  addiu       $v0, $zero, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b9ac) {
            ctx->pc = 0x25B9D8u;
            goto label_25b9d8;
        }
    }
    ctx->pc = 0x25B9B4u;
    // 0x25b9b4: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x25b9b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
    // 0x25b9b8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x25b9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b9bc: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x25b9bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b9c0: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x25b9c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b9c4: 0x24e71308  addiu       $a3, $a3, 0x1308
    ctx->pc = 0x25b9c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4872));
    // 0x25b9c8: 0xc08c832  jal         func_2320C8
    ctx->pc = 0x25B9C8u;
    SET_GPR_U32(ctx, 31, 0x25B9D0u);
    ctx->pc = 0x25B9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B9C8u;
    // 0x25b9cc: 0x24080220  addiu       $t0, $zero, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2320C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2320C8u, 0x25B9C8u, 0x25B9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B9D0u;
label_25b9d0:
    // 0x25b9d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25B9D0u;
    {
        const bool branch_taken_0x25b9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B9D0u;
        // 0x25b9d4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b9d0) {
            ctx->pc = 0x25B9DCu;
            goto label_25b9dc;
        }
    }
    ctx->pc = 0x25B9D8u;
label_25b9d8:
    // 0x25b9d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25b9d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25b9dc:
    // 0x25b9dc: 0x3e00008  jr          $ra
    ctx->pc = 0x25B9DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B9DCu;
        // 0x25b9e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B9DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B9E4u;
    // 0x25b9e4: 0x0  nop
    ctx->pc = 0x25b9e4u;
    // NOP
    // 0x25b9e8: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x25b9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x25b9ec: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x25b9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x25b9f0: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x25b9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x25b9f4: 0xac621590  sw          $v0, 0x1590($v1)
    ctx->pc = 0x25b9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5520), GPR_U32(ctx, 2));
    // 0x25b9f8: 0x3e00008  jr          $ra
    ctx->pc = 0x25B9F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B9F8u;
        // 0x25b9fc: 0xac821594  sw          $v0, 0x1594($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 5524), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B9F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25BA00u;
    // 0x25ba00: 0x3c08003a  lui         $t0, 0x3A
    ctx->pc = 0x25ba00u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)58 << 16));
    // 0x25ba04: 0x24052400  addiu       $a1, $zero, 0x2400
    ctx->pc = 0x25ba04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9216));
    // 0x25ba08: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x25ba08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x25ba0c: 0x3402a280  ori         $v0, $zero, 0xA280
    ctx->pc = 0x25ba0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41600);
    // 0x25ba10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25ba10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25ba14: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x25ba14u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
    // 0x25ba18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25ba18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25ba1c: 0xad0516d8  sw          $a1, 0x16D8($t0)
    ctx->pc = 0x25ba1cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 5848), GPR_U32(ctx, 5));
    // 0x25ba20: 0xacc216dc  sw          $v0, 0x16DC($a2)
    ctx->pc = 0x25ba20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 5852), GPR_U32(ctx, 2));
    // 0x25ba24: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x25ba24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x25ba28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25ba28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25ba2c: 0x24841708  addiu       $a0, $a0, 0x1708
    ctx->pc = 0x25ba2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5896));
    // 0x25ba30: 0xace316d0  sw          $v1, 0x16D0($a3)
    ctx->pc = 0x25ba30u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 5840), GPR_U32(ctx, 3));
    // 0x25ba34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25ba34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ba38: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x25BA38u;
    SET_GPR_U32(ctx, 31, 0x25BA40u);
    ctx->pc = 0x25BA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BA38u;
    // 0x25ba3c: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x25BA38u, 0x25BA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BA40u;
label_25ba40:
    // 0x25ba40: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x25ba40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x25ba44: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x25ba44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x25ba48: 0x8c6516d4  lw          $a1, 0x16D4($v1)
    ctx->pc = 0x25ba48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5844)));
    // 0x25ba4c: 0x248416e0  addiu       $a0, $a0, 0x16E0
    ctx->pc = 0x25ba4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5856));
    // 0x25ba50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25ba50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ba54: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x25ba54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ba58: 0x8092e30  j           func_24B8C0
    ctx->pc = 0x25BA58u;
    ctx->pc = 0x25BA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BA58u;
    // 0x25ba5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B8C0u;
    sub_0024B8C0_0x24b8c0(rdram, ctx, runtime); return;
    ctx->pc = 0x25BA60u;
    // 0x25ba60: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x25ba60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x25ba64: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x25ba64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x25ba68: 0x3c17003a  lui         $s7, 0x3A
    ctx->pc = 0x25ba68u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)58 << 16));
    // 0x25ba6c: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x25ba6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x25ba70: 0xdee21708  ld          $v0, 0x1708($s7)
    ctx->pc = 0x25ba70u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 23), 5896)));
    // 0x25ba74: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x25ba74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x25ba78: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x25ba78u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x25ba7c: 0xffa50108  sd          $a1, 0x108($sp)
    ctx->pc = 0x25ba7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 5));
    // 0x25ba80: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x25ba80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x25ba84: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x25ba84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ba88: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x25ba88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x25ba8c: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x25ba8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x25ba90: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x25ba90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x25ba94: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x25ba94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x25ba98: 0xffa60110  sd          $a2, 0x110($sp)
    ctx->pc = 0x25ba98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 6));
    // 0x25ba9c: 0xffa70118  sd          $a3, 0x118($sp)
    ctx->pc = 0x25ba9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 7));
    // 0x25baa0: 0xffa80120  sd          $t0, 0x120($sp)
    ctx->pc = 0x25baa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 8));
    // 0x25baa4: 0xffa90128  sd          $t1, 0x128($sp)
    ctx->pc = 0x25baa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 9));
    // 0x25baa8: 0xffaa0130  sd          $t2, 0x130($sp)
    ctx->pc = 0x25baa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 10));
    // 0x25baac: 0xffab0138  sd          $t3, 0x138($sp)
    ctx->pc = 0x25baacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 11));
    // 0x25bab0: 0xfee21708  sd          $v0, 0x1708($s7)
    ctx->pc = 0x25bab0u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 5896), GPR_U64(ctx, 2));
    // 0x25bab4: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x25bab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x25bab8: 0x8fb50108  lw          $s5, 0x108($sp)
    ctx->pc = 0x25bab8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x25babc: 0x26a30008  addiu       $v1, $s5, 0x8
    ctx->pc = 0x25babcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x25bac0: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x25bac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x25bac4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x25bac4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x25bac8: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x25BAC8u;
    {
        const bool branch_taken_0x25bac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BAC8u;
        // 0x25bacc: 0x8e960008  lw          $s6, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bac8) {
            ctx->pc = 0x25BB44u;
            goto label_25bb44;
        }
    }
    ctx->pc = 0x25BAD0u;
    // 0x25bad0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x25bad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bad4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x25bad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x25bad8: 0xc08af40  jal         func_22BD00
    ctx->pc = 0x25BAD8u;
    SET_GPR_U32(ctx, 31, 0x25BAE0u);
    ctx->pc = 0x25BADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BAD8u;
    // 0x25badc: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BD00u, 0x25BAD8u, 0x25BAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BAE0u;
label_25bae0:
    // 0x25bae0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25bae0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bae4: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x25BAE4u;
    {
        const bool branch_taken_0x25bae4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BAE4u;
        // 0x25bae8: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bae4) {
            ctx->pc = 0x25BB20u;
            goto label_25bb20;
        }
    }
    ctx->pc = 0x25BAECu;
    // 0x25baec: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x25baecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x25baf0: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x25baf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x25baf4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x25baf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x25baf8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x25BAF8u;
    {
        const bool branch_taken_0x25baf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25baf8) {
            ctx->pc = 0x25BAFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BAF8u;
            // 0x25bafc: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BB18u;
            goto label_25bb18;
        }
    }
    ctx->pc = 0x25BB00u;
    // 0x25bb00: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x25bb00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x25bb04: 0xc08b5e0  jal         func_22D780
    ctx->pc = 0x25BB04u;
    SET_GPR_U32(ctx, 31, 0x25BB0Cu);
    ctx->pc = 0x25BB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BB04u;
    // 0x25bb08: 0x24847050  addiu       $a0, $a0, 0x7050 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D780u, 0x25BB04u, 0x25BB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BB0Cu;
label_25bb0c:
    // 0x25bb0c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x25bb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25bb10: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x25bb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x25bb14: 0x0  nop
    ctx->pc = 0x25bb14u;
    // NOP
label_25bb18:
    // 0x25bb18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25BB18u;
    {
        const bool branch_taken_0x25bb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BB18u;
        // 0x25bb1c: 0x449821  addu        $s3, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bb18) {
            ctx->pc = 0x25BB28u;
            goto label_25bb28;
        }
    }
    ctx->pc = 0x25BB20u;
label_25bb20:
    // 0x25bb20: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x25bb20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bb24: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x25bb24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25bb28:
    // 0x25bb28: 0x56600008  bnel        $s3, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x25BB28u;
    {
        const bool branch_taken_0x25bb28 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x25bb28) {
            ctx->pc = 0x25BB2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BB28u;
            // 0x25bb2c: 0x92620003  lbu         $v0, 0x3($s3) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BB4Cu;
            goto label_25bb4c;
        }
    }
    ctx->pc = 0x25BB30u;
    // 0x25bb30: 0x26e31708  addiu       $v1, $s7, 0x1708
    ctx->pc = 0x25bb30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 5896));
    // 0x25bb34: 0xdc620008  ld          $v0, 0x8($v1)
    ctx->pc = 0x25bb34u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x25bb38: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x25bb38u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x25bb3c: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x25BB3Cu;
    {
        const bool branch_taken_0x25bb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BB3Cu;
        // 0x25bb40: 0xfc620008  sd          $v0, 0x8($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bb3c) {
            ctx->pc = 0x25BD18u;
            goto label_25bd18;
        }
    }
    ctx->pc = 0x25BB44u;
label_25bb44:
    // 0x25bb44: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x25BB44u;
    {
        const bool branch_taken_0x25bb44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BB44u;
        // 0x25bb48: 0x2d59821  addu        $s3, $s6, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bb44) {
            ctx->pc = 0x25BB28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25bb28;
        }
    }
    ctx->pc = 0x25BB4Cu;
label_25bb4c:
    // 0x25bb4c: 0x92630002  lbu         $v1, 0x2($s3)
    ctx->pc = 0x25bb4cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x25bb50: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x25bb50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x25bb54: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25bb54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x25bb58: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25bb58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25bb5c: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x25BB5Cu;
    {
        const bool branch_taken_0x25bb5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bb5c) {
            ctx->pc = 0x25BD08u;
            goto label_25bd08;
        }
    }
    ctx->pc = 0x25BB64u;
    // 0x25bb64: 0x92640005  lbu         $a0, 0x5($s3)
    ctx->pc = 0x25bb64u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
    // 0x25bb68: 0x92620004  lbu         $v0, 0x4($s3)
    ctx->pc = 0x25bb68u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x25bb6c: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x25bb6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
    // 0x25bb70: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x25bb70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x25bb74: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x25BB74u;
    SET_GPR_U32(ctx, 31, 0x25BB7Cu);
    ctx->pc = 0x25BB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BB74u;
    // 0x25bb78: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x25BB74u, 0x25BB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BB7Cu;
label_25bb7c:
    // 0x25bb7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25bb7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bb80: 0x92c30002  lbu         $v1, 0x2($s6)
    ctx->pc = 0x25bb80u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x25bb84: 0x92c20003  lbu         $v0, 0x3($s6)
    ctx->pc = 0x25bb84u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 3)));
    // 0x25bb88: 0x2b02821  addu        $a1, $s5, $s0
    ctx->pc = 0x25bb88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x25bb8c: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x25bb8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x25bb90: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25bb90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x25bb94: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x25bb94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25bb98: 0x1065000d  beq         $v1, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x25BB98u;
    {
        const bool branch_taken_0x25bb98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x25BB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BB98u;
        // 0x25bb9c: 0x65102a  slt         $v0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bb98) {
            ctx->pc = 0x25BBD0u;
            goto label_25bbd0;
        }
    }
    ctx->pc = 0x25BBA0u;
    // 0x25bba0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x25BBA0u;
    {
        const bool branch_taken_0x25bba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25bba0) {
            ctx->pc = 0x25BBA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BBA0u;
            // 0x25bba4: 0x26e31708  addiu       $v1, $s7, 0x1708 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 5896));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BBB8u;
            goto label_25bbb8;
        }
    }
    ctx->pc = 0x25BBA8u;
    // 0x25bba8: 0x2e020008  sltiu       $v0, $s0, 0x8
    ctx->pc = 0x25bba8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x25bbac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25BBACu;
    {
        const bool branch_taken_0x25bbac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BBACu;
        // 0x25bbb0: 0xa32823  subu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bbac) {
            ctx->pc = 0x25BBC8u;
            goto label_25bbc8;
        }
    }
    ctx->pc = 0x25BBB4u;
    // 0x25bbb4: 0x26e31708  addiu       $v1, $s7, 0x1708
    ctx->pc = 0x25bbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 5896));
label_25bbb8:
    // 0x25bbb8: 0xdc620018  ld          $v0, 0x18($v1)
    ctx->pc = 0x25bbb8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x25bbbc: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x25bbbcu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x25bbc0: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x25BBC0u;
    {
        const bool branch_taken_0x25bbc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BBC0u;
        // 0x25bbc4: 0xfc620018  sd          $v0, 0x18($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bbc0) {
            ctx->pc = 0x25BD08u;
            goto label_25bd08;
        }
    }
    ctx->pc = 0x25BBC8u;
label_25bbc8:
    // 0x25bbc8: 0xc08ac88  jal         func_22B220
    ctx->pc = 0x25BBC8u;
    SET_GPR_U32(ctx, 31, 0x25BBD0u);
    ctx->pc = 0x25BBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BBC8u;
    // 0x25bbcc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B220u, 0x25BBC8u, 0x25BBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BBD0u;
label_25bbd0:
    // 0x25bbd0: 0x92620007  lbu         $v0, 0x7($s3)
    ctx->pc = 0x25bbd0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 7)));
    // 0x25bbd4: 0x92630006  lbu         $v1, 0x6($s3)
    ctx->pc = 0x25bbd4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x25bbd8: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x25bbd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x25bbdc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25bbdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x25bbe0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25bbe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25bbe4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x25BBE4u;
    {
        const bool branch_taken_0x25bbe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BBE4u;
        // 0x25bbe8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bbe4) {
            ctx->pc = 0x25BC20u;
            goto label_25bc20;
        }
    }
    ctx->pc = 0x25BBECu;
    // 0x25bbec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25bbecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bbf0: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x25bbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x25bbf4: 0xc092c84  jal         func_24B210
    ctx->pc = 0x25BBF4u;
    SET_GPR_U32(ctx, 31, 0x25BBFCu);
    ctx->pc = 0x25BBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BBF4u;
    // 0x25bbf8: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B210u, 0x25BBF4u, 0x25BBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BBFCu;
label_25bbfc:
    // 0x25bbfc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x25BBFCu;
    {
        const bool branch_taken_0x25bbfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BBFCu;
        // 0x25bc00: 0x26e31708  addiu       $v1, $s7, 0x1708 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 5896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bbfc) {
            ctx->pc = 0x25BC20u;
            goto label_25bc20;
        }
    }
    ctx->pc = 0x25BC04u;
    // 0x25bc04: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25bc04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bc08: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x25bc08u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x25bc0c: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x25bc0cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x25bc10: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x25BC10u;
    SET_GPR_U32(ctx, 31, 0x25BC18u);
    ctx->pc = 0x25BC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BC10u;
    // 0x25bc14: 0xfc620010  sd          $v0, 0x10($v1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x25BC10u, 0x25BC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BC18u;
label_25bc18:
    // 0x25bc18: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x25BC18u;
    {
        const bool branch_taken_0x25bc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BC18u;
        // 0x25bc1c: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bc18) {
            ctx->pc = 0x25BD1Cu;
            goto label_25bd1c;
        }
    }
    ctx->pc = 0x25BC20u;
label_25bc20:
    // 0x25bc20: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25bc20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bc24: 0xc048c96  jal         func_123258
    ctx->pc = 0x25BC24u;
    SET_GPR_U32(ctx, 31, 0x25BC2Cu);
    ctx->pc = 0x25BC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BC24u;
    // 0x25bc28: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123258u, 0x25BC24u, 0x25BC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BC2Cu;
label_25bc2c:
    // 0x25bc2c: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x25bc2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25bc30: 0x24120010  addiu       $s2, $zero, 0x10
    ctx->pc = 0x25bc30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x25bc34: 0xa3b10001  sb          $s1, 0x1($sp)
    ctx->pc = 0x25bc34u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 17));
    // 0x25bc38: 0xa3b20000  sb          $s2, 0x0($sp)
    ctx->pc = 0x25bc38u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x25bc3c: 0x26c4000c  addiu       $a0, $s6, 0xC
    ctx->pc = 0x25bc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
    // 0x25bc40: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x25bc40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x25bc44: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x25BC44u;
    SET_GPR_U32(ctx, 31, 0x25BC4Cu);
    ctx->pc = 0x25BC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BC44u;
    // 0x25bc48: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x25BC44u, 0x25BC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BC4Cu;
label_25bc4c:
    // 0x25bc4c: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x25bc4cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x25bc50: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x25bc50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25bc54: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x25bc54u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x25bc58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25bc58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bc5c: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x25bc5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x25bc60: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x25bc60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x25bc64: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25bc64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x25bc68: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25bc68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25bc6c: 0xc048c96  jal         func_123258
    ctx->pc = 0x25BC6Cu;
    SET_GPR_U32(ctx, 31, 0x25BC74u);
    ctx->pc = 0x25BC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BC6Cu;
    // 0x25bc70: 0xa7a20002  sh          $v0, 0x2($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123258u, 0x25BC6Cu, 0x25BC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BC74u;
label_25bc74:
    // 0x25bc74: 0xa3b10011  sb          $s1, 0x11($sp)
    ctx->pc = 0x25bc74u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 17));
    // 0x25bc78: 0x26c40010  addiu       $a0, $s6, 0x10
    ctx->pc = 0x25bc78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x25bc7c: 0xa3b20010  sb          $s2, 0x10($sp)
    ctx->pc = 0x25bc7cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 18));
    // 0x25bc80: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x25bc80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x25bc84: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x25BC84u;
    SET_GPR_U32(ctx, 31, 0x25BC8Cu);
    ctx->pc = 0x25BC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BC84u;
    // 0x25bc88: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x25BC84u, 0x25BC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BC8Cu;
label_25bc8c:
    // 0x25bc8c: 0x92620003  lbu         $v0, 0x3($s3)
    ctx->pc = 0x25bc8cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x25bc90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25bc90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bc94: 0x92630002  lbu         $v1, 0x2($s3)
    ctx->pc = 0x25bc94u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x25bc98: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x25bc98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bc9c: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x25bc9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x25bca0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25bca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bca4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25bca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x25bca8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x25bca8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bcac: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25bcacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25bcb0: 0xc096fa0  jal         func_25BE80
    ctx->pc = 0x25BCB0u;
    SET_GPR_U32(ctx, 31, 0x25BCB8u);
    ctx->pc = 0x25BCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BCB0u;
    // 0x25bcb4: 0xa7a20012  sh          $v0, 0x12($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 18), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BE80u, 0x25BCB0u, 0x25BCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BCB8u;
label_25bcb8:
    // 0x25bcb8: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x25BCB8u;
    {
        const bool branch_taken_0x25bcb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25bcb8) {
            ctx->pc = 0x25BD08u;
            goto label_25bd08;
        }
    }
    ctx->pc = 0x25BCC0u;
    // 0x25bcc0: 0x96820012  lhu         $v0, 0x12($s4)
    ctx->pc = 0x25bcc0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 18)));
    // 0x25bcc4: 0x30420300  andi        $v0, $v0, 0x300
    ctx->pc = 0x25bcc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)768);
    // 0x25bcc8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25BCC8u;
    {
        const bool branch_taken_0x25bcc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BCC8u;
        // 0x25bccc: 0x26e31708  addiu       $v1, $s7, 0x1708 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 5896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bcc8) {
            ctx->pc = 0x25BCE0u;
            goto label_25bce0;
        }
    }
    ctx->pc = 0x25BCD0u;
    // 0x25bcd0: 0xdc620028  ld          $v0, 0x28($v1)
    ctx->pc = 0x25bcd0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x25bcd4: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x25bcd4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x25bcd8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x25BCD8u;
    {
        const bool branch_taken_0x25bcd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BCD8u;
        // 0x25bcdc: 0xfc620028  sd          $v0, 0x28($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 40), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bcd8) {
            ctx->pc = 0x25BD08u;
            goto label_25bd08;
        }
    }
    ctx->pc = 0x25BCE0u;
label_25bce0:
    // 0x25bce0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25bce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bce4: 0xdc620020  ld          $v0, 0x20($v1)
    ctx->pc = 0x25bce4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x25bce8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x25bce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25bcec: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x25bcecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25bcf0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25bcf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bcf4: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x25bcf4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x25bcf8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25bcf8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bcfc: 0xfc620020  sd          $v0, 0x20($v1)
    ctx->pc = 0x25bcfcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 2));
    // 0x25bd00: 0xc0933c4  jal         func_24CF10
    ctx->pc = 0x25BD00u;
    SET_GPR_U32(ctx, 31, 0x25BD08u);
    ctx->pc = 0x25BD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BD00u;
    // 0x25bd04: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CF10u, 0x25BD00u, 0x25BD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BD08u;
label_25bd08:
    // 0x25bd08: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x25BD08u;
    {
        const bool branch_taken_0x25bd08 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BD08u;
        // 0x25bd0c: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bd08) {
            ctx->pc = 0x25BD1Cu;
            goto label_25bd1c;
        }
    }
    ctx->pc = 0x25BD10u;
    // 0x25bd10: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x25BD10u;
    SET_GPR_U32(ctx, 31, 0x25BD18u);
    ctx->pc = 0x25BD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BD10u;
    // 0x25bd14: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x25BD10u, 0x25BD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BD18u;
label_25bd18:
    // 0x25bd18: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x25bd18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_25bd1c:
    // 0x25bd1c: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x25bd1cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25bd20: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x25bd20u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25bd24: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x25bd24u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25bd28: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x25bd28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25bd2c: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x25bd2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25bd30: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x25bd30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25bd34: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x25bd34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25bd38: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x25bd38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25bd3c: 0x3e00008  jr          $ra
    ctx->pc = 0x25BD3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25BD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BD3Cu;
        // 0x25bd40: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BD3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25BD44u;
    // 0x25bd44: 0x0  nop
    ctx->pc = 0x25bd44u;
    // NOP
}
