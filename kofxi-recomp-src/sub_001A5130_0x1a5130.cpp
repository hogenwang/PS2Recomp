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

// Function: sub_001A5130
// Address: 0x1a5130 - 0x1a51f0
void sub_001A5130_0x1a5130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5130_0x1a5130");
#endif

    switch (ctx->pc) {
        case 0x1a516cu: goto label_1a516c;
        case 0x1a51a4u: goto label_1a51a4;
        default: break;
    }

    ctx->pc = 0x1a5130u;

    // 0x1a5130: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a5130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a5134: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a5134u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5138: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a5138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a513c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a513cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a5140: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a5140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a5144: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a5144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a5148: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1a5148u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a514c: 0x3203003f  andi        $v1, $s0, 0x3F
    ctx->pc = 0x1a514cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)63);
    // 0x1a5150: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5150u;
    {
        const bool branch_taken_0x1a5150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5150u;
        // 0x1a5154: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5150) {
            ctx->pc = 0x1A5164u;
            goto label_1a5164;
        }
    }
    ctx->pc = 0x1A5158u;
    // 0x1a5158: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x1a5158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1a515c: 0x2403ffc0  addiu       $v1, $zero, -0x40
    ctx->pc = 0x1a515cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1a5160: 0xa38024  and         $s0, $a1, $v1
    ctx->pc = 0x1a5160u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_1a5164:
    // 0x1a5164: 0x3c05009f  lui         $a1, 0x9F
    ctx->pc = 0x1a5164u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)159 << 16));
    // 0x1a5168: 0x24a5b8a0  addiu       $a1, $a1, -0x4760
    ctx->pc = 0x1a5168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949024));
label_1a516c:
    // 0x1a516c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a516cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a5170: 0x54600014  bnel        $v1, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A5170u;
    {
        const bool branch_taken_0x1a5170 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5170) {
            ctx->pc = 0x1A5174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5170u;
            // 0x1a5174: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A51C4u;
            goto label_1a51c4;
        }
    }
    ctx->pc = 0x1A5178u;
    // 0x1a5178: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x1a5178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x1a517c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a517cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a5180: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x1a5180u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1a5184: 0x2463b8a0  addiu       $v1, $v1, -0x4760
    ctx->pc = 0x1a5184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949024));
    // 0x1a5188: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a5188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a518c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1a518cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a5190: 0x2442b8a4  addiu       $v0, $v0, -0x475C
    ctx->pc = 0x1a5190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949028));
    // 0x1a5194: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1a5194u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1a5198: 0x469021  addu        $s2, $v0, $a2
    ctx->pc = 0x1a5198u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1a519c: 0xc069274  jal         func_1A49D0
    ctx->pc = 0x1A519Cu;
    SET_GPR_U32(ctx, 31, 0x1A51A4u);
    ctx->pc = 0x1A51A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A519Cu;
    // 0x1a51a0: 0xac870000  sw          $a3, 0x0($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A49D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A49D0u, 0x1A519Cu, 0x1A51A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A51A4u;
label_1a51a4:
    // 0x1a51a4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1a51a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1a51a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a51a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a51ac: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1a51acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1a51b0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1a51b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1a51b4: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x1a51b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
    // 0x1a51b8: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1a51b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1a51bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A51BCu;
    {
        const bool branch_taken_0x1a51bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A51C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A51BCu;
        // 0x1a51c0: 0xac500010  sw          $s0, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a51bc) {
            ctx->pc = 0x1A51D0u;
            goto label_1a51d0;
        }
    }
    ctx->pc = 0x1A51C4u;
label_1a51c4:
    // 0x1a51c4: 0x28e3000a  slti        $v1, $a3, 0xA
    ctx->pc = 0x1a51c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1a51c8: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1A51C8u;
    {
        const bool branch_taken_0x1a51c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A51CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A51C8u;
        // 0x1a51cc: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a51c8) {
            ctx->pc = 0x1A516Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a516c;
        }
    }
    ctx->pc = 0x1A51D0u;
label_1a51d0:
    // 0x1a51d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a51d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a51d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a51d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a51d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a51d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a51dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a51dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a51e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A51E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A51E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A51E0u;
        // 0x1a51e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A51E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A51E8u;
    // 0x1a51e8: 0x0  nop
    ctx->pc = 0x1a51e8u;
    // NOP
    // 0x1a51ec: 0x0  nop
    ctx->pc = 0x1a51ecu;
    // NOP
}
