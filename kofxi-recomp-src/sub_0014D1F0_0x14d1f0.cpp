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

// Function: sub_0014D1F0
// Address: 0x14d1f0 - 0x14d2a0
void sub_0014D1F0_0x14d1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D1F0_0x14d1f0");
#endif

    switch (ctx->pc) {
        case 0x14d20cu: goto label_14d20c;
        case 0x14d240u: goto label_14d240;
        case 0x14d248u: goto label_14d248;
        case 0x14d26cu: goto label_14d26c;
        case 0x14d284u: goto label_14d284;
        default: break;
    }

    ctx->pc = 0x14d1f0u;

    // 0x14d1f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14d1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14d1f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14d1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14d1f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14d1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14d1fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14d1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14d200: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x14d200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d204: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x14d204u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x14d208: 0x26105dc0  addiu       $s0, $s0, 0x5DC0
    ctx->pc = 0x14d208u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24000));
label_14d20c:
    // 0x14d20c: 0x8e034144  lw          $v1, 0x4144($s0)
    ctx->pc = 0x14d20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16708)));
    // 0x14d210: 0x24020125  addiu       $v0, $zero, 0x125
    ctx->pc = 0x14d210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x14d214: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x14d214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x14d218: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x14D218u;
    {
        const bool branch_taken_0x14d218 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14d218) {
            ctx->pc = 0x14D248u;
            goto label_14d248;
        }
    }
    ctx->pc = 0x14D220u;
    // 0x14d220: 0x24020126  addiu       $v0, $zero, 0x126
    ctx->pc = 0x14d220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x14d224: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14D224u;
    {
        const bool branch_taken_0x14d224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14d224) {
            ctx->pc = 0x14D248u;
            goto label_14d248;
        }
    }
    ctx->pc = 0x14D22Cu;
    // 0x14d22c: 0x2402013e  addiu       $v0, $zero, 0x13E
    ctx->pc = 0x14d22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x14d230: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14D230u;
    {
        const bool branch_taken_0x14d230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14d230) {
            ctx->pc = 0x14D248u;
            goto label_14d248;
        }
    }
    ctx->pc = 0x14D238u;
    // 0x14d238: 0xc06e4a0  jal         func_1B9280
    ctx->pc = 0x14D238u;
    SET_GPR_U32(ctx, 31, 0x14D240u);
    ctx->pc = 0x14D23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D238u;
    // 0x14d23c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9280u, 0x14D238u, 0x14D240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D240u;
label_14d240:
    // 0x14d240: 0xc05329c  jal         func_14CA70
    ctx->pc = 0x14D240u;
    SET_GPR_U32(ctx, 31, 0x14D248u);
    ctx->pc = 0x14D244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D240u;
    // 0x14d244: 0x322400ff  andi        $a0, $s1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CA70u, 0x14D240u, 0x14D248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D248u;
label_14d248:
    // 0x14d248: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x14d248u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x14d24c: 0x2a22000e  slti        $v0, $s1, 0xE
    ctx->pc = 0x14d24cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x14d250: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x14D250u;
    {
        const bool branch_taken_0x14d250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D250u;
        // 0x14d254: 0x26104180  addiu       $s0, $s0, 0x4180 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d250) {
            ctx->pc = 0x14D20Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14d20c;
        }
    }
    ctx->pc = 0x14D258u;
    // 0x14d258: 0x3c020088  lui         $v0, 0x88
    ctx->pc = 0x14d258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)136 << 16));
    // 0x14d25c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14d25cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x14d260: 0x8c44eae0  lw          $a0, -0x1520($v0)
    ctx->pc = 0x14d260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961888)));
    // 0x14d264: 0xc06e4a0  jal         func_1B9280
    ctx->pc = 0x14D264u;
    SET_GPR_U32(ctx, 31, 0x14D26Cu);
    ctx->pc = 0x14D268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D264u;
    // 0x14d268: 0xa0605d18  sb          $zero, 0x5D18($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 23832), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9280u, 0x14D264u, 0x14D26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D26Cu;
label_14d26c:
    // 0x14d26c: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x14d26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x14d270: 0x3c030088  lui         $v1, 0x88
    ctx->pc = 0x14d270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)136 << 16));
    // 0x14d274: 0x8c44e4c0  lw          $a0, -0x1B40($v0)
    ctx->pc = 0x14d274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960320)));
    // 0x14d278: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14d278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d27c: 0xc06ec04  jal         func_1BB010
    ctx->pc = 0x14D27Cu;
    SET_GPR_U32(ctx, 31, 0x14D284u);
    ctx->pc = 0x14D280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D27Cu;
    // 0x14d280: 0xa060ead8  sb          $zero, -0x1528($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961880), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB010u, 0x14D27Cu, 0x14D284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D284u;
label_14d284:
    // 0x14d284: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14d284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14d288: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14d288u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d28c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14d28cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d290: 0x3e00008  jr          $ra
    ctx->pc = 0x14D290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D290u;
        // 0x14d294: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D298u;
    // 0x14d298: 0x0  nop
    ctx->pc = 0x14d298u;
    // NOP
    // 0x14d29c: 0x0  nop
    ctx->pc = 0x14d29cu;
    // NOP
    if (ctx->pc == 0x14d29cu) { ctx->pc = 0x14d2a0u; }
}
