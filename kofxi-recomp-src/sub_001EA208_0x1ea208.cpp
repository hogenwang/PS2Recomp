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

// Function: sub_001EA208
// Address: 0x1ea208 - 0x1ea2a0
void sub_001EA208_0x1ea208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EA208_0x1ea208");
#endif

    switch (ctx->pc) {
        case 0x1ea264u: goto label_1ea264;
        default: break;
    }

    ctx->pc = 0x1ea208u;

    // 0x1ea208: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ea208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ea20c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1ea20cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea210: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ea210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ea214: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ea214u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea218: 0xc71023  subu        $v0, $a2, $a3
    ctx->pc = 0x1ea218u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1ea21c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1ea21cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea220: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1ea220u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1ea224: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ea224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ea228: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ea228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea22c: 0x34a5040c  ori         $a1, $a1, 0x40C
    ctx->pc = 0x1ea22cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1036);
    // 0x1ea230: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1ea230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1ea234: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1ea234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1ea238: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EA238u;
    {
        const bool branch_taken_0x1ea238 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1EA23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA238u;
        // 0x1ea23c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea238) {
            ctx->pc = 0x1EA250u;
            goto label_1ea250;
        }
    }
    ctx->pc = 0x1EA240u;
    // 0x1ea240: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ea240u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ea244: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ea244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ea248: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1EA248u;
    ctx->pc = 0x1EA24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA248u;
    // 0x1ea24c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1EA250u;
label_1ea250:
    // 0x1ea250: 0xae070010  sw          $a3, 0x10($s0)
    ctx->pc = 0x1ea250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
    // 0x1ea254: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1ea254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea258: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1ea258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1ea25c: 0xc072cec  jal         func_1CB3B0
    ctx->pc = 0x1EA25Cu;
    SET_GPR_U32(ctx, 31, 0x1EA264u);
    ctx->pc = 0x1EA260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA25Cu;
    // 0x1ea260: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB3B0u, 0x1EA25Cu, 0x1EA264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA264u;
label_1ea264:
    // 0x1ea264: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ea264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea268: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1ea268u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1ea26c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1ea26cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1ea270: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EA270u;
    {
        const bool branch_taken_0x1ea270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA270u;
        // 0x1ea274: 0x34a5040a  ori         $a1, $a1, 0x40A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1034);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea270) {
            ctx->pc = 0x1EA288u;
            goto label_1ea288;
        }
    }
    ctx->pc = 0x1EA278u;
    // 0x1ea278: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ea278u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ea27c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ea27cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ea280: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1EA280u;
    ctx->pc = 0x1EA284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA280u;
    // 0x1ea284: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1EA288u;
label_1ea288:
    // 0x1ea288: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ea288u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ea28c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ea28cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea290: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ea290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ea294: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA294u;
        // 0x1ea298: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EA29Cu;
    // 0x1ea29c: 0x0  nop
    ctx->pc = 0x1ea29cu;
    // NOP
    if (ctx->pc == 0x1ea29cu) { ctx->pc = 0x1ea2a0u; }
}
