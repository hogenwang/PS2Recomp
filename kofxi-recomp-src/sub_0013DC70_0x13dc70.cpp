#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013DC70
// Address: 0x13dc70 - 0x13dd00
void sub_0013DC70_0x13dc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013DC70_0x13dc70");
#endif

    switch (ctx->pc) {
        case 0x13dc8cu: goto label_13dc8c;
        case 0x13dcd8u: goto label_13dcd8;
        default: break;
    }

    ctx->pc = 0x13dc70u;

    // 0x13dc70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13dc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13dc74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13dc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13dc78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13dc78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13dc7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13dc7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13dc80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13dc80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dc84: 0xc062804  jal         func_18A010
    ctx->pc = 0x13DC84u;
    SET_GPR_U32(ctx, 31, 0x13DC8Cu);
    ctx->pc = 0x13DC88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DC84u;
            // 0x13dc88: 0x8c8400dc  lw          $a0, 0xDC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (runtime->hasFunction(0x18A010u)) {
        auto targetFn = runtime->lookupFunction(0x18A010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DC8Cu; }
        if (ctx->pc != 0x13DC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A010_0x18a010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DC8Cu; }
        if (ctx->pc != 0x13DC8Cu) { return; }
    }
    ctx->pc = 0x13DC8Cu;
label_13dc8c:
    // 0x13dc8c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13DC8Cu;
    {
        const bool branch_taken_0x13dc8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13dc8c) {
            ctx->pc = 0x13DC90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13DC8Cu;
            // 0x13dc90: 0x8c4400dc  lw          $a0, 0xDC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13DC9Cu;
            goto label_13dc9c;
        }
    }
    ctx->pc = 0x13DC94u;
    // 0x13dc94: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x13DC94u;
    {
        const bool branch_taken_0x13dc94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DC94u;
            // 0x13dc98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dc94) {
            ctx->pc = 0x13DCE8u;
            goto label_13dce8;
        }
    }
    ctx->pc = 0x13DC9Cu;
label_13dc9c:
    // 0x13dc9c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x13dc9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dca0: 0x8e230490  lw          $v1, 0x490($s1)
    ctx->pc = 0x13dca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1168)));
    // 0x13dca4: 0x3084000c  andi        $a0, $a0, 0xC
    ctx->pc = 0x13dca4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x13dca8: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x13dca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x13dcac: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x13DCACu;
    {
        const bool branch_taken_0x13dcac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DCB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DCACu;
            // 0x13dcb0: 0x42882  srl         $a1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dcac) {
            ctx->pc = 0x13DCB8u;
            goto label_13dcb8;
        }
    }
    ctx->pc = 0x13DCB4u;
    // 0x13dcb4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x13dcb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_13dcb8:
    // 0x13dcb8: 0x8c420490  lw          $v0, 0x490($v0)
    ctx->pc = 0x13dcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1168)));
    // 0x13dcbc: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x13dcbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x13dcc0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13DCC0u;
    {
        const bool branch_taken_0x13dcc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13dcc0) {
            ctx->pc = 0x13DCC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13DCC0u;
            // 0x13dcc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13DCD0u;
            goto label_13dcd0;
        }
    }
    ctx->pc = 0x13DCC8u;
    // 0x13dcc8: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x13dcc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x13dccc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13dcccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13dcd0:
    // 0x13dcd0: 0xc060d5c  jal         func_183570
    ctx->pc = 0x13DCD0u;
    SET_GPR_U32(ctx, 31, 0x13DCD8u);
    ctx->pc = 0x183570u;
    if (runtime->hasFunction(0x183570u)) {
        auto targetFn = runtime->lookupFunction(0x183570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DCD8u; }
        if (ctx->pc != 0x13DCD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183570_0x183570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DCD8u; }
        if (ctx->pc != 0x13DCD8u) { return; }
    }
    ctx->pc = 0x13DCD8u;
label_13dcd8:
    // 0x13dcd8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13DCD8u;
    {
        const bool branch_taken_0x13dcd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13dcd8) {
            ctx->pc = 0x13DCDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13DCD8u;
            // 0x13dcdc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13DCE8u;
            goto label_13dce8;
        }
    }
    ctx->pc = 0x13DCE0u;
    // 0x13dce0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x13dce0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x13dce4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13dce4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13dce8:
    // 0x13dce8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13dce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13dcec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13dcecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13dcf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13dcf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13dcf4: 0x3e00008  jr          $ra
    ctx->pc = 0x13DCF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13DCF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DCF4u;
            // 0x13dcf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13DCFCu;
    // 0x13dcfc: 0x0  nop
    ctx->pc = 0x13dcfcu;
    // NOP
    ctx->pc = 0x13dd00u;
}
