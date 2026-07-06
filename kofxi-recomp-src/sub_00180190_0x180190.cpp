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

// Function: sub_00180190
// Address: 0x180190 - 0x180230
void sub_00180190_0x180190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180190_0x180190");
#endif

    switch (ctx->pc) {
        case 0x180220u: goto label_180220;
        default: break;
    }

    ctx->pc = 0x180190u;

    // 0x180190: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x180190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x180194: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x180194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x180198: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x180198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18019c: 0x90a2000c  lbu         $v0, 0xC($a1)
    ctx->pc = 0x18019cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1801a0: 0x2442ffe4  addiu       $v0, $v0, -0x1C
    ctx->pc = 0x1801a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967268));
    // 0x1801a4: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x1801a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1801a8: 0x10c30018  beq         $a2, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1801A8u;
    {
        const bool branch_taken_0x1801a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x1801ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1801A8u;
        // 0x1801ac: 0x8c870518  lw          $a3, 0x518($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1801a8) {
            ctx->pc = 0x18020Cu;
            goto label_18020c;
        }
    }
    ctx->pc = 0x1801B0u;
    // 0x1801b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1801b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1801b4: 0x50c2000d  beql        $a2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1801B4u;
    {
        const bool branch_taken_0x1801b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1801b4) {
            ctx->pc = 0x1801B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1801B4u;
            // 0x1801b8: 0x90e20280  lbu         $v0, 0x280($a3) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 640)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1801ECu;
            goto label_1801ec;
        }
    }
    ctx->pc = 0x1801BCu;
    // 0x1801bc: 0x50c00003  beql        $a2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1801BCu;
    {
        const bool branch_taken_0x1801bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1801bc) {
            ctx->pc = 0x1801C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1801BCu;
            // 0x1801c0: 0x90e20280  lbu         $v0, 0x280($a3) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 640)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1801CCu;
            goto label_1801cc;
        }
    }
    ctx->pc = 0x1801C4u;
    // 0x1801c4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1801C4u;
    {
        const bool branch_taken_0x1801c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1801c4) {
            ctx->pc = 0x180218u;
            goto label_180218;
        }
    }
    ctx->pc = 0x1801CCu;
label_1801cc:
    // 0x1801cc: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1801ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1801d0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1801D0u;
    {
        const bool branch_taken_0x1801d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1801d0) {
            ctx->pc = 0x1801D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1801D0u;
            // 0x1801d4: 0x8c820530  lw          $v0, 0x530($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1801E0u;
            goto label_1801e0;
        }
    }
    ctx->pc = 0x1801D8u;
    // 0x1801d8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1801D8u;
    {
        const bool branch_taken_0x1801d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1801DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1801D8u;
        // 0x1801dc: 0xa0a3000c  sb          $v1, 0xC($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 12), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1801d8) {
            ctx->pc = 0x180218u;
            goto label_180218;
        }
    }
    ctx->pc = 0x1801E0u;
label_1801e0:
    // 0x1801e0: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x1801e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x1801e4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1801E4u;
    {
        const bool branch_taken_0x1801e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1801E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1801E4u;
        // 0x1801e8: 0xac820530  sw          $v0, 0x530($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1801e4) {
            ctx->pc = 0x180218u;
            goto label_180218;
        }
    }
    ctx->pc = 0x1801ECu;
label_1801ec:
    // 0x1801ec: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1801ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1801f0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1801F0u;
    {
        const bool branch_taken_0x1801f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1801f0) {
            ctx->pc = 0x1801F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1801F0u;
            // 0x1801f4: 0x8c820530  lw          $v0, 0x530($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180200u;
            goto label_180200;
        }
    }
    ctx->pc = 0x1801F8u;
    // 0x1801f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1801F8u;
    {
        const bool branch_taken_0x1801f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1801FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1801F8u;
        // 0x1801fc: 0xa0a3000c  sb          $v1, 0xC($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 12), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1801f8) {
            ctx->pc = 0x180218u;
            goto label_180218;
        }
    }
    ctx->pc = 0x180200u;
label_180200:
    // 0x180200: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x180200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x180204: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x180204u;
    {
        const bool branch_taken_0x180204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180204u;
        // 0x180208: 0xac820530  sw          $v0, 0x530($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180204) {
            ctx->pc = 0x180218u;
            goto label_180218;
        }
    }
    ctx->pc = 0x18020Cu;
label_18020c:
    // 0x18020c: 0x8c820530  lw          $v0, 0x530($a0)
    ctx->pc = 0x18020cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1328)));
    // 0x180210: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x180210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x180214: 0xac820530  sw          $v0, 0x530($a0)
    ctx->pc = 0x180214u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1328), GPR_U32(ctx, 2));
label_180218:
    // 0x180218: 0xc0cead0  jal         func_33AB40
    ctx->pc = 0x180218u;
    SET_GPR_U32(ctx, 31, 0x180220u);
    ctx->pc = 0x33AB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AB40u, 0x180218u, 0x180220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180220u;
label_180220:
    // 0x180220: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180224: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x180224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x180228: 0x3e00008  jr          $ra
    ctx->pc = 0x180228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180228u;
        // 0x18022c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180230u;
}
