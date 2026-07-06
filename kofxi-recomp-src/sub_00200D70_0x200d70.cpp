#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00200D70
// Address: 0x200d70 - 0x200de8
void sub_00200D70_0x200d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200D70_0x200d70");
#endif

    switch (ctx->pc) {
        case 0x200d90u: goto label_200d90;
        case 0x200dc0u: goto label_200dc0;
        case 0x200dc8u: goto label_200dc8;
        default: break;
    }

    ctx->pc = 0x200d70u;

    // 0x200d70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x200d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x200d74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x200d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x200d78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x200d78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200d7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x200d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x200d80: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x200d80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200d84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x200d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x200d88: 0xc0809e6  jal         func_202798
    ctx->pc = 0x200D88u;
    SET_GPR_U32(ctx, 31, 0x200D90u);
    ctx->pc = 0x200D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200D88u;
            // 0x200d8c: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x202798u;
    if (runtime->hasFunction(0x202798u)) {
        auto targetFn = runtime->lookupFunction(0x202798u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200D90u; }
        if (ctx->pc != 0x200D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00202798_0x202798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200D90u; }
        if (ctx->pc != 0x200D90u) { return; }
    }
    ctx->pc = 0x200D90u;
label_200d90:
    // 0x200d90: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x200d90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x200d94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x200d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x200d98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x200d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200d9c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x200d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x200da0: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x200DA0u;
    {
        const bool branch_taken_0x200da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x200DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200DA0u;
            // 0x200da4: 0x24c6f0c8  addiu       $a2, $a2, -0xF38 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200da0) {
            ctx->pc = 0x200DC0u;
            goto label_200dc0;
        }
    }
    ctx->pc = 0x200DA8u;
    // 0x200da8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x200da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200dac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x200dacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x200db0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x200db0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200db4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x200db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200db8: 0x808063e  j           func_2018F8
    ctx->pc = 0x200DB8u;
    ctx->pc = 0x200DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200DB8u;
            // 0x200dbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2018F8u;
    if (runtime->hasFunction(0x2018F8u)) {
        auto targetFn = runtime->lookupFunction(0x2018F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002018F8_0x2018f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x200DC0u;
label_200dc0:
    // 0x200dc0: 0xc080b34  jal         func_202CD0
    ctx->pc = 0x200DC0u;
    SET_GPR_U32(ctx, 31, 0x200DC8u);
    ctx->pc = 0x202CD0u;
    if (runtime->hasFunction(0x202CD0u)) {
        auto targetFn = runtime->lookupFunction(0x202CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200DC8u; }
        if (ctx->pc != 0x200DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00202CD0_0x202cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200DC8u; }
        if (ctx->pc != 0x200DC8u) { return; }
    }
    ctx->pc = 0x200DC8u;
label_200dc8:
    // 0x200dc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x200dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200dcc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x200dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200dd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x200dd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x200dd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x200dd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200dd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x200dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200ddc: 0x80802e0  j           func_200B80
    ctx->pc = 0x200DDCu;
    ctx->pc = 0x200DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200DDCu;
            // 0x200de0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200B80u;
    {
        auto targetFn = runtime->lookupFunction(0x200B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x200DE4u;
    // 0x200de4: 0x0  nop
    ctx->pc = 0x200de4u;
    // NOP
    ctx->pc = 0x200de8u;
}
