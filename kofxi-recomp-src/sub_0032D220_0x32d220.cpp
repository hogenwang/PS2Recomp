#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0032D220
// Address: 0x32d220 - 0x32d2a0
void sub_0032D220_0x32d220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032D220_0x32d220");
#endif

    switch (ctx->pc) {
        case 0x32d248u: goto label_32d248;
        case 0x32d25cu: goto label_32d25c;
        default: break;
    }

    ctx->pc = 0x32d220u;

    // 0x32d220: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32d220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32d224: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x32d224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x32d228: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32d228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32d22c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32d22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32d230: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x32d230u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d234: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32d234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32d238: 0x3c11009f  lui         $s1, 0x9F
    ctx->pc = 0x32d238u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)159 << 16));
    // 0x32d23c: 0x3c10009f  lui         $s0, 0x9F
    ctx->pc = 0x32d23cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)159 << 16));
    // 0x32d240: 0x26319708  addiu       $s1, $s1, -0x68F8
    ctx->pc = 0x32d240u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294940424));
    // 0x32d244: 0x26109700  addiu       $s0, $s0, -0x6900
    ctx->pc = 0x32d244u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294940416));
label_32d248:
    // 0x32d248: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x32d248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x32d24c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32D24Cu;
    {
        const bool branch_taken_0x32d24c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d24c) {
            ctx->pc = 0x32D260u;
            goto label_32d260;
        }
    }
    ctx->pc = 0x32D254u;
    // 0x32d254: 0xc06936c  jal         func_1A4DB0
    ctx->pc = 0x32D254u;
    SET_GPR_U32(ctx, 31, 0x32D25Cu);
    ctx->pc = 0x1A4DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4DB0u, 0x32D254u, 0x32D25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D25Cu;
label_32d25c:
    // 0x32d25c: 0x0  nop
    ctx->pc = 0x32d25cu;
    // NOP
label_32d260:
    // 0x32d260: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x32d260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x32d264: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x32d264u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x32d268: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x32d268u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x32d26c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x32d26cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x32d270: 0x2a430003  slti        $v1, $s2, 0x3
    ctx->pc = 0x32d270u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x32d274: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x32d274u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x32d278: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x32D278u;
    {
        const bool branch_taken_0x32d278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32D27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D278u;
        // 0x32d27c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d278) {
            ctx->pc = 0x32D248u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32d248;
        }
    }
    ctx->pc = 0x32D280u;
    // 0x32d280: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x32d280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32d284: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32d284u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32d288: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32d288u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32d28c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32d28cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d290: 0x3e00008  jr          $ra
    ctx->pc = 0x32D290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D290u;
        // 0x32d294: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D298u;
    // 0x32d298: 0x0  nop
    ctx->pc = 0x32d298u;
    // NOP
    // 0x32d29c: 0x0  nop
    ctx->pc = 0x32d29cu;
    // NOP
}
