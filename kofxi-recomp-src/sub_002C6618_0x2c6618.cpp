#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C6618
// Address: 0x2c6618 - 0x2c6668
void sub_002C6618_0x2c6618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6618_0x2c6618");
#endif

    switch (ctx->pc) {
        case 0x2c664cu: goto label_2c664c;
        default: break;
    }

    ctx->pc = 0x2c6618u;

    // 0x2c6618: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c6618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c661c: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x2c661cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6620: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c6620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c6624: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c6624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6628: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c6628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2c662c: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x2c662cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2c6630: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c6630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c6634: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x2c6634u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6638: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c6638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c663c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2c663cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6640: 0x8e08002c  lw          $t0, 0x2C($s0)
    ctx->pc = 0x2c6640u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2c6644: 0xc0b2184  jal         func_2C8610
    ctx->pc = 0x2C6644u;
    SET_GPR_U32(ctx, 31, 0x2C664Cu);
    ctx->pc = 0x2C6648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6644u;
            // 0x2c6648: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8610u;
    if (runtime->hasFunction(0x2C8610u)) {
        auto targetFn = runtime->lookupFunction(0x2C8610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C664Cu; }
        if (ctx->pc != 0x2C664Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C8610_0x2c8610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C664Cu; }
        if (ctx->pc != 0x2C664Cu) { return; }
    }
    ctx->pc = 0x2C664Cu;
label_2c664c:
    // 0x2c664c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2C664Cu;
    {
        const bool branch_taken_0x2c664c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c664c) {
            ctx->pc = 0x2C6650u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C664Cu;
            // 0x2c6650: 0xae110008  sw          $s1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C6654u;
            goto label_2c6654;
        }
    }
    ctx->pc = 0x2C6654u;
label_2c6654:
    // 0x2c6654: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c6654u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c6658: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c6658u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c665c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c665cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c6660: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6660u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6660u;
            // 0x2c6664: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C6668u;
    ctx->pc = 0x2c6668u;
}
