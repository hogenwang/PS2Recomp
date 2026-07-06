#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C6250
// Address: 0x1c6250 - 0x1c62b8
void sub_001C6250_0x1c6250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6250_0x1c6250");
#endif

    switch (ctx->pc) {
        case 0x1c6280u: goto label_1c6280;
        case 0x1c6294u: goto label_1c6294;
        default: break;
    }

    ctx->pc = 0x1c6250u;

    // 0x1c6250: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c6250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c6254: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c6258: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c6258u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c625c: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C625Cu;
    {
        const bool branch_taken_0x1c625c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C625Cu;
            // 0x1c6260: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c625c) {
            ctx->pc = 0x1C6280u;
            goto label_1c6280;
        }
    }
    ctx->pc = 0x1C6264u;
    // 0x1c6264: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c6264u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c6268: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6268u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c626c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c626cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6270: 0x2484a6c8  addiu       $a0, $a0, -0x5938
    ctx->pc = 0x1c6270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944456));
    // 0x1c6274: 0x8071ac8  j           func_1C6B20
    ctx->pc = 0x1C6274u;
    ctx->pc = 0x1C6278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6274u;
            // 0x1c6278: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6B20u;
    if (runtime->hasFunction(0x1C6B20u)) {
        auto targetFn = runtime->lookupFunction(0x1C6B20u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C6B20_0x1c6b20(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C627Cu;
    // 0x1c627c: 0x0  nop
    ctx->pc = 0x1c627cu;
    // NOP
label_1c6280:
    // 0x1c6280: 0x82020001  lb          $v0, 0x1($s0)
    ctx->pc = 0x1c6280u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1c6284: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6284u;
    {
        const bool branch_taken_0x1c6284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6284) {
            ctx->pc = 0x1C6288u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6284u;
            // 0x1c6288: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C6298u;
            goto label_1c6298;
        }
    }
    ctx->pc = 0x1C628Cu;
    // 0x1c628c: 0xc0718ae  jal         func_1C62B8
    ctx->pc = 0x1C628Cu;
    SET_GPR_U32(ctx, 31, 0x1C6294u);
    ctx->pc = 0x1C62B8u;
    if (runtime->hasFunction(0x1C62B8u)) {
        auto targetFn = runtime->lookupFunction(0x1C62B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6294u; }
        if (ctx->pc != 0x1C6294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C62B8_0x1c62b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6294u; }
        if (ctx->pc != 0x1C6294u) { return; }
    }
    ctx->pc = 0x1C6294u;
label_1c6294:
    // 0x1c6294: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1c6294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1c6298:
    // 0x1c6298: 0x58400002  blezl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C6298u;
    {
        const bool branch_taken_0x1c6298 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1c6298) {
            ctx->pc = 0x1C629Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6298u;
            // 0x1c629c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C62A4u;
            goto label_1c62a4;
        }
    }
    ctx->pc = 0x1C62A0u;
    // 0x1c62a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c62a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c62a4:
    // 0x1c62a4: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x1c62a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c62a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c62a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c62ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c62acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c62b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C62B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C62B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C62B0u;
            // 0x1c62b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C62B8u;
    ctx->pc = 0x1c62b8u;
}
