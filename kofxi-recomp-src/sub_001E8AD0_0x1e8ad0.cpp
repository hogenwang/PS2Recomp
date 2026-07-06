#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E8AD0
// Address: 0x1e8ad0 - 0x1e8b20
void sub_001E8AD0_0x1e8ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8AD0_0x1e8ad0");
#endif

    switch (ctx->pc) {
        case 0x1e8aecu: goto label_1e8aec;
        default: break;
    }

    ctx->pc = 0x1e8ad0u;

    // 0x1e8ad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e8ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e8ad4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e8ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e8ad8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e8ad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8adc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e8adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e8ae0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e8ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e8ae4: 0xc07a67c  jal         func_1E99F0
    ctx->pc = 0x1E8AE4u;
    SET_GPR_U32(ctx, 31, 0x1E8AECu);
    ctx->pc = 0x1E8AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8AE4u;
            // 0x1e8ae8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E99F0u;
    if (runtime->hasFunction(0x1E99F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E99F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8AECu; }
        if (ctx->pc != 0x1E8AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E99F0_0x1e99f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8AECu; }
        if (ctx->pc != 0x1E8AECu) { return; }
    }
    ctx->pc = 0x1E8AECu;
label_1e8aec:
    // 0x1e8aec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e8aecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8af0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E8AF0u;
    {
        const bool branch_taken_0x1e8af0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8AF0u;
            // 0x1e8af4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8af0) {
            ctx->pc = 0x1E8B0Cu;
            goto label_1e8b0c;
        }
    }
    ctx->pc = 0x1E8AF8u;
    // 0x1e8af8: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x1e8af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1e8afc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e8afcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8b00: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x1e8b00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x1e8b04: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1e8b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1e8b08: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1e8b08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1e8b0c:
    // 0x1e8b0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e8b0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8b10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e8b10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e8b14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e8b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8b18: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8B18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8B18u;
            // 0x1e8b1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E8B20u;
    ctx->pc = 0x1e8b20u;
}
