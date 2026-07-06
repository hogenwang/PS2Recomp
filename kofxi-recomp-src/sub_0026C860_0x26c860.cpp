#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026C860
// Address: 0x26c860 - 0x26ca90
void sub_0026C860_0x26c860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C860_0x26c860");
#endif

    switch (ctx->pc) {
        case 0x26c8c8u: goto label_26c8c8;
        case 0x26c904u: goto label_26c904;
        case 0x26c960u: goto label_26c960;
        case 0x26c968u: goto label_26c968;
        case 0x26c970u: goto label_26c970;
        case 0x26c978u: goto label_26c978;
        case 0x26c9b0u: goto label_26c9b0;
        case 0x26c9b8u: goto label_26c9b8;
        case 0x26ca00u: goto label_26ca00;
        case 0x26ca38u: goto label_26ca38;
        case 0x26ca40u: goto label_26ca40;
        default: break;
    }

    ctx->pc = 0x26c860u;

    // 0x26c860: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x26c860u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x26c864: 0x24a5ff10  addiu       $a1, $a1, -0xF0
    ctx->pc = 0x26c864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967056));
    // 0x26c868: 0x63603  sra         $a2, $a2, 24
    ctx->pc = 0x26c868u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 24));
    // 0x26c86c: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x26c86cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c870: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x26c870u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c874: 0x248900f0  addiu       $t1, $a0, 0xF0
    ctx->pc = 0x26c874u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
    // 0x26c878: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26c878u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c87c: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x26c87cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26c880: 0x240d0034  addiu       $t5, $zero, 0x34
    ctx->pc = 0x26c880u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x26c884: 0x24190002  addiu       $t9, $zero, 0x2
    ctx->pc = 0x26c884u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26c888: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x26c888u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c88c: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x26c88cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26c890: 0x18a00033  blez        $a1, . + 4 + (0x33 << 2)
    ctx->pc = 0x26C890u;
    {
        const bool branch_taken_0x26c890 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x26C894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C890u;
            // 0x26c894: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c890) {
            ctx->pc = 0x26C960u;
            goto label_26c960;
        }
    }
    ctx->pc = 0x26C898u;
    // 0x26c898: 0x808200f0  lb          $v0, 0xF0($a0)
    ctx->pc = 0x26c898u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x26c89c: 0x10460034  beq         $v0, $a2, . + 4 + (0x34 << 2)
    ctx->pc = 0x26C89Cu;
    {
        const bool branch_taken_0x26c89c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x26C8A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C89Cu;
            // 0x26c8a0: 0x120402d  daddu       $t0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c89c) {
            ctx->pc = 0x26C970u;
            goto label_26c970;
        }
    }
    ctx->pc = 0x26C8A4u;
    // 0x26c8a4: 0x104e002e  beq         $v0, $t6, . + 4 + (0x2E << 2)
    ctx->pc = 0x26C8A4u;
    {
        const bool branch_taken_0x26c8a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 14));
        if (branch_taken_0x26c8a4) {
            ctx->pc = 0x26C960u;
            goto label_26c960;
        }
    }
    ctx->pc = 0x26C8ACu;
    // 0x26c8ac: 0x144d0015  bne         $v0, $t5, . + 4 + (0x15 << 2)
    ctx->pc = 0x26C8ACu;
    {
        const bool branch_taken_0x26c8ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 13));
        if (branch_taken_0x26c8ac) {
            ctx->pc = 0x26C904u;
            goto label_26c904;
        }
    }
    ctx->pc = 0x26C8B4u;
    // 0x26c8b4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x26c8b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26c8b8: 0xe5102a  slt         $v0, $a3, $a1
    ctx->pc = 0x26c8b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x26c8bc: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x26C8BCu;
    {
        const bool branch_taken_0x26c8bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C8C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C8BCu;
            // 0x26c8c0: 0x1271021  addu        $v0, $t1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c8bc) {
            ctx->pc = 0x26C960u;
            goto label_26c960;
        }
    }
    ctx->pc = 0x26C8C4u;
    // 0x26c8c4: 0x0  nop
    ctx->pc = 0x26c8c4u;
    // NOP
label_26c8c8:
    // 0x26c8c8: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x26c8c8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26c8cc: 0x1079000b  beq         $v1, $t9, . + 4 + (0xB << 2)
    ctx->pc = 0x26C8CCu;
    {
        const bool branch_taken_0x26c8cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 25));
        ctx->pc = 0x26C8D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C8CCu;
            // 0x26c8d0: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c8cc) {
            ctx->pc = 0x26C8FCu;
            goto label_26c8fc;
        }
    }
    ctx->pc = 0x26C8D4u;
    // 0x26c8d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26C8D4u;
    {
        const bool branch_taken_0x26c8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c8d4) {
            ctx->pc = 0x26C8ECu;
            goto label_26c8ec;
        }
    }
    ctx->pc = 0x26C8DCu;
    // 0x26c8dc: 0x50780010  beql        $v1, $t8, . + 4 + (0x10 << 2)
    ctx->pc = 0x26C8DCu;
    {
        const bool branch_taken_0x26c8dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 24));
        if (branch_taken_0x26c8dc) {
            ctx->pc = 0x26C8E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26C8DCu;
            // 0x26c8e0: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26C920u;
            goto label_26c920;
        }
    }
    ctx->pc = 0x26C8E4u;
    // 0x26c8e4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x26C8E4u;
    {
        const bool branch_taken_0x26c8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C8E4u;
            // 0x26c8e8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c8e4) {
            ctx->pc = 0x26C924u;
            goto label_26c924;
        }
    }
    ctx->pc = 0x26C8ECu;
label_26c8ec:
    // 0x26c8ec: 0x506f0003  beql        $v1, $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x26C8ECu;
    {
        const bool branch_taken_0x26c8ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 15));
        if (branch_taken_0x26c8ec) {
            ctx->pc = 0x26C8F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26C8ECu;
            // 0x26c8f0: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26C8FCu;
            goto label_26c8fc;
        }
    }
    ctx->pc = 0x26C8F4u;
    // 0x26c8f4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x26C8F4u;
    {
        const bool branch_taken_0x26c8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C8F4u;
            // 0x26c8f8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c8f4) {
            ctx->pc = 0x26C924u;
            goto label_26c924;
        }
    }
    ctx->pc = 0x26C8FCu;
label_26c8fc:
    // 0x26c8fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x26C8FCu;
    {
        const bool branch_taken_0x26c8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C8FCu;
            // 0x26c900: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c8fc) {
            ctx->pc = 0x26C920u;
            goto label_26c920;
        }
    }
    ctx->pc = 0x26C904u;
label_26c904:
    // 0x26c904: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26C904u;
    {
        const bool branch_taken_0x26c904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C904u;
            // 0x26c908: 0x24e30001  addiu       $v1, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c904) {
            ctx->pc = 0x26C920u;
            goto label_26c920;
        }
    }
    ctx->pc = 0x26C90Cu;
    // 0x26c90c: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x26c90cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x26c910: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x26C910u;
    {
        const bool branch_taken_0x26c910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c910) {
            ctx->pc = 0x26C960u;
            goto label_26c960;
        }
    }
    ctx->pc = 0x26C918u;
    // 0x26c918: 0x91020001  lbu         $v0, 0x1($t0)
    ctx->pc = 0x26c918u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x26c91c: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x26c91cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_26c920:
    // 0x26c920: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x26c920u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_26c924:
    // 0x26c924: 0xe5102a  slt         $v0, $a3, $a1
    ctx->pc = 0x26c924u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x26c928: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x26C928u;
    {
        const bool branch_taken_0x26c928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c928) {
            ctx->pc = 0x26C960u;
            goto label_26c960;
        }
    }
    ctx->pc = 0x26C930u;
    // 0x26c930: 0x1274021  addu        $t0, $t1, $a3
    ctx->pc = 0x26c930u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x26c934: 0x81020000  lb          $v0, 0x0($t0)
    ctx->pc = 0x26c934u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x26c938: 0x50460009  beql        $v0, $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x26C938u;
    {
        const bool branch_taken_0x26c938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x26c938) {
            ctx->pc = 0x26C93Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26C938u;
            // 0x26c93c: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26C960u;
            goto label_26c960;
        }
    }
    ctx->pc = 0x26C940u;
    // 0x26c940: 0x104e0007  beq         $v0, $t6, . + 4 + (0x7 << 2)
    ctx->pc = 0x26C940u;
    {
        const bool branch_taken_0x26c940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 14));
        if (branch_taken_0x26c940) {
            ctx->pc = 0x26C960u;
            goto label_26c960;
        }
    }
    ctx->pc = 0x26C948u;
    // 0x26c948: 0x144dffee  bne         $v0, $t5, . + 4 + (-0x12 << 2)
    ctx->pc = 0x26C948u;
    {
        const bool branch_taken_0x26c948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 13));
        if (branch_taken_0x26c948) {
            ctx->pc = 0x26C904u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26c904;
        }
    }
    ctx->pc = 0x26C950u;
    // 0x26c950: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x26c950u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x26c954: 0xe5102a  slt         $v0, $a3, $a1
    ctx->pc = 0x26c954u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x26c958: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x26C958u;
    {
        const bool branch_taken_0x26c958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C95Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C958u;
            // 0x26c95c: 0x1271021  addu        $v0, $t1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c958) {
            ctx->pc = 0x26C8C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26c8c8;
        }
    }
    ctx->pc = 0x26C960u;
label_26c960:
    // 0x26c960: 0x11400007  beqz        $t2, . + 4 + (0x7 << 2)
    ctx->pc = 0x26C960u;
    {
        const bool branch_taken_0x26c960 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C960u;
            // 0x26c964: 0x140102d  daddu       $v0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c960) {
            ctx->pc = 0x26C980u;
            goto label_26c980;
        }
    }
    ctx->pc = 0x26C968u;
label_26c968:
    // 0x26c968: 0x3e00008  jr          $ra
    ctx->pc = 0x26C968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26C970u;
label_26c970:
    // 0x26c970: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x26C970u;
    {
        const bool branch_taken_0x26c970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C970u;
            // 0x26c974: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c970) {
            ctx->pc = 0x26C960u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26c960;
        }
    }
    ctx->pc = 0x26C978u;
label_26c978:
    // 0x26c978: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x26C978u;
    {
        const bool branch_taken_0x26c978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C97Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C978u;
            // 0x26c97c: 0x60502d  daddu       $t2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c978) {
            ctx->pc = 0x26C9F0u;
            goto label_26c9f0;
        }
    }
    ctx->pc = 0x26C980u;
label_26c980:
    // 0x26c980: 0x11600021  beqz        $t3, . + 4 + (0x21 << 2)
    ctx->pc = 0x26C980u;
    {
        const bool branch_taken_0x26c980 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C980u;
            // 0x26c984: 0x2489006c  addiu       $t1, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c980) {
            ctx->pc = 0x26CA08u;
            goto label_26ca08;
        }
    }
    ctx->pc = 0x26C988u;
    // 0x26c988: 0x8082006c  lb          $v0, 0x6C($a0)
    ctx->pc = 0x26c988u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x26c98c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26c98cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c990: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x26c990u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26c994: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26C994u;
    {
        const bool branch_taken_0x26c994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C994u;
            // 0x26c998: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c994) {
            ctx->pc = 0x26C9B4u;
            goto label_26c9b4;
        }
    }
    ctx->pc = 0x26C99Cu;
    // 0x26c99c: 0x10480014  beq         $v0, $t0, . + 4 + (0x14 << 2)
    ctx->pc = 0x26C99Cu;
    {
        const bool branch_taken_0x26c99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x26c99c) {
            ctx->pc = 0x26C9F0u;
            goto label_26c9f0;
        }
    }
    ctx->pc = 0x26C9A4u;
    // 0x26c9a4: 0x1046fff4  beq         $v0, $a2, . + 4 + (-0xC << 2)
    ctx->pc = 0x26C9A4u;
    {
        const bool branch_taken_0x26c9a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x26C9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C9A4u;
            // 0x26c9a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c9a4) {
            ctx->pc = 0x26C978u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26c978;
        }
    }
    ctx->pc = 0x26C9ACu;
    // 0x26c9ac: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x26c9acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_26c9b0:
    // 0x26c9b0: 0xa23821  addu        $a3, $a1, $v0
    ctx->pc = 0x26c9b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_26c9b4:
    // 0x26c9b4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x26c9b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_26c9b8:
    // 0x26c9b8: 0x28e20080  slti        $v0, $a3, 0x80
    ctx->pc = 0x26c9b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x26c9bc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x26C9BCu;
    {
        const bool branch_taken_0x26c9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c9bc) {
            ctx->pc = 0x26C9F0u;
            goto label_26c9f0;
        }
    }
    ctx->pc = 0x26C9C4u;
    // 0x26c9c4: 0x1271821  addu        $v1, $t1, $a3
    ctx->pc = 0x26c9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x26c9c8: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x26c9c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26c9cc: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x26C9CCu;
    {
        const bool branch_taken_0x26c9cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c9cc) {
            ctx->pc = 0x26C9D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26C9CCu;
            // 0x26c9d0: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26C9B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26c9b8;
        }
    }
    ctx->pc = 0x26C9D4u;
    // 0x26c9d4: 0x10480006  beq         $v0, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26C9D4u;
    {
        const bool branch_taken_0x26c9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x26c9d4) {
            ctx->pc = 0x26C9F0u;
            goto label_26c9f0;
        }
    }
    ctx->pc = 0x26C9DCu;
    // 0x26c9dc: 0x1046ffe6  beq         $v0, $a2, . + 4 + (-0x1A << 2)
    ctx->pc = 0x26C9DCu;
    {
        const bool branch_taken_0x26c9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x26C9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C9DCu;
            // 0x26c9e0: 0x24e50001  addiu       $a1, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c9dc) {
            ctx->pc = 0x26C978u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26c978;
        }
    }
    ctx->pc = 0x26C9E4u;
    // 0x26c9e4: 0x28a20080  slti        $v0, $a1, 0x80
    ctx->pc = 0x26c9e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x26c9e8: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x26C9E8u;
    {
        const bool branch_taken_0x26c9e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c9e8) {
            ctx->pc = 0x26C9ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26C9E8u;
            // 0x26c9ec: 0x90620001  lbu         $v0, 0x1($v1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26C9B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26c9b0;
        }
    }
    ctx->pc = 0x26C9F0u;
label_26c9f0:
    // 0x26c9f0: 0x11400005  beqz        $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x26C9F0u;
    {
        const bool branch_taken_0x26c9f0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C9F0u;
            // 0x26c9f4: 0x140102d  daddu       $v0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c9f0) {
            ctx->pc = 0x26CA08u;
            goto label_26ca08;
        }
    }
    ctx->pc = 0x26C9F8u;
    // 0x26c9f8: 0x3e00008  jr          $ra
    ctx->pc = 0x26C9F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26CA00u;
label_26ca00:
    // 0x26ca00: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x26CA00u;
    {
        const bool branch_taken_0x26ca00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CA00u;
            // 0x26ca04: 0x60502d  daddu       $t2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ca00) {
            ctx->pc = 0x26CA78u;
            goto label_26ca78;
        }
    }
    ctx->pc = 0x26CA08u;
label_26ca08:
    // 0x26ca08: 0x1180001d  beqz        $t4, . + 4 + (0x1D << 2)
    ctx->pc = 0x26CA08u;
    {
        const bool branch_taken_0x26ca08 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CA08u;
            // 0x26ca0c: 0x2489002c  addiu       $t1, $a0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ca08) {
            ctx->pc = 0x26CA80u;
            goto label_26ca80;
        }
    }
    ctx->pc = 0x26CA10u;
    // 0x26ca10: 0x8082002c  lb          $v0, 0x2C($a0)
    ctx->pc = 0x26ca10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x26ca14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26ca14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ca18: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x26ca18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26ca1c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26CA1Cu;
    {
        const bool branch_taken_0x26ca1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CA1Cu;
            // 0x26ca20: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ca1c) {
            ctx->pc = 0x26CA3Cu;
            goto label_26ca3c;
        }
    }
    ctx->pc = 0x26CA24u;
    // 0x26ca24: 0x10450014  beq         $v0, $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x26CA24u;
    {
        const bool branch_taken_0x26ca24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x26ca24) {
            ctx->pc = 0x26CA78u;
            goto label_26ca78;
        }
    }
    ctx->pc = 0x26CA2Cu;
    // 0x26ca2c: 0x1046fff4  beq         $v0, $a2, . + 4 + (-0xC << 2)
    ctx->pc = 0x26CA2Cu;
    {
        const bool branch_taken_0x26ca2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x26CA30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CA2Cu;
            // 0x26ca30: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ca2c) {
            ctx->pc = 0x26CA00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26ca00;
        }
    }
    ctx->pc = 0x26CA34u;
    // 0x26ca34: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x26ca34u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_26ca38:
    // 0x26ca38: 0x823821  addu        $a3, $a0, $v0
    ctx->pc = 0x26ca38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_26ca3c:
    // 0x26ca3c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x26ca3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_26ca40:
    // 0x26ca40: 0x28e20040  slti        $v0, $a3, 0x40
    ctx->pc = 0x26ca40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x26ca44: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x26CA44u;
    {
        const bool branch_taken_0x26ca44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ca44) {
            ctx->pc = 0x26CA78u;
            goto label_26ca78;
        }
    }
    ctx->pc = 0x26CA4Cu;
    // 0x26ca4c: 0x1271821  addu        $v1, $t1, $a3
    ctx->pc = 0x26ca4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x26ca50: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x26ca50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26ca54: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x26CA54u;
    {
        const bool branch_taken_0x26ca54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ca54) {
            ctx->pc = 0x26CA58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26CA54u;
            // 0x26ca58: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26CA40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26ca40;
        }
    }
    ctx->pc = 0x26CA5Cu;
    // 0x26ca5c: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x26CA5Cu;
    {
        const bool branch_taken_0x26ca5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x26ca5c) {
            ctx->pc = 0x26CA78u;
            goto label_26ca78;
        }
    }
    ctx->pc = 0x26CA64u;
    // 0x26ca64: 0x1046ffe6  beq         $v0, $a2, . + 4 + (-0x1A << 2)
    ctx->pc = 0x26CA64u;
    {
        const bool branch_taken_0x26ca64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x26CA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CA64u;
            // 0x26ca68: 0x24e40001  addiu       $a0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ca64) {
            ctx->pc = 0x26CA00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26ca00;
        }
    }
    ctx->pc = 0x26CA6Cu;
    // 0x26ca6c: 0x28820040  slti        $v0, $a0, 0x40
    ctx->pc = 0x26ca6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x26ca70: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x26CA70u;
    {
        const bool branch_taken_0x26ca70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ca70) {
            ctx->pc = 0x26CA74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26CA70u;
            // 0x26ca74: 0x90620001  lbu         $v0, 0x1($v1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26CA38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26ca38;
        }
    }
    ctx->pc = 0x26CA78u;
label_26ca78:
    // 0x26ca78: 0x1540ffbb  bnez        $t2, . + 4 + (-0x45 << 2)
    ctx->pc = 0x26CA78u;
    {
        const bool branch_taken_0x26ca78 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CA7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CA78u;
            // 0x26ca7c: 0x140102d  daddu       $v0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ca78) {
            ctx->pc = 0x26C968u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26c968;
        }
    }
    ctx->pc = 0x26CA80u;
label_26ca80:
    // 0x26ca80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26ca80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ca84: 0x3e00008  jr          $ra
    ctx->pc = 0x26CA84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26CA8Cu;
    // 0x26ca8c: 0x0  nop
    ctx->pc = 0x26ca8cu;
    // NOP
    ctx->pc = 0x26ca90u;
}
