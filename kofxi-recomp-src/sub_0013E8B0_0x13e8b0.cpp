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

// Function: sub_0013E8B0
// Address: 0x13e8b0 - 0x13e9a0
void sub_0013E8B0_0x13e8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E8B0_0x13e8b0");
#endif

    ctx->pc = 0x13e8b0u;

    // 0x13e8b0: 0x84890000  lh          $t1, 0x0($a0)
    ctx->pc = 0x13e8b0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13e8b4: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x13e8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x13e8b8: 0x8444f11c  lh          $a0, -0xEE4($v0)
    ctx->pc = 0x13e8b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963484)));
    // 0x13e8bc: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x13e8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x13e8c0: 0x69082a  slt         $at, $v1, $t1
    ctx->pc = 0x13e8c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x13e8c4: 0x5420000b  bnel        $at, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x13E8C4u;
    {
        const bool branch_taken_0x13e8c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e8c4) {
            ctx->pc = 0x13E8C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E8C4u;
            // 0x13e8c8: 0x871821  addu        $v1, $a0, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13E8F4u;
            goto label_13e8f4;
        }
    }
    ctx->pc = 0x13E8CCu;
    // 0x13e8cc: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x13e8ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13e8d0: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x13e8d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13e8d4: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x13E8D4u;
    {
        const bool branch_taken_0x13e8d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e8d4) {
            ctx->pc = 0x13E8F0u;
            goto label_13e8f0;
        }
    }
    ctx->pc = 0x13E8DCu;
    // 0x13e8dc: 0x49082a  slt         $at, $v0, $t1
    ctx->pc = 0x13e8dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x13e8e0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E8E0u;
    {
        const bool branch_taken_0x13e8e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e8e0) {
            ctx->pc = 0x13E8F0u;
            goto label_13e8f0;
        }
    }
    ctx->pc = 0x13E8E8u;
    // 0x13e8e8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x13E8E8u;
    {
        const bool branch_taken_0x13e8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E8E8u;
        // 0x13e8ec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e8e8) {
            ctx->pc = 0x13E998u;
            goto label_13e998;
        }
    }
    ctx->pc = 0x13E8F0u;
label_13e8f0:
    // 0x13e8f0: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x13e8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_13e8f4:
    // 0x13e8f4: 0x69082a  slt         $at, $v1, $t1
    ctx->pc = 0x13e8f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x13e8f8: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x13E8F8u;
    {
        const bool branch_taken_0x13e8f8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e8f8) {
            ctx->pc = 0x13E924u;
            goto label_13e924;
        }
    }
    ctx->pc = 0x13E900u;
    // 0x13e900: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x13e900u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13e904: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x13e904u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13e908: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x13E908u;
    {
        const bool branch_taken_0x13e908 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e908) {
            ctx->pc = 0x13E924u;
            goto label_13e924;
        }
    }
    ctx->pc = 0x13E910u;
    // 0x13e910: 0x122082a  slt         $at, $t1, $v0
    ctx->pc = 0x13e910u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13e914: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E914u;
    {
        const bool branch_taken_0x13e914 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e914) {
            ctx->pc = 0x13E924u;
            goto label_13e924;
        }
    }
    ctx->pc = 0x13E91Cu;
    // 0x13e91c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x13E91Cu;
    {
        const bool branch_taken_0x13e91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E91Cu;
        // 0x13e920: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e91c) {
            ctx->pc = 0x13E998u;
            goto label_13e998;
        }
    }
    ctx->pc = 0x13E924u;
label_13e924:
    // 0x13e924: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x13e924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x13e928: 0x8448f11e  lh          $t0, -0xEE2($v0)
    ctx->pc = 0x13e928u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963486)));
    // 0x13e92c: 0x1062023  subu        $a0, $t0, $a2
    ctx->pc = 0x13e92cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x13e930: 0x124102a  slt         $v0, $t1, $a0
    ctx->pc = 0x13e930u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x13e934: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x13E934u;
    {
        const bool branch_taken_0x13e934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e934) {
            ctx->pc = 0x13E938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E934u;
            // 0x13e938: 0x1072023  subu        $a0, $t0, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13E964u;
            goto label_13e964;
        }
    }
    ctx->pc = 0x13E93Cu;
    // 0x13e93c: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x13e93cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13e940: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x13e940u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x13e944: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13E944u;
    {
        const bool branch_taken_0x13e944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e944) {
            ctx->pc = 0x13E960u;
            goto label_13e960;
        }
    }
    ctx->pc = 0x13E94Cu;
    // 0x13e94c: 0x123082a  slt         $at, $t1, $v1
    ctx->pc = 0x13e94cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13e950: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E950u;
    {
        const bool branch_taken_0x13e950 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e950) {
            ctx->pc = 0x13E960u;
            goto label_13e960;
        }
    }
    ctx->pc = 0x13E958u;
    // 0x13e958: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x13E958u;
    {
        const bool branch_taken_0x13e958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E958u;
        // 0x13e95c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e958) {
            ctx->pc = 0x13E998u;
            goto label_13e998;
        }
    }
    ctx->pc = 0x13E960u;
label_13e960:
    // 0x13e960: 0x1072023  subu        $a0, $t0, $a3
    ctx->pc = 0x13e960u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_13e964:
    // 0x13e964: 0x124102a  slt         $v0, $t1, $a0
    ctx->pc = 0x13e964u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x13e968: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x13E968u;
    {
        const bool branch_taken_0x13e968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e968) {
            ctx->pc = 0x13E96Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E968u;
            // 0x13e96c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13E998u;
            goto label_13e998;
        }
    }
    ctx->pc = 0x13E970u;
    // 0x13e970: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x13e970u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13e974: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x13e974u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x13e978: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13E978u;
    {
        const bool branch_taken_0x13e978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e978) {
            ctx->pc = 0x13E994u;
            goto label_13e994;
        }
    }
    ctx->pc = 0x13E980u;
    // 0x13e980: 0x69082a  slt         $at, $v1, $t1
    ctx->pc = 0x13e980u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x13e984: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E984u;
    {
        const bool branch_taken_0x13e984 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e984) {
            ctx->pc = 0x13E994u;
            goto label_13e994;
        }
    }
    ctx->pc = 0x13E98Cu;
    // 0x13e98c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13E98Cu;
    {
        const bool branch_taken_0x13e98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E98Cu;
        // 0x13e990: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e98c) {
            ctx->pc = 0x13E998u;
            goto label_13e998;
        }
    }
    ctx->pc = 0x13E994u;
label_13e994:
    // 0x13e994: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13e994u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13e998:
    // 0x13e998: 0x3e00008  jr          $ra
    ctx->pc = 0x13E998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E9A0u;
}
