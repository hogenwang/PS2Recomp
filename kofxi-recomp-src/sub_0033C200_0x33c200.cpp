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

// Function: sub_0033C200
// Address: 0x33c200 - 0x33c3d0
void sub_0033C200_0x33c200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033C200_0x33c200");
#endif

    switch (ctx->pc) {
        case 0x33c22cu: goto label_33c22c;
        case 0x33c310u: goto label_33c310;
        case 0x33c38cu: goto label_33c38c;
        case 0x33c3a8u: goto label_33c3a8;
        case 0x33c3bcu: goto label_33c3bc;
        default: break;
    }

    ctx->pc = 0x33c200u;

    // 0x33c200: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33c200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33c204: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x33c204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x33c208: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33c208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33c20c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x33C20Cu;
    {
        const bool branch_taken_0x33c20c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C20Cu;
        // 0x33c210: 0x3088ffff  andi        $t0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c20c) {
            ctx->pc = 0x33C234u;
            goto label_33c234;
        }
    }
    ctx->pc = 0x33C214u;
    // 0x33c214: 0x31023f00  andi        $v0, $t0, 0x3F00
    ctx->pc = 0x33c214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16128);
    // 0x33c218: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33C218u;
    {
        const bool branch_taken_0x33c218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c218) {
            ctx->pc = 0x33C234u;
            goto label_33c234;
        }
    }
    ctx->pc = 0x33C220u;
    // 0x33c220: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x33c220u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x33c224: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x33C224u;
    SET_GPR_U32(ctx, 31, 0x33C22Cu);
    ctx->pc = 0x33C228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C224u;
    // 0x33c228: 0x24843158  addiu       $a0, $a0, 0x3158 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x33C224u, 0x33C22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C22Cu;
label_33c22c:
    // 0x33c22c: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x33C22Cu;
    {
        const bool branch_taken_0x33c22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C22Cu;
        // 0x33c230: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c22c) {
            ctx->pc = 0x33C3C0u;
            goto label_33c3c0;
        }
    }
    ctx->pc = 0x33C234u;
label_33c234:
    // 0x33c234: 0x50600038  beql        $v1, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x33C234u;
    {
        const bool branch_taken_0x33c234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c234) {
            ctx->pc = 0x33C238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33C234u;
            // 0x33c238: 0x31033f00  andi        $v1, $t0, 0x3F00 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16128);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33C318u;
            goto label_33c318;
        }
    }
    ctx->pc = 0x33C23Cu;
    // 0x33c23c: 0x31040001  andi        $a0, $t0, 0x1
    ctx->pc = 0x33c23cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x33c240: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x33C240u;
    {
        const bool branch_taken_0x33c240 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c240) {
            ctx->pc = 0x33C244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33C240u;
            // 0x33c244: 0x31030002  andi        $v1, $t0, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33C260u;
            goto label_33c260;
        }
    }
    ctx->pc = 0x33C248u;
    // 0x33c248: 0x31020008  andi        $v0, $t0, 0x8
    ctx->pc = 0x33c248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)8);
    // 0x33c24c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33C24Cu;
    {
        const bool branch_taken_0x33c24c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c24c) {
            ctx->pc = 0x33C25Cu;
            goto label_33c25c;
        }
    }
    ctx->pc = 0x33C254u;
    // 0x33c254: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x33C254u;
    {
        const bool branch_taken_0x33c254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C254u;
        // 0x33c258: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c254) {
            ctx->pc = 0x33C2F0u;
            goto label_33c2f0;
        }
    }
    ctx->pc = 0x33C25Cu;
label_33c25c:
    // 0x33c25c: 0x31030002  andi        $v1, $t0, 0x2
    ctx->pc = 0x33c25cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2);
label_33c260:
    // 0x33c260: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x33C260u;
    {
        const bool branch_taken_0x33c260 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c260) {
            ctx->pc = 0x33C27Cu;
            goto label_33c27c;
        }
    }
    ctx->pc = 0x33C268u;
    // 0x33c268: 0x31020008  andi        $v0, $t0, 0x8
    ctx->pc = 0x33c268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)8);
    // 0x33c26c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33C26Cu;
    {
        const bool branch_taken_0x33c26c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c26c) {
            ctx->pc = 0x33C27Cu;
            goto label_33c27c;
        }
    }
    ctx->pc = 0x33C274u;
    // 0x33c274: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x33C274u;
    {
        const bool branch_taken_0x33c274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C274u;
        // 0x33c278: 0x64020003  daddiu      $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c274) {
            ctx->pc = 0x33C2F0u;
            goto label_33c2f0;
        }
    }
    ctx->pc = 0x33C27Cu;
label_33c27c:
    // 0x33c27c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x33C27Cu;
    {
        const bool branch_taken_0x33c27c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c27c) {
            ctx->pc = 0x33C298u;
            goto label_33c298;
        }
    }
    ctx->pc = 0x33C284u;
    // 0x33c284: 0x31020004  andi        $v0, $t0, 0x4
    ctx->pc = 0x33c284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4);
    // 0x33c288: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33C288u;
    {
        const bool branch_taken_0x33c288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c288) {
            ctx->pc = 0x33C298u;
            goto label_33c298;
        }
    }
    ctx->pc = 0x33C290u;
    // 0x33c290: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x33C290u;
    {
        const bool branch_taken_0x33c290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C290u;
        // 0x33c294: 0x64020005  daddiu      $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)5);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c290) {
            ctx->pc = 0x33C2F0u;
            goto label_33c2f0;
        }
    }
    ctx->pc = 0x33C298u;
label_33c298:
    // 0x33c298: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33C298u;
    {
        const bool branch_taken_0x33c298 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c298) {
            ctx->pc = 0x33C2B4u;
            goto label_33c2b4;
        }
    }
    ctx->pc = 0x33C2A0u;
    // 0x33c2a0: 0x31020004  andi        $v0, $t0, 0x4
    ctx->pc = 0x33c2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4);
    // 0x33c2a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33C2A4u;
    {
        const bool branch_taken_0x33c2a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c2a4) {
            ctx->pc = 0x33C2B4u;
            goto label_33c2b4;
        }
    }
    ctx->pc = 0x33C2ACu;
    // 0x33c2ac: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x33C2ACu;
    {
        const bool branch_taken_0x33c2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C2ACu;
        // 0x33c2b0: 0x64020007  daddiu      $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c2ac) {
            ctx->pc = 0x33C2F0u;
            goto label_33c2f0;
        }
    }
    ctx->pc = 0x33C2B4u;
label_33c2b4:
    // 0x33c2b4: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x33C2B4u;
    {
        const bool branch_taken_0x33c2b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c2b4) {
            ctx->pc = 0x33C2B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33C2B4u;
            // 0x33c2b8: 0x31020008  andi        $v0, $t0, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33C2C4u;
            goto label_33c2c4;
        }
    }
    ctx->pc = 0x33C2BCu;
    // 0x33c2bc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x33C2BCu;
    {
        const bool branch_taken_0x33c2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C2BCu;
        // 0x33c2c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c2bc) {
            ctx->pc = 0x33C2F0u;
            goto label_33c2f0;
        }
    }
    ctx->pc = 0x33C2C4u;
label_33c2c4:
    // 0x33c2c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33C2C4u;
    {
        const bool branch_taken_0x33c2c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c2c4) {
            ctx->pc = 0x33C2D4u;
            goto label_33c2d4;
        }
    }
    ctx->pc = 0x33C2CCu;
    // 0x33c2cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33C2CCu;
    {
        const bool branch_taken_0x33c2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C2CCu;
        // 0x33c2d0: 0x64020002  daddiu      $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c2cc) {
            ctx->pc = 0x33C2F0u;
            goto label_33c2f0;
        }
    }
    ctx->pc = 0x33C2D4u;
label_33c2d4:
    // 0x33c2d4: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x33C2D4u;
    {
        const bool branch_taken_0x33c2d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c2d4) {
            ctx->pc = 0x33C2D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33C2D4u;
            // 0x33c2d8: 0x31020004  andi        $v0, $t0, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33C2E4u;
            goto label_33c2e4;
        }
    }
    ctx->pc = 0x33C2DCu;
    // 0x33c2dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x33C2DCu;
    {
        const bool branch_taken_0x33c2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C2DCu;
        // 0x33c2e0: 0x64020004  daddiu      $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c2dc) {
            ctx->pc = 0x33C2F0u;
            goto label_33c2f0;
        }
    }
    ctx->pc = 0x33C2E4u;
label_33c2e4:
    // 0x33c2e4: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x33C2E4u;
    {
        const bool branch_taken_0x33c2e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c2e4) {
            ctx->pc = 0x33C2E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33C2E4u;
            // 0x33c2e8: 0x6402000f  daddiu      $v0, $zero, 0xF (Delay Slot)
            SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)15);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33C2F0u;
            goto label_33c2f0;
        }
    }
    ctx->pc = 0x33C2ECu;
    // 0x33c2ec: 0x64020006  daddiu      $v0, $zero, 0x6
    ctx->pc = 0x33c2ecu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)6);
label_33c2f0:
    // 0x33c2f0: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x33c2f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33c2f4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x33c2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x33c2f8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x33c2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x33c2fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33c2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33c300: 0x244230b0  addiu       $v0, $v0, 0x30B0
    ctx->pc = 0x33c300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12464));
    // 0x33c304: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33c304u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33c308: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x33C308u;
    SET_GPR_U32(ctx, 31, 0x33C310u);
    ctx->pc = 0x33C30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C308u;
    // 0x33c30c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x33C308u, 0x33C310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C310u;
label_33c310:
    // 0x33c310: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x33C310u;
    {
        const bool branch_taken_0x33c310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c310) {
            ctx->pc = 0x33C3BCu;
            goto label_33c3bc;
        }
    }
    ctx->pc = 0x33C318u;
label_33c318:
    // 0x33c318: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x33C318u;
    {
        const bool branch_taken_0x33c318 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c318) {
            ctx->pc = 0x33C394u;
            goto label_33c394;
        }
    }
    ctx->pc = 0x33C320u;
    // 0x33c320: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x33c320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x33c324: 0x50620011  beql        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x33C324u;
    {
        const bool branch_taken_0x33c324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33c324) {
            ctx->pc = 0x33C328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33C324u;
            // 0x33c328: 0x6402000c  daddiu      $v0, $zero, 0xC (Delay Slot)
            SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)12);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33C36Cu;
            goto label_33c36c;
        }
    }
    ctx->pc = 0x33C32Cu;
    // 0x33c32c: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x33c32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x33c330: 0x5062000e  beql        $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x33C330u;
    {
        const bool branch_taken_0x33c330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33c330) {
            ctx->pc = 0x33C334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33C330u;
            // 0x33c334: 0x6402000d  daddiu      $v0, $zero, 0xD (Delay Slot)
            SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)13);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33C36Cu;
            goto label_33c36c;
        }
    }
    ctx->pc = 0x33C338u;
    // 0x33c338: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x33c338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x33c33c: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x33C33Cu;
    {
        const bool branch_taken_0x33c33c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33c33c) {
            ctx->pc = 0x33C340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33C33Cu;
            // 0x33c340: 0x6402000a  daddiu      $v0, $zero, 0xA (Delay Slot)
            SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)10);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33C36Cu;
            goto label_33c36c;
        }
    }
    ctx->pc = 0x33C344u;
    // 0x33c344: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x33c344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x33c348: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33C348u;
    {
        const bool branch_taken_0x33c348 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33c348) {
            ctx->pc = 0x33C34Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33C348u;
            // 0x33c34c: 0x64020008  daddiu      $v0, $zero, 0x8 (Delay Slot)
            SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33C36Cu;
            goto label_33c36c;
        }
    }
    ctx->pc = 0x33C350u;
    // 0x33c350: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x33c350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x33c354: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33C354u;
    {
        const bool branch_taken_0x33c354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33c354) {
            ctx->pc = 0x33C358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33C354u;
            // 0x33c358: 0x6402000b  daddiu      $v0, $zero, 0xB (Delay Slot)
            SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)11);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33C36Cu;
            goto label_33c36c;
        }
    }
    ctx->pc = 0x33C35Cu;
    // 0x33c35c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x33c35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x33c360: 0x50620002  beql        $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x33C360u;
    {
        const bool branch_taken_0x33c360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33c360) {
            ctx->pc = 0x33C364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33C360u;
            // 0x33c364: 0x64020009  daddiu      $v0, $zero, 0x9 (Delay Slot)
            SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)9);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33C36Cu;
            goto label_33c36c;
        }
    }
    ctx->pc = 0x33C368u;
    // 0x33c368: 0x6402000e  daddiu      $v0, $zero, 0xE
    ctx->pc = 0x33c368u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)14);
label_33c36c:
    // 0x33c36c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x33c36cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33c370: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x33c370u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x33c374: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x33c374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x33c378: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33c378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33c37c: 0x244230b0  addiu       $v0, $v0, 0x30B0
    ctx->pc = 0x33c37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12464));
    // 0x33c380: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33c380u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33c384: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x33C384u;
    SET_GPR_U32(ctx, 31, 0x33C38Cu);
    ctx->pc = 0x33C388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C384u;
    // 0x33c388: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x33C384u, 0x33C38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C38Cu;
label_33c38c:
    // 0x33c38c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x33C38Cu;
    {
        const bool branch_taken_0x33c38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c38c) {
            ctx->pc = 0x33C3BCu;
            goto label_33c3bc;
        }
    }
    ctx->pc = 0x33C394u;
label_33c394:
    // 0x33c394: 0x14e00006  bnez        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x33C394u;
    {
        const bool branch_taken_0x33c394 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x33c394) {
            ctx->pc = 0x33C3B0u;
            goto label_33c3b0;
        }
    }
    ctx->pc = 0x33C39Cu;
    // 0x33c39c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x33c39cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x33c3a0: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x33C3A0u;
    SET_GPR_U32(ctx, 31, 0x33C3A8u);
    ctx->pc = 0x33C3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C3A0u;
    // 0x33c3a4: 0x24843164  addiu       $a0, $a0, 0x3164 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12644));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x33C3A0u, 0x33C3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C3A8u;
label_33c3a8:
    // 0x33c3a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x33C3A8u;
    {
        const bool branch_taken_0x33c3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c3a8) {
            ctx->pc = 0x33C3BCu;
            goto label_33c3bc;
        }
    }
    ctx->pc = 0x33C3B0u;
label_33c3b0:
    // 0x33c3b0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x33c3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x33c3b4: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x33C3B4u;
    SET_GPR_U32(ctx, 31, 0x33C3BCu);
    ctx->pc = 0x33C3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C3B4u;
    // 0x33c3b8: 0x248432e4  addiu       $a0, $a0, 0x32E4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13028));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x33C3B4u, 0x33C3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C3BCu;
label_33c3bc:
    // 0x33c3bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33c3bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33c3c0:
    // 0x33c3c0: 0x3e00008  jr          $ra
    ctx->pc = 0x33C3C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C3C0u;
        // 0x33c3c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C3C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C3C8u;
    // 0x33c3c8: 0x0  nop
    ctx->pc = 0x33c3c8u;
    // NOP
    // 0x33c3cc: 0x0  nop
    ctx->pc = 0x33c3ccu;
    // NOP
    if (ctx->pc == 0x33c3ccu) { ctx->pc = 0x33c3d0u; }
}
