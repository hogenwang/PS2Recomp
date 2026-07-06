#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C1D68
// Address: 0x2c1d68 - 0x2c1de8
void sub_002C1D68_0x2c1d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1D68_0x2c1d68");
#endif

    switch (ctx->pc) {
        case 0x2c1d78u: goto label_2c1d78;
        case 0x2c1d80u: goto label_2c1d80;
        case 0x2c1d90u: goto label_2c1d90;
        case 0x2c1d98u: goto label_2c1d98;
        case 0x2c1db8u: goto label_2c1db8;
        case 0x2c1dd4u: goto label_2c1dd4;
        default: break;
    }

    ctx->pc = 0x2c1d68u;

    // 0x2c1d68: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C1D68u;
    {
        const bool branch_taken_0x2c1d68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c1d68) {
            ctx->pc = 0x2C1D6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1D68u;
            // 0x2c1d6c: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C1D78u;
            goto label_2c1d78;
        }
    }
    ctx->pc = 0x2C1D70u;
    // 0x2c1d70: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1D70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1D70u;
            // 0x2c1d74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C1D78u;
label_2c1d78:
    // 0x2c1d78: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1D78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1D78u;
            // 0x2c1d7c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C1D80u;
label_2c1d80:
    // 0x2c1d80: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C1D80u;
    {
        const bool branch_taken_0x2c1d80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1D80u;
            // 0x2c1d84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1d80) {
            ctx->pc = 0x2C1D90u;
            goto label_2c1d90;
        }
    }
    ctx->pc = 0x2C1D88u;
    // 0x2c1d88: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1D88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1D88u;
            // 0x2c1d8c: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C1D90u;
label_2c1d90:
    // 0x2c1d90: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1D90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C1D98u;
label_2c1d98:
    // 0x2c1d98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c1d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c1d9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c1d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c1da0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c1da0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1da4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2c1da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c1da8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2c1da8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1dac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c1dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c1db0: 0xc0a69c2  jal         func_29A708
    ctx->pc = 0x2C1DB0u;
    SET_GPR_U32(ctx, 31, 0x2C1DB8u);
    ctx->pc = 0x2C1DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1DB0u;
            // 0x2c1db4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29A708u;
    if (runtime->hasFunction(0x29A708u)) {
        auto targetFn = runtime->lookupFunction(0x29A708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1DB8u; }
        if (ctx->pc != 0x2C1DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029A708_0x29a708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1DB8u; }
        if (ctx->pc != 0x2C1DB8u) { return; }
    }
    ctx->pc = 0x2C1DB8u;
label_2c1db8:
    // 0x2c1db8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C1DB8u;
    {
        const bool branch_taken_0x2c1db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C1DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1DB8u;
            // 0x2c1dbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1db8) {
            ctx->pc = 0x2C1DC8u;
            goto label_2c1dc8;
        }
    }
    ctx->pc = 0x2C1DC0u;
    // 0x2c1dc0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C1DC0u;
    {
        const bool branch_taken_0x2c1dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1DC0u;
            // 0x2c1dc4: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1dc0) {
            ctx->pc = 0x2C1DD4u;
            goto label_2c1dd4;
        }
    }
    ctx->pc = 0x2C1DC8u;
label_2c1dc8:
    // 0x2c1dc8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c1dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1dcc: 0xc0b077a  jal         func_2C1DE8
    ctx->pc = 0x2C1DCCu;
    SET_GPR_U32(ctx, 31, 0x2C1DD4u);
    ctx->pc = 0x2C1DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1DCCu;
            // 0x2c1dd0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1DE8u;
    if (runtime->hasFunction(0x2C1DE8u)) {
        auto targetFn = runtime->lookupFunction(0x2C1DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1DD4u; }
        if (ctx->pc != 0x2C1DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1DE8_0x2c1de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1DD4u; }
        if (ctx->pc != 0x2C1DD4u) { return; }
    }
    ctx->pc = 0x2C1DD4u;
label_2c1dd4:
    // 0x2c1dd4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c1dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c1dd8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c1dd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c1ddc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c1ddcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1de0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1DE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1DE0u;
            // 0x2c1de4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C1DE8u;
    ctx->pc = 0x2c1de8u;
}
