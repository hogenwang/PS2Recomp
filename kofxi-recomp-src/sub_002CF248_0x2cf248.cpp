#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CF248
// Address: 0x2cf248 - 0x2cf288
void sub_002CF248_0x2cf248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF248_0x2cf248");
#endif

    switch (ctx->pc) {
        case 0x2cf25cu: goto label_2cf25c;
        default: break;
    }

    ctx->pc = 0x2cf248u;

    // 0x2cf248: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cf248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cf24c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cf24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cf250: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2cf250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2cf254: 0xc0b3c88  jal         func_2CF220
    ctx->pc = 0x2CF254u;
    SET_GPR_U32(ctx, 31, 0x2CF25Cu);
    ctx->pc = 0x2CF258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF254u;
            // 0x2cf258: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CF220u;
    if (runtime->hasFunction(0x2CF220u)) {
        auto targetFn = runtime->lookupFunction(0x2CF220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF25Cu; }
        if (ctx->pc != 0x2CF25Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CF220_0x2cf220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF25Cu; }
        if (ctx->pc != 0x2CF25Cu) { return; }
    }
    ctx->pc = 0x2CF25Cu;
label_2cf25c:
    // 0x2cf25c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CF25Cu;
    {
        const bool branch_taken_0x2cf25c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cf25c) {
            ctx->pc = 0x2CF260u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF25Cu;
            // 0x2cf260: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CF278u;
            goto label_2cf278;
        }
    }
    ctx->pc = 0x2CF264u;
    // 0x2cf264: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x2cf264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2cf268: 0x24020202  addiu       $v0, $zero, 0x202
    ctx->pc = 0x2cf268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
    // 0x2cf26c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2cf26cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2cf270: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x2cf270u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x2cf274: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cf274u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cf278:
    // 0x2cf278: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2cf278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cf27c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF27Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF27Cu;
            // 0x2cf280: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CF284u;
    // 0x2cf284: 0x0  nop
    ctx->pc = 0x2cf284u;
    // NOP
    ctx->pc = 0x2cf288u;
}
