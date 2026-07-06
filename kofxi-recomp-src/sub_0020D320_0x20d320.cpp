#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020D320
// Address: 0x20d320 - 0x20d380
void sub_0020D320_0x20d320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D320_0x20d320");
#endif

    switch (ctx->pc) {
        case 0x20d358u: goto label_20d358;
        default: break;
    }

    ctx->pc = 0x20d320u;

    // 0x20d320: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20d320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20d324: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x20d324u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x20d328: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x20d328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x20d32c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20d32cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20d330: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x20d330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x20d334: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20d334u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20d338: 0x2442a880  addiu       $v0, $v0, -0x5780
    ctx->pc = 0x20d338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944896));
    // 0x20d33c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20d33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20d340: 0x94470002  lhu         $a3, 0x2($v0)
    ctx->pc = 0x20d340u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x20d344: 0x94480004  lhu         $t0, 0x4($v0)
    ctx->pc = 0x20d344u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x20d348: 0x94490006  lhu         $t1, 0x6($v0)
    ctx->pc = 0x20d348u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x20d34c: 0x944a0008  lhu         $t2, 0x8($v0)
    ctx->pc = 0x20d34cu;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x20d350: 0xc08344c  jal         func_20D130
    ctx->pc = 0x20D350u;
    SET_GPR_U32(ctx, 31, 0x20D358u);
    ctx->pc = 0x20D354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D350u;
            // 0x20d354: 0x94460000  lhu         $a2, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D130u;
    if (runtime->hasFunction(0x20D130u)) {
        auto targetFn = runtime->lookupFunction(0x20D130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D358u; }
        if (ctx->pc != 0x20D358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020D130_0x20d130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D358u; }
        if (ctx->pc != 0x20D358u) { return; }
    }
    ctx->pc = 0x20D358u;
label_20d358:
    // 0x20d358: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x20d358u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x20d35c: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20d35cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20d360: 0x8c84a080  lw          $a0, -0x5F80($a0)
    ctx->pc = 0x20d360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294942848)));
    // 0x20d364: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x20d364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x20d368: 0xac64a080  sw          $a0, -0x5F80($v1)
    ctx->pc = 0x20d368u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294942848), GPR_U32(ctx, 4));
    // 0x20d36c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20d36cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d370: 0x3e00008  jr          $ra
    ctx->pc = 0x20D370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D370u;
            // 0x20d374: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20D378u;
    // 0x20d378: 0x0  nop
    ctx->pc = 0x20d378u;
    // NOP
    // 0x20d37c: 0x0  nop
    ctx->pc = 0x20d37cu;
    // NOP
    ctx->pc = 0x20d380u;
}
