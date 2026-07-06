#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00230328
// Address: 0x230328 - 0x2303a0
void sub_00230328_0x230328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230328_0x230328");
#endif

    switch (ctx->pc) {
        case 0x230358u: goto label_230358;
        case 0x230368u: goto label_230368;
        case 0x230384u: goto label_230384;
        default: break;
    }

    ctx->pc = 0x230328u;

    // 0x230328: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x230328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23032c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x23032cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x230330: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x230330u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230334: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x230334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x230338: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x230338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x23033c: 0x2c4200ff  sltiu       $v0, $v0, 0xFF
    ctx->pc = 0x23033cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x230340: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x230340u;
    {
        const bool branch_taken_0x230340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x230344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230340u;
            // 0x230344: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230340) {
            ctx->pc = 0x230350u;
            goto label_230350;
        }
    }
    ctx->pc = 0x230348u;
    // 0x230348: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x230348u;
    {
        const bool branch_taken_0x230348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23034Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230348u;
            // 0x23034c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230348) {
            ctx->pc = 0x230388u;
            goto label_230388;
        }
    }
    ctx->pc = 0x230350u;
label_230350:
    // 0x230350: 0xc08c682  jal         func_231A08
    ctx->pc = 0x230350u;
    SET_GPR_U32(ctx, 31, 0x230358u);
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230358u; }
        if (ctx->pc != 0x230358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230358u; }
        if (ctx->pc != 0x230358u) { return; }
    }
    ctx->pc = 0x230358u;
label_230358:
    // 0x230358: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x230358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23035c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x23035cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x230360: 0x8c50fa18  lw          $s0, -0x5E8($v0)
    ctx->pc = 0x230360u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965784)));
    // 0x230364: 0x0  nop
    ctx->pc = 0x230364u;
    // NOP
label_230368:
    // 0x230368: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x230368u;
    {
        const bool branch_taken_0x230368 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x230368) {
            ctx->pc = 0x23037Cu;
            goto label_23037c;
        }
    }
    ctx->pc = 0x230370u;
    // 0x230370: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x230370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x230374: 0x5451fffc  bnel        $v0, $s1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x230374u;
    {
        const bool branch_taken_0x230374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x230374) {
            ctx->pc = 0x230378u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x230374u;
            // 0x230378: 0x8e1000d0  lw          $s0, 0xD0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x230368u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_230368;
        }
    }
    ctx->pc = 0x23037Cu;
label_23037c:
    // 0x23037c: 0xc08c698  jal         func_231A60
    ctx->pc = 0x23037Cu;
    SET_GPR_U32(ctx, 31, 0x230384u);
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230384u; }
        if (ctx->pc != 0x230384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230384u; }
        if (ctx->pc != 0x230384u) { return; }
    }
    ctx->pc = 0x230384u;
label_230384:
    // 0x230384: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x230384u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_230388:
    // 0x230388: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x230388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23038c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23038cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230390: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x230390u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230394: 0x3e00008  jr          $ra
    ctx->pc = 0x230394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230394u;
            // 0x230398: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23039Cu;
    // 0x23039c: 0x0  nop
    ctx->pc = 0x23039cu;
    // NOP
    ctx->pc = 0x2303a0u;
}
