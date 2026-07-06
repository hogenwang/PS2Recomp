#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017E940
// Address: 0x17e940 - 0x17e980
void sub_0017E940_0x17e940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E940_0x17e940");
#endif

    switch (ctx->pc) {
        case 0x17e95cu: goto label_17e95c;
        case 0x17e968u: goto label_17e968;
        case 0x17e974u: goto label_17e974;
        default: break;
    }

    ctx->pc = 0x17e940u;

    // 0x17e940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17e940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17e944: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x17e944u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x17e948: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17e948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17e94c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17e94cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17e950: 0xa040b858  sb          $zero, -0x47A8($v0)
    ctx->pc = 0x17e950u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294948952), (uint8_t)GPR_U32(ctx, 0));
    // 0x17e954: 0xc063d08  jal         func_18F420
    ctx->pc = 0x17E954u;
    SET_GPR_U32(ctx, 31, 0x17E95Cu);
    ctx->pc = 0x17E958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E954u;
            // 0x17e958: 0x2484b840  addiu       $a0, $a0, -0x47C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F420u;
    if (runtime->hasFunction(0x18F420u)) {
        auto targetFn = runtime->lookupFunction(0x18F420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E95Cu; }
        if (ctx->pc != 0x17E95Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F420_0x18f420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E95Cu; }
        if (ctx->pc != 0x17E95Cu) { return; }
    }
    ctx->pc = 0x17E95Cu;
label_17e95c:
    // 0x17e95c: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x17e95cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x17e960: 0xc063d08  jal         func_18F420
    ctx->pc = 0x17E960u;
    SET_GPR_U32(ctx, 31, 0x17E968u);
    ctx->pc = 0x17E964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E960u;
            // 0x17e964: 0x2484b850  addiu       $a0, $a0, -0x47B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F420u;
    if (runtime->hasFunction(0x18F420u)) {
        auto targetFn = runtime->lookupFunction(0x18F420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E968u; }
        if (ctx->pc != 0x17E968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F420_0x18f420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E968u; }
        if (ctx->pc != 0x17E968u) { return; }
    }
    ctx->pc = 0x17E968u;
label_17e968:
    // 0x17e968: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x17e968u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x17e96c: 0xc063d08  jal         func_18F420
    ctx->pc = 0x17E96Cu;
    SET_GPR_U32(ctx, 31, 0x17E974u);
    ctx->pc = 0x17E970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E96Cu;
            // 0x17e970: 0x2484b848  addiu       $a0, $a0, -0x47B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F420u;
    if (runtime->hasFunction(0x18F420u)) {
        auto targetFn = runtime->lookupFunction(0x18F420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E974u; }
        if (ctx->pc != 0x17E974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F420_0x18f420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E974u; }
        if (ctx->pc != 0x17E974u) { return; }
    }
    ctx->pc = 0x17E974u;
label_17e974:
    // 0x17e974: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17e974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e978: 0x3e00008  jr          $ra
    ctx->pc = 0x17E978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E97Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E978u;
            // 0x17e97c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17E980u;
    ctx->pc = 0x17e980u;
}
