#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00174C70
// Address: 0x174c70 - 0x174cf0
void sub_00174C70_0x174c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174C70_0x174c70");
#endif

    switch (ctx->pc) {
        case 0x174cc8u: goto label_174cc8;
        case 0x174cd8u: goto label_174cd8;
        default: break;
    }

    ctx->pc = 0x174c70u;

    // 0x174c70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x174c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x174c74: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x174c74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x174c78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x174c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x174c7c: 0x9063dae0  lbu         $v1, -0x2520($v1)
    ctx->pc = 0x174c7cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957792)));
    // 0x174c80: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x174c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x174c84: 0x54600015  bnel        $v1, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x174C84u;
    {
        const bool branch_taken_0x174c84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x174c84) {
            ctx->pc = 0x174C88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x174C84u;
            // 0x174c88: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x174CDCu;
            goto label_174cdc;
        }
    }
    ctx->pc = 0x174C8Cu;
    // 0x174c8c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x174c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x174c90: 0x9463dab0  lhu         $v1, -0x2550($v1)
    ctx->pc = 0x174c90u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957744)));
    // 0x174c94: 0x3066ff00  andi        $a2, $v1, 0xFF00
    ctx->pc = 0x174c94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x174c98: 0x10c0000f  beqz        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x174C98u;
    {
        const bool branch_taken_0x174c98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x174c98) {
            ctx->pc = 0x174CD8u;
            goto label_174cd8;
        }
    }
    ctx->pc = 0x174CA0u;
    // 0x174ca0: 0x24030300  addiu       $v1, $zero, 0x300
    ctx->pc = 0x174ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x174ca4: 0x10c3000a  beq         $a2, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x174CA4u;
    {
        const bool branch_taken_0x174ca4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x174ca4) {
            ctx->pc = 0x174CD0u;
            goto label_174cd0;
        }
    }
    ctx->pc = 0x174CACu;
    // 0x174cac: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x174cacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x174cb0: 0x8c63da70  lw          $v1, -0x2590($v1)
    ctx->pc = 0x174cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957680)));
    // 0x174cb4: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x174cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x174cb8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x174CB8u;
    {
        const bool branch_taken_0x174cb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x174cb8) {
            ctx->pc = 0x174CD8u;
            goto label_174cd8;
        }
    }
    ctx->pc = 0x174CC0u;
    // 0x174cc0: 0xc05d33c  jal         func_174CF0
    ctx->pc = 0x174CC0u;
    SET_GPR_U32(ctx, 31, 0x174CC8u);
    ctx->pc = 0x174CF0u;
    if (runtime->hasFunction(0x174CF0u)) {
        auto targetFn = runtime->lookupFunction(0x174CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174CC8u; }
        if (ctx->pc != 0x174CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174CF0_0x174cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174CC8u; }
        if (ctx->pc != 0x174CC8u) { return; }
    }
    ctx->pc = 0x174CC8u;
label_174cc8:
    // 0x174cc8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x174CC8u;
    {
        const bool branch_taken_0x174cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174cc8) {
            ctx->pc = 0x174CD8u;
            goto label_174cd8;
        }
    }
    ctx->pc = 0x174CD0u;
label_174cd0:
    // 0x174cd0: 0xc05d3d0  jal         func_174F40
    ctx->pc = 0x174CD0u;
    SET_GPR_U32(ctx, 31, 0x174CD8u);
    ctx->pc = 0x174F40u;
    if (runtime->hasFunction(0x174F40u)) {
        auto targetFn = runtime->lookupFunction(0x174F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174CD8u; }
        if (ctx->pc != 0x174CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174F40_0x174f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174CD8u; }
        if (ctx->pc != 0x174CD8u) { return; }
    }
    ctx->pc = 0x174CD8u;
label_174cd8:
    // 0x174cd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_174cdc:
    // 0x174cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x174CDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174CDCu;
            // 0x174ce0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x174CE4u;
    // 0x174ce4: 0x0  nop
    ctx->pc = 0x174ce4u;
    // NOP
    // 0x174ce8: 0x0  nop
    ctx->pc = 0x174ce8u;
    // NOP
    // 0x174cec: 0x0  nop
    ctx->pc = 0x174cecu;
    // NOP
    ctx->pc = 0x174cf0u;
}
