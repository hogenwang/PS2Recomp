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

// Function: sub_001E6230
// Address: 0x1e6230 - 0x1e6288
void sub_001E6230_0x1e6230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6230_0x1e6230");
#endif

    switch (ctx->pc) {
        case 0x1e6230u: goto label_1e6230;
        case 0x1e6234u: goto label_1e6234;
        case 0x1e6238u: goto label_1e6238;
        case 0x1e623cu: goto label_1e623c;
        case 0x1e6240u: goto label_1e6240;
        case 0x1e6244u: goto label_1e6244;
        case 0x1e6248u: goto label_1e6248;
        case 0x1e624cu: goto label_1e624c;
        case 0x1e6250u: goto label_1e6250;
        case 0x1e6254u: goto label_1e6254;
        case 0x1e6258u: goto label_1e6258;
        case 0x1e625cu: goto label_1e625c;
        case 0x1e6260u: goto label_1e6260;
        case 0x1e6264u: goto label_1e6264;
        case 0x1e6268u: goto label_1e6268;
        case 0x1e626cu: goto label_1e626c;
        case 0x1e6270u: goto label_1e6270;
        case 0x1e6274u: goto label_1e6274;
        case 0x1e6278u: goto label_1e6278;
        case 0x1e627cu: goto label_1e627c;
        case 0x1e6280u: goto label_1e6280;
        case 0x1e6284u: goto label_1e6284;
        default: break;
    }

    ctx->pc = 0x1e6230u;

label_1e6230:
    // 0x1e6230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e6230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1e6234:
    // 0x1e6234: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e6234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1e6238:
    // 0x1e6238: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e6238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1e623c:
    // 0x1e623c: 0xc079a08  jal         func_1E6820
label_1e6240:
    if (ctx->pc == 0x1E6240u) {
        ctx->pc = 0x1E6240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E623Cu;
        // 0x1e6240: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6244u;
        goto label_1e6244;
    }
    ctx->pc = 0x1E623Cu;
    SET_GPR_U32(ctx, 31, 0x1E6244u);
    ctx->pc = 0x1E6240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E623Cu;
    // 0x1e6240: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6820u, 0x1E623Cu, 0x1E6244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6244u;
label_1e6244:
    // 0x1e6244: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e6244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e6248:
    // 0x1e6248: 0x5443000b  bnel        $v0, $v1, . + 4 + (0xB << 2)
label_1e624c:
    if (ctx->pc == 0x1E624Cu) {
        ctx->pc = 0x1E624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6248u;
        // 0x1e624c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6250u;
        goto label_1e6250;
    }
    ctx->pc = 0x1E6248u;
    {
        const bool branch_taken_0x1e6248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e6248) {
            ctx->pc = 0x1E624Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E6248u;
            // 0x1e624c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E6278u;
            goto label_1e6278;
        }
    }
    ctx->pc = 0x1E6250u;
label_1e6250:
    // 0x1e6250: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e6250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e6254:
    // 0x1e6254: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1e6254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1e6258:
    // 0x1e6258: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1e625c:
    if (ctx->pc == 0x1E625Cu) {
        ctx->pc = 0x1E625Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6258u;
        // 0x1e625c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6260u;
        goto label_1e6260;
    }
    ctx->pc = 0x1E6258u;
    {
        const bool branch_taken_0x1e6258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E625Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6258u;
        // 0x1e625c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6258) {
            ctx->pc = 0x1E6274u;
            goto label_1e6274;
        }
    }
    ctx->pc = 0x1E6260u;
label_1e6260:
    // 0x1e6260: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1e6260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1e6264:
    // 0x1e6264: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1e6268:
    if (ctx->pc == 0x1E6268u) {
        ctx->pc = 0x1E6268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6264u;
        // 0x1e6268: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E626Cu;
        goto label_1e626c;
    }
    ctx->pc = 0x1E6264u;
    {
        const bool branch_taken_0x1e6264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6264) {
            ctx->pc = 0x1E6268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E6264u;
            // 0x1e6268: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E6278u;
            goto label_1e6278;
        }
    }
    ctx->pc = 0x1E626Cu;
label_1e626c:
    // 0x1e626c: 0x40f809  jalr        $v0
label_1e6270:
    if (ctx->pc == 0x1E6270u) {
        ctx->pc = 0x1E6274u;
        goto label_1e6274;
    }
    ctx->pc = 0x1E626Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E6274u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E626Cu, 0x1E6274u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E6274u;
label_1e6274:
    // 0x1e6274: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e6274u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e6278:
    // 0x1e6278: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e6278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e627c:
    // 0x1e627c: 0x3e00008  jr          $ra
label_1e6280:
    if (ctx->pc == 0x1E6280u) {
        ctx->pc = 0x1E6280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E627Cu;
        // 0x1e6280: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6284u;
        goto label_1e6284;
    }
    ctx->pc = 0x1E627Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E627Cu;
        // 0x1e6280: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E627Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6284u;
label_1e6284:
    // 0x1e6284: 0x0  nop
    ctx->pc = 0x1e6284u;
    // NOP
    if (ctx->pc == 0x1e6284u) { ctx->pc = 0x1e6288u; }
}
