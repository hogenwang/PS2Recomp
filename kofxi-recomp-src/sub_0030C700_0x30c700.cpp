#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030C700
// Address: 0x30c700 - 0x30c780
void sub_0030C700_0x30c700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C700_0x30c700");
#endif

    switch (ctx->pc) {
        case 0x30c71cu: goto label_30c71c;
        case 0x30c754u: goto label_30c754;
        default: break;
    }

    ctx->pc = 0x30c700u;

    // 0x30c700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30c700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30c704: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30c704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30c708: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30c708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30c70c: 0x8c900014  lw          $s0, 0x14($a0)
    ctx->pc = 0x30c70cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x30c710: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x30C710u;
    {
        const bool branch_taken_0x30c710 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c710) {
            ctx->pc = 0x30C768u;
            goto label_30c768;
        }
    }
    ctx->pc = 0x30C718u;
    // 0x30c718: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x30c718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_30c71c:
    // 0x30c71c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x30c71cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x30c720: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30c720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30c724: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x30C724u;
    {
        const bool branch_taken_0x30c724 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30c724) {
            ctx->pc = 0x30C758u;
            goto label_30c758;
        }
    }
    ctx->pc = 0x30C72Cu;
    // 0x30c72c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x30c72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x30c730: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x30c730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30c734: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x30c734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
    // 0x30c738: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x30c738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x30c73c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x30c73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x30c740: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x30c740u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x30c744: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30C744u;
    {
        const bool branch_taken_0x30c744 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30c744) {
            ctx->pc = 0x30C758u;
            goto label_30c758;
        }
    }
    ctx->pc = 0x30C74Cu;
    // 0x30c74c: 0xc0c316c  jal         func_30C5B0
    ctx->pc = 0x30C74Cu;
    SET_GPR_U32(ctx, 31, 0x30C754u);
    ctx->pc = 0x30C5B0u;
    if (runtime->hasFunction(0x30C5B0u)) {
        auto targetFn = runtime->lookupFunction(0x30C5B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C754u; }
        if (ctx->pc != 0x30C754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030C5B0_0x30c5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C754u; }
        if (ctx->pc != 0x30C754u) { return; }
    }
    ctx->pc = 0x30C754u;
label_30c754:
    // 0x30c754: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x30c754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_30c758:
    // 0x30c758: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x30c758u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30c75c: 0x5600ffef  bnel        $s0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x30C75Cu;
    {
        const bool branch_taken_0x30c75c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x30c75c) {
            ctx->pc = 0x30C760u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30C75Cu;
            // 0x30c760: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30C71Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30c71c;
        }
    }
    ctx->pc = 0x30C764u;
    // 0x30c764: 0x0  nop
    ctx->pc = 0x30c764u;
    // NOP
label_30c768:
    // 0x30c768: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30c768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30c76c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30c76cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c770: 0x3e00008  jr          $ra
    ctx->pc = 0x30C770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C770u;
            // 0x30c774: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30C778u;
    // 0x30c778: 0x0  nop
    ctx->pc = 0x30c778u;
    // NOP
    // 0x30c77c: 0x0  nop
    ctx->pc = 0x30c77cu;
    // NOP
    ctx->pc = 0x30c780u;
}
