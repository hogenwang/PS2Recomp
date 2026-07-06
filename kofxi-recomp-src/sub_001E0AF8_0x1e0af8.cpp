#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E0AF8
// Address: 0x1e0af8 - 0x1e0b60
void sub_001E0AF8_0x1e0af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0AF8_0x1e0af8");
#endif

    switch (ctx->pc) {
        case 0x1e0b18u: goto label_1e0b18;
        case 0x1e0b30u: goto label_1e0b30;
        case 0x1e0b58u: goto label_1e0b58;
        default: break;
    }

    ctx->pc = 0x1e0af8u;

    // 0x1e0af8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e0af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e0afc: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x1e0afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1e0b00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e0b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e0b04: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1e0b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0b08: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e0b08u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e0b0c: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x1e0b0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1e0b10: 0xc078a16  jal         func_1E2858
    ctx->pc = 0x1E0B10u;
    SET_GPR_U32(ctx, 31, 0x1E0B18u);
    ctx->pc = 0x1E0B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0B10u;
            // 0x1e0b14: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2858u;
    if (runtime->hasFunction(0x1E2858u)) {
        auto targetFn = runtime->lookupFunction(0x1E2858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0B18u; }
        if (ctx->pc != 0x1E0B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2858_0x1e2858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0B18u; }
        if (ctx->pc != 0x1E0B18u) { return; }
    }
    ctx->pc = 0x1E0B18u;
label_1e0b18:
    // 0x1e0b18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e0b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0b1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e0b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0b20: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1e0b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1e0b24: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e0b24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0b28: 0x8078a16  j           func_1E2858
    ctx->pc = 0x1E0B28u;
    ctx->pc = 0x1E0B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0B28u;
            // 0x1e0b2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2858u;
    if (runtime->hasFunction(0x1E2858u)) {
        auto targetFn = runtime->lookupFunction(0x1E2858u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E2858_0x1e2858(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1E0B30u;
label_1e0b30:
    // 0x1e0b30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e0b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e0b34: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1e0b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1e0b38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e0b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e0b3c: 0x2442ec10  addiu       $v0, $v0, -0x13F0
    ctx->pc = 0x1e0b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962192));
    // 0x1e0b40: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e0b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e0b44: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E0B44u;
    {
        const bool branch_taken_0x1e0b44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0B44u;
            // 0x1e0b48: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0b44) {
            ctx->pc = 0x1E0B58u;
            goto label_1e0b58;
        }
    }
    ctx->pc = 0x1E0B4Cu;
    // 0x1e0b4c: 0x0  nop
    ctx->pc = 0x1e0b4cu;
    // NOP
    // 0x1e0b50: 0x80781ea  j           func_1E07A8
    ctx->pc = 0x1E0B50u;
    ctx->pc = 0x1E0B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0B50u;
            // 0x1e0b54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E07A8u;
    {
        auto targetFn = runtime->lookupFunction(0x1E07A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E0B58u;
label_1e0b58:
    // 0x1e0b58: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0B58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0B58u;
            // 0x1e0b5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E0B60u;
    ctx->pc = 0x1e0b60u;
}
