#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00126260
// Address: 0x126260 - 0x1262b8
void sub_00126260_0x126260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126260_0x126260");
#endif

    switch (ctx->pc) {
        case 0x12628cu: goto label_12628c;
        default: break;
    }

    ctx->pc = 0x126260u;

    // 0x126260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x126260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x126264: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x126264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x126268: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x126268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12626c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12626cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126270: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x126270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x126274: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x126274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126278: 0x3c1001e0  lui         $s0, 0x1E0
    ctx->pc = 0x126278u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)480 << 16));
    // 0x12627c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x12627cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126280: 0xae00bf2c  sw          $zero, -0x40D4($s0)
    ctx->pc = 0x126280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294950700), GPR_U32(ctx, 0));
    // 0x126284: 0xc0434d6  jal         func_10D358
    ctx->pc = 0x126284u;
    SET_GPR_U32(ctx, 31, 0x12628Cu);
    ctx->pc = 0x126288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126284u;
            // 0x126288: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D358u;
    if (runtime->hasFunction(0x10D358u)) {
        auto targetFn = runtime->lookupFunction(0x10D358u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12628Cu; }
        if (ctx->pc != 0x12628Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D358_0x10d358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12628Cu; }
        if (ctx->pc != 0x12628Cu) { return; }
    }
    ctx->pc = 0x12628Cu;
label_12628c:
    // 0x12628c: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x12628cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x126290: 0x544f0005  bnel        $v0, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x126290u;
    {
        const bool branch_taken_0x126290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        if (branch_taken_0x126290) {
            ctx->pc = 0x126294u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x126290u;
            // 0x126294: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1262A8u;
            goto label_1262a8;
        }
    }
    ctx->pc = 0x126298u;
    // 0x126298: 0x8e0fbf2c  lw          $t7, -0x40D4($s0)
    ctx->pc = 0x126298u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950700)));
    // 0x12629c: 0x55e00001  bnel        $t7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12629Cu;
    {
        const bool branch_taken_0x12629c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12629c) {
            ctx->pc = 0x1262A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12629Cu;
            // 0x1262a0: 0xae2f0000  sw          $t7, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1262A4u;
            goto label_1262a4;
        }
    }
    ctx->pc = 0x1262A4u;
label_1262a4:
    // 0x1262a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1262a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1262a8:
    // 0x1262a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1262a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1262ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1262acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1262b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1262B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1262B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1262B0u;
            // 0x1262b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1262B8u;
    ctx->pc = 0x1262b8u;
}
