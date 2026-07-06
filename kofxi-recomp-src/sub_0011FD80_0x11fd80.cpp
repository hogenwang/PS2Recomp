#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011FD80
// Address: 0x11fd80 - 0x11fe08
void sub_0011FD80_0x11fd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011FD80_0x11fd80");
#endif

    switch (ctx->pc) {
        case 0x11fdc0u: goto label_11fdc0;
        case 0x11fdccu: goto label_11fdcc;
        default: break;
    }

    ctx->pc = 0x11fd80u;

    // 0x11fd80: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11fd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11fd84: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11fd84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11fd88: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x11fd88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x11fd8c: 0x2483007f  addiu       $v1, $a0, 0x7F
    ctx->pc = 0x11fd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
    // 0x11fd90: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x11fd90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x11fd94: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x11fd94u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x11fd98: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11fd98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11fd9c: 0x399c3  sra         $s3, $v1, 7
    ctx->pc = 0x11fd9cu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 3), 7));
    // 0x11fda0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11fda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11fda4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x11fda4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fda8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11fda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11fdac: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x11fdacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fdb0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11fdb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11fdb4: 0x1a60000b  blez        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x11FDB4u;
    {
        const bool branch_taken_0x11fdb4 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x11FDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FDB4u;
            // 0x11fdb8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fdb4) {
            ctx->pc = 0x11FDE4u;
            goto label_11fde4;
        }
    }
    ctx->pc = 0x11FDBCu;
    // 0x11fdbc: 0x0  nop
    ctx->pc = 0x11fdbcu;
    // NOP
label_11fdc0:
    // 0x11fdc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11fdc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fdc4: 0xc047f1a  jal         func_11FC68
    ctx->pc = 0x11FDC4u;
    SET_GPR_U32(ctx, 31, 0x11FDCCu);
    ctx->pc = 0x11FDC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11FDC4u;
            // 0x11fdc8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11FC68u;
    if (runtime->hasFunction(0x11FC68u)) {
        auto targetFn = runtime->lookupFunction(0x11FC68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FDCCu; }
        if (ctx->pc != 0x11FDCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011FC68_0x11fc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FDCCu; }
        if (ctx->pc != 0x11FDCCu) { return; }
    }
    ctx->pc = 0x11FDCCu;
label_11fdcc:
    // 0x11fdcc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11FDCCu;
    {
        const bool branch_taken_0x11fdcc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11FDD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FDCCu;
            // 0x11fdd0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fdcc) {
            ctx->pc = 0x11FDE8u;
            goto label_11fde8;
        }
    }
    ctx->pc = 0x11FDD4u;
    // 0x11fdd4: 0x26520080  addiu       $s2, $s2, 0x80
    ctx->pc = 0x11fdd4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x11fdd8: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x11fdd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x11fddc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11FDDCu;
    {
        const bool branch_taken_0x11fddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FDE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FDDCu;
            // 0x11fde0: 0x26310003  addiu       $s1, $s1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fddc) {
            ctx->pc = 0x11FDC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11fdc0;
        }
    }
    ctx->pc = 0x11FDE4u;
label_11fde4:
    // 0x11fde4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11fde4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11fde8:
    // 0x11fde8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11fde8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11fdec: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x11fdecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11fdf0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11fdf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11fdf4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11fdf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11fdf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11fdf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11fdfc: 0x3e00008  jr          $ra
    ctx->pc = 0x11FDFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FDFCu;
            // 0x11fe00: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11FE04u;
    // 0x11fe04: 0x0  nop
    ctx->pc = 0x11fe04u;
    // NOP
    ctx->pc = 0x11fe08u;
}
