#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00171BE0
// Address: 0x171be0 - 0x171cb0
void sub_00171BE0_0x171be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171BE0_0x171be0");
#endif

    ctx->pc = 0x171be0u;

    // 0x171be0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x171be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x171be4: 0x90439780  lbu         $v1, -0x6880($v0)
    ctx->pc = 0x171be4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x171be8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x171be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x171bec: 0x5462000f  bnel        $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x171BECu;
    {
        const bool branch_taken_0x171bec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x171bec) {
            ctx->pc = 0x171BF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x171BECu;
            // 0x171bf0: 0x41940  sll         $v1, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x171C2Cu;
            goto label_171c2c;
        }
    }
    ctx->pc = 0x171BF4u;
    // 0x171bf4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x171bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x171bf8: 0x90469748  lbu         $a2, -0x68B8($v0)
    ctx->pc = 0x171bf8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940488)));
    // 0x171bfc: 0x1086000a  beq         $a0, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x171BFCu;
    {
        const bool branch_taken_0x171bfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        if (branch_taken_0x171bfc) {
            ctx->pc = 0x171C28u;
            goto label_171c28;
        }
    }
    ctx->pc = 0x171C04u;
    // 0x171c04: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x171c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x171c08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x171c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x171c0c: 0x90425bf8  lbu         $v0, 0x5BF8($v0)
    ctx->pc = 0x171c0cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 23544)));
    // 0x171c10: 0xc31804  sllv        $v1, $v1, $a2
    ctx->pc = 0x171c10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
    // 0x171c14: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x171c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x171c18: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x171C18u;
    {
        const bool branch_taken_0x171c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x171c18) {
            ctx->pc = 0x171C1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x171C18u;
            // 0x171c1c: 0x38840001  xori        $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x171C28u;
            goto label_171c28;
        }
    }
    ctx->pc = 0x171C20u;
    // 0x171c20: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x171C20u;
    {
        const bool branch_taken_0x171c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171C20u;
            // 0x171c24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171c20) {
            ctx->pc = 0x171CA8u;
            goto label_171ca8;
        }
    }
    ctx->pc = 0x171C28u;
label_171c28:
    // 0x171c28: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x171c28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_171c2c:
    // 0x171c2c: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x171c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x171c30: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x171c30u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x171c34: 0x244248c0  addiu       $v0, $v0, 0x48C0
    ctx->pc = 0x171c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18624));
    // 0x171c38: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x171c38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x171c3c: 0x2ca10009  sltiu       $at, $a1, 0x9
    ctx->pc = 0x171c3cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x171c40: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x171c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x171c44: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x171c44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x171c48: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x171C48u;
    {
        const bool branch_taken_0x171c48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x171C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171C48u;
            // 0x171c4c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171c48) {
            ctx->pc = 0x171CA4u;
            goto label_171ca4;
        }
    }
    ctx->pc = 0x171C50u;
    // 0x171c50: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x171c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x171c54: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x171c54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x171c58: 0x2463d520  addiu       $v1, $v1, -0x2AE0
    ctx->pc = 0x171c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956320));
    // 0x171c5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x171c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x171c60: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x171c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x171c64: 0x400008  jr          $v0
    ctx->pc = 0x171C64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171C6Cu: goto label_171c6c;
            case 0x171C74u: goto label_171c74;
            case 0x171C7Cu: goto label_171c7c;
            case 0x171C84u: goto label_171c84;
            case 0x171C8Cu: goto label_171c8c;
            case 0x171C94u: goto label_171c94;
            case 0x171C9Cu: goto label_171c9c;
            case 0x171CA4u: goto label_171ca4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x171C6Cu;
label_171c6c:
    // 0x171c6c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x171C6Cu;
    {
        const bool branch_taken_0x171c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171C6Cu;
            // 0x171c70: 0x94820002  lhu         $v0, 0x2($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171c6c) {
            ctx->pc = 0x171CA8u;
            goto label_171ca8;
        }
    }
    ctx->pc = 0x171C74u;
label_171c74:
    // 0x171c74: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x171C74u;
    {
        const bool branch_taken_0x171c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171C74u;
            // 0x171c78: 0x94820004  lhu         $v0, 0x4($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171c74) {
            ctx->pc = 0x171CA8u;
            goto label_171ca8;
        }
    }
    ctx->pc = 0x171C7Cu;
label_171c7c:
    // 0x171c7c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x171C7Cu;
    {
        const bool branch_taken_0x171c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171C7Cu;
            // 0x171c80: 0x94820006  lhu         $v0, 0x6($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171c7c) {
            ctx->pc = 0x171CA8u;
            goto label_171ca8;
        }
    }
    ctx->pc = 0x171C84u;
label_171c84:
    // 0x171c84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x171C84u;
    {
        const bool branch_taken_0x171c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171C84u;
            // 0x171c88: 0x94820008  lhu         $v0, 0x8($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171c84) {
            ctx->pc = 0x171CA8u;
            goto label_171ca8;
        }
    }
    ctx->pc = 0x171C8Cu;
label_171c8c:
    // 0x171c8c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x171C8Cu;
    {
        const bool branch_taken_0x171c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171C8Cu;
            // 0x171c90: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171c8c) {
            ctx->pc = 0x171CA8u;
            goto label_171ca8;
        }
    }
    ctx->pc = 0x171C94u;
label_171c94:
    // 0x171c94: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x171C94u;
    {
        const bool branch_taken_0x171c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171C94u;
            // 0x171c98: 0x9482000a  lhu         $v0, 0xA($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171c94) {
            ctx->pc = 0x171CA8u;
            goto label_171ca8;
        }
    }
    ctx->pc = 0x171C9Cu;
label_171c9c:
    // 0x171c9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x171C9Cu;
    {
        const bool branch_taken_0x171c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171C9Cu;
            // 0x171ca0: 0x9482000c  lhu         $v0, 0xC($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171c9c) {
            ctx->pc = 0x171CA8u;
            goto label_171ca8;
        }
    }
    ctx->pc = 0x171CA4u;
label_171ca4:
    // 0x171ca4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x171ca4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171ca8:
    // 0x171ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x171CA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x171CB0u;
    ctx->pc = 0x171cb0u;
}
