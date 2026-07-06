#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00200448
// Address: 0x200448 - 0x200488
void sub_00200448_0x200448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200448_0x200448");
#endif

    switch (ctx->pc) {
        case 0x20045cu: goto label_20045c;
        default: break;
    }

    ctx->pc = 0x200448u;

    // 0x200448: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x200448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20044c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20044cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x200450: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x200450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x200454: 0xc080132  jal         func_2004C8
    ctx->pc = 0x200454u;
    SET_GPR_U32(ctx, 31, 0x20045Cu);
    ctx->pc = 0x200458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200454u;
            // 0x200458: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2004C8u;
    if (runtime->hasFunction(0x2004C8u)) {
        auto targetFn = runtime->lookupFunction(0x2004C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20045Cu; }
        if (ctx->pc != 0x20045Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002004C8_0x2004c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20045Cu; }
        if (ctx->pc != 0x20045Cu) { return; }
    }
    ctx->pc = 0x20045Cu;
label_20045c:
    // 0x20045c: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x20045cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x200460: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x200460u;
    {
        const bool branch_taken_0x200460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x200464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200460u;
            // 0x200464: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200460) {
            ctx->pc = 0x200478u;
            goto label_200478;
        }
    }
    ctx->pc = 0x200468u;
    // 0x200468: 0x92030020  lbu         $v1, 0x20($s0)
    ctx->pc = 0x200468u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x20046c: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x20046cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x200470: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x200470u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x200474: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x200474u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_200478:
    // 0x200478: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x200478u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20047c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20047cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x200480: 0x3e00008  jr          $ra
    ctx->pc = 0x200480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200480u;
            // 0x200484: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x200488u;
    ctx->pc = 0x200488u;
}
