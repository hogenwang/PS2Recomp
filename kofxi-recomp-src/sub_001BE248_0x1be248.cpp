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

// Function: sub_001BE248
// Address: 0x1be248 - 0x1be2d0
void sub_001BE248_0x1be248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE248_0x1be248");
#endif

    switch (ctx->pc) {
        case 0x1be248u: goto label_1be248;
        case 0x1be24cu: goto label_1be24c;
        case 0x1be250u: goto label_1be250;
        case 0x1be254u: goto label_1be254;
        case 0x1be258u: goto label_1be258;
        case 0x1be25cu: goto label_1be25c;
        case 0x1be260u: goto label_1be260;
        case 0x1be264u: goto label_1be264;
        case 0x1be268u: goto label_1be268;
        case 0x1be26cu: goto label_1be26c;
        case 0x1be270u: goto label_1be270;
        case 0x1be274u: goto label_1be274;
        case 0x1be278u: goto label_1be278;
        case 0x1be27cu: goto label_1be27c;
        case 0x1be280u: goto label_1be280;
        case 0x1be284u: goto label_1be284;
        case 0x1be288u: goto label_1be288;
        case 0x1be28cu: goto label_1be28c;
        case 0x1be290u: goto label_1be290;
        case 0x1be294u: goto label_1be294;
        case 0x1be298u: goto label_1be298;
        case 0x1be29cu: goto label_1be29c;
        case 0x1be2a0u: goto label_1be2a0;
        case 0x1be2a4u: goto label_1be2a4;
        case 0x1be2a8u: goto label_1be2a8;
        case 0x1be2acu: goto label_1be2ac;
        case 0x1be2b0u: goto label_1be2b0;
        case 0x1be2b4u: goto label_1be2b4;
        case 0x1be2b8u: goto label_1be2b8;
        case 0x1be2bcu: goto label_1be2bc;
        case 0x1be2c0u: goto label_1be2c0;
        case 0x1be2c4u: goto label_1be2c4;
        case 0x1be2c8u: goto label_1be2c8;
        case 0x1be2ccu: goto label_1be2cc;
        default: break;
    }

    ctx->pc = 0x1be248u;

label_1be248:
    // 0x1be248: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1be248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1be24c:
    // 0x1be24c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1be24cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1be250:
    // 0x1be250: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_1be254:
    if (ctx->pc == 0x1BE254u) {
        ctx->pc = 0x1BE254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE250u;
        // 0x1be254: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE258u;
        goto label_1be258;
    }
    ctx->pc = 0x1BE250u;
    {
        const bool branch_taken_0x1be250 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE250u;
        // 0x1be254: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be250) {
            ctx->pc = 0x1BE270u;
            goto label_1be270;
        }
    }
    ctx->pc = 0x1BE258u;
label_1be258:
    // 0x1be258: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1be258u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1be25c:
    // 0x1be25c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be25cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1be260:
    // 0x1be260: 0x24848a08  addiu       $a0, $a0, -0x75F8
    ctx->pc = 0x1be260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937096));
label_1be264:
    // 0x1be264: 0x806f838  j           func_1BE0E0
label_1be268:
    if (ctx->pc == 0x1BE268u) {
        ctx->pc = 0x1BE268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE264u;
        // 0x1be268: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE26Cu;
        goto label_1be26c;
    }
    ctx->pc = 0x1BE264u;
    ctx->pc = 0x1BE268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE264u;
    // 0x1be268: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0E0u;
    sub_001BE0E0_0x1be0e0(rdram, ctx, runtime); return;
    ctx->pc = 0x1BE26Cu;
label_1be26c:
    // 0x1be26c: 0x0  nop
    ctx->pc = 0x1be26cu;
    // NOP
label_1be270:
    // 0x1be270: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1be274:
    if (ctx->pc == 0x1BE274u) {
        ctx->pc = 0x1BE274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE270u;
        // 0x1be274: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE278u;
        goto label_1be278;
    }
    ctx->pc = 0x1BE270u;
    {
        const bool branch_taken_0x1be270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE270u;
        // 0x1be274: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be270) {
            ctx->pc = 0x1BE288u;
            goto label_1be288;
        }
    }
    ctx->pc = 0x1BE278u;
label_1be278:
    // 0x1be278: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1be278u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1be27c:
    // 0x1be27c: 0x24848a30  addiu       $a0, $a0, -0x75D0
    ctx->pc = 0x1be27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937136));
label_1be280:
    // 0x1be280: 0x806f838  j           func_1BE0E0
label_1be284:
    if (ctx->pc == 0x1BE284u) {
        ctx->pc = 0x1BE284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE280u;
        // 0x1be284: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE288u;
        goto label_1be288;
    }
    ctx->pc = 0x1BE280u;
    ctx->pc = 0x1BE284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE280u;
    // 0x1be284: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0E0u;
    sub_001BE0E0_0x1be0e0(rdram, ctx, runtime); return;
    ctx->pc = 0x1BE288u;
label_1be288:
    // 0x1be288: 0xc06f8b4  jal         func_1BE2D0
label_1be28c:
    if (ctx->pc == 0x1BE28Cu) {
        ctx->pc = 0x1BE290u;
        goto label_1be290;
    }
    ctx->pc = 0x1BE288u;
    SET_GPR_U32(ctx, 31, 0x1BE290u);
    ctx->pc = 0x1BE2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE2D0u, 0x1BE288u, 0x1BE290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE290u;
label_1be290:
    // 0x1be290: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1be290u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1be294:
    // 0x1be294: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1be298:
    if (ctx->pc == 0x1BE298u) {
        ctx->pc = 0x1BE298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE294u;
        // 0x1be298: 0x24848a58  addiu       $a0, $a0, -0x75A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE29Cu;
        goto label_1be29c;
    }
    ctx->pc = 0x1BE294u;
    {
        const bool branch_taken_0x1be294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE294u;
        // 0x1be298: 0x24848a58  addiu       $a0, $a0, -0x75A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be294) {
            ctx->pc = 0x1BE2A8u;
            goto label_1be2a8;
        }
    }
    ctx->pc = 0x1BE29Cu;
label_1be29c:
    // 0x1be29c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be29cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1be2a0:
    // 0x1be2a0: 0x806f838  j           func_1BE0E0
label_1be2a4:
    if (ctx->pc == 0x1BE2A4u) {
        ctx->pc = 0x1BE2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE2A0u;
        // 0x1be2a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE2A8u;
        goto label_1be2a8;
    }
    ctx->pc = 0x1BE2A0u;
    ctx->pc = 0x1BE2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE2A0u;
    // 0x1be2a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0E0u;
    sub_001BE0E0_0x1be0e0(rdram, ctx, runtime); return;
    ctx->pc = 0x1BE2A8u;
label_1be2a8:
    // 0x1be2a8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1be2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1be2ac:
    // 0x1be2ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1be2b0:
    if (ctx->pc == 0x1BE2B0u) {
        ctx->pc = 0x1BE2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE2ACu;
        // 0x1be2b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE2B4u;
        goto label_1be2b4;
    }
    ctx->pc = 0x1BE2ACu;
    {
        const bool branch_taken_0x1be2ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE2ACu;
        // 0x1be2b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be2ac) {
            ctx->pc = 0x1BE2C0u;
            goto label_1be2c0;
        }
    }
    ctx->pc = 0x1BE2B4u;
label_1be2b4:
    // 0x1be2b4: 0x3c04001c  lui         $a0, 0x1C
    ctx->pc = 0x1be2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28 << 16));
label_1be2b8:
    // 0x1be2b8: 0x40f809  jalr        $v0
label_1be2bc:
    if (ctx->pc == 0x1BE2BCu) {
        ctx->pc = 0x1BE2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE2B8u;
        // 0x1be2bc: 0x2484e0b0  addiu       $a0, $a0, -0x1F50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE2C0u;
        goto label_1be2c0;
    }
    ctx->pc = 0x1BE2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BE2C0u);
        ctx->pc = 0x1BE2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE2B8u;
        // 0x1be2bc: 0x2484e0b0  addiu       $a0, $a0, -0x1F50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959280));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE2B8u, 0x1BE2C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BE2C0u;
label_1be2c0:
    // 0x1be2c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be2c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1be2c4:
    // 0x1be2c4: 0x3e00008  jr          $ra
label_1be2c8:
    if (ctx->pc == 0x1BE2C8u) {
        ctx->pc = 0x1BE2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE2C4u;
        // 0x1be2c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE2CCu;
        goto label_1be2cc;
    }
    ctx->pc = 0x1BE2C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE2C4u;
        // 0x1be2c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE2C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE2CCu;
label_1be2cc:
    // 0x1be2cc: 0x0  nop
    ctx->pc = 0x1be2ccu;
    // NOP
}
