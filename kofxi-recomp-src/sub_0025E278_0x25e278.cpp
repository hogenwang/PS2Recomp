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

// Function: sub_0025E278
// Address: 0x25e278 - 0x25e380
void sub_0025E278_0x25e278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E278_0x25e278");
#endif

    switch (ctx->pc) {
        case 0x25e278u: goto label_25e278;
        case 0x25e27cu: goto label_25e27c;
        case 0x25e280u: goto label_25e280;
        case 0x25e284u: goto label_25e284;
        case 0x25e288u: goto label_25e288;
        case 0x25e28cu: goto label_25e28c;
        case 0x25e290u: goto label_25e290;
        case 0x25e294u: goto label_25e294;
        case 0x25e298u: goto label_25e298;
        case 0x25e29cu: goto label_25e29c;
        case 0x25e2a0u: goto label_25e2a0;
        case 0x25e2a4u: goto label_25e2a4;
        case 0x25e2a8u: goto label_25e2a8;
        case 0x25e2acu: goto label_25e2ac;
        case 0x25e2b0u: goto label_25e2b0;
        case 0x25e2b4u: goto label_25e2b4;
        case 0x25e2b8u: goto label_25e2b8;
        case 0x25e2bcu: goto label_25e2bc;
        case 0x25e2c0u: goto label_25e2c0;
        case 0x25e2c4u: goto label_25e2c4;
        case 0x25e2c8u: goto label_25e2c8;
        case 0x25e2ccu: goto label_25e2cc;
        case 0x25e2d0u: goto label_25e2d0;
        case 0x25e2d4u: goto label_25e2d4;
        case 0x25e2d8u: goto label_25e2d8;
        case 0x25e2dcu: goto label_25e2dc;
        case 0x25e2e0u: goto label_25e2e0;
        case 0x25e2e4u: goto label_25e2e4;
        case 0x25e2e8u: goto label_25e2e8;
        case 0x25e2ecu: goto label_25e2ec;
        case 0x25e2f0u: goto label_25e2f0;
        case 0x25e2f4u: goto label_25e2f4;
        case 0x25e2f8u: goto label_25e2f8;
        case 0x25e2fcu: goto label_25e2fc;
        case 0x25e300u: goto label_25e300;
        case 0x25e304u: goto label_25e304;
        case 0x25e308u: goto label_25e308;
        case 0x25e30cu: goto label_25e30c;
        case 0x25e310u: goto label_25e310;
        case 0x25e314u: goto label_25e314;
        case 0x25e318u: goto label_25e318;
        case 0x25e31cu: goto label_25e31c;
        case 0x25e320u: goto label_25e320;
        case 0x25e324u: goto label_25e324;
        case 0x25e328u: goto label_25e328;
        case 0x25e32cu: goto label_25e32c;
        case 0x25e330u: goto label_25e330;
        case 0x25e334u: goto label_25e334;
        case 0x25e338u: goto label_25e338;
        case 0x25e33cu: goto label_25e33c;
        case 0x25e340u: goto label_25e340;
        case 0x25e344u: goto label_25e344;
        case 0x25e348u: goto label_25e348;
        case 0x25e34cu: goto label_25e34c;
        case 0x25e350u: goto label_25e350;
        case 0x25e354u: goto label_25e354;
        case 0x25e358u: goto label_25e358;
        case 0x25e35cu: goto label_25e35c;
        case 0x25e360u: goto label_25e360;
        case 0x25e364u: goto label_25e364;
        case 0x25e368u: goto label_25e368;
        case 0x25e36cu: goto label_25e36c;
        case 0x25e370u: goto label_25e370;
        case 0x25e374u: goto label_25e374;
        case 0x25e378u: goto label_25e378;
        case 0x25e37cu: goto label_25e37c;
        default: break;
    }

    ctx->pc = 0x25e278u;

label_25e278:
    // 0x25e278: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x25e278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_25e27c:
    // 0x25e27c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x25e27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_25e280:
    // 0x25e280: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x25e280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_25e284:
    // 0x25e284: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x25e284u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_25e288:
    // 0x25e288: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25e288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_25e28c:
    // 0x25e28c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x25e28cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_25e290:
    // 0x25e290: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x25e290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_25e294:
    // 0x25e294: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25e294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25e298:
    // 0x25e298: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x25e298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_25e29c:
    // 0x25e29c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x25e29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_25e2a0:
    // 0x25e2a0: 0xc09728e  jal         func_25CA38
label_25e2a4:
    if (ctx->pc == 0x25E2A4u) {
        ctx->pc = 0x25E2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E2A0u;
        // 0x25e2a4: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E2A8u;
        goto label_25e2a8;
    }
    ctx->pc = 0x25E2A0u;
    SET_GPR_U32(ctx, 31, 0x25E2A8u);
    ctx->pc = 0x25E2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E2A0u;
    // 0x25e2a4: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CA38u, 0x25E2A0u, 0x25E2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E2A8u;
label_25e2a8:
    // 0x25e2a8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x25e2a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25e2ac:
    // 0x25e2ac: 0x1260002b  beqz        $s3, . + 4 + (0x2B << 2)
label_25e2b0:
    if (ctx->pc == 0x25E2B0u) {
        ctx->pc = 0x25E2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E2ACu;
        // 0x25e2b0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E2B4u;
        goto label_25e2b4;
    }
    ctx->pc = 0x25E2ACu;
    {
        const bool branch_taken_0x25e2ac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E2ACu;
        // 0x25e2b0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e2ac) {
            ctx->pc = 0x25E35Cu;
            goto label_25e35c;
        }
    }
    ctx->pc = 0x25E2B4u;
label_25e2b4:
    // 0x25e2b4: 0xc08c0ca  jal         func_230328
label_25e2b8:
    if (ctx->pc == 0x25E2B8u) {
        ctx->pc = 0x25E2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E2B4u;
        // 0x25e2b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E2BCu;
        goto label_25e2bc;
    }
    ctx->pc = 0x25E2B4u;
    SET_GPR_U32(ctx, 31, 0x25E2BCu);
    ctx->pc = 0x25E2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E2B4u;
    // 0x25e2b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230328u, 0x25E2B4u, 0x25E2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E2BCu;
label_25e2bc:
    // 0x25e2bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25e2bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25e2c0:
    // 0x25e2c0: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_25e2c4:
    if (ctx->pc == 0x25E2C4u) {
        ctx->pc = 0x25E2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E2C0u;
        // 0x25e2c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E2C8u;
        goto label_25e2c8;
    }
    ctx->pc = 0x25E2C0u;
    {
        const bool branch_taken_0x25e2c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E2C0u;
        // 0x25e2c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e2c0) {
            ctx->pc = 0x25E2D0u;
            goto label_25e2d0;
        }
    }
    ctx->pc = 0x25E2C8u;
label_25e2c8:
    // 0x25e2c8: 0x1000001f  b           . + 4 + (0x1F << 2)
label_25e2cc:
    if (ctx->pc == 0x25E2CCu) {
        ctx->pc = 0x25E2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E2C8u;
        // 0x25e2cc: 0x24100009  addiu       $s0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E2D0u;
        goto label_25e2d0;
    }
    ctx->pc = 0x25E2C8u;
    {
        const bool branch_taken_0x25e2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E2C8u;
        // 0x25e2cc: 0x24100009  addiu       $s0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e2c8) {
            ctx->pc = 0x25E348u;
            goto label_25e348;
        }
    }
    ctx->pc = 0x25E2D0u;
label_25e2d0:
    // 0x25e2d0: 0xc0973a6  jal         func_25CE98
label_25e2d4:
    if (ctx->pc == 0x25E2D4u) {
        ctx->pc = 0x25E2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E2D0u;
        // 0x25e2d4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E2D8u;
        goto label_25e2d8;
    }
    ctx->pc = 0x25E2D0u;
    SET_GPR_U32(ctx, 31, 0x25E2D8u);
    ctx->pc = 0x25E2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E2D0u;
    // 0x25e2d4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE98u, 0x25E2D0u, 0x25E2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E2D8u;
label_25e2d8:
    // 0x25e2d8: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x25e2d8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_25e2dc:
    // 0x25e2dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x25e2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25e2e0:
    // 0x25e2e0: 0xc08a96c  jal         func_22A5B0
label_25e2e4:
    if (ctx->pc == 0x25E2E4u) {
        ctx->pc = 0x25E2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E2E0u;
        // 0x25e2e4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E2E8u;
        goto label_25e2e8;
    }
    ctx->pc = 0x25E2E0u;
    SET_GPR_U32(ctx, 31, 0x25E2E8u);
    ctx->pc = 0x25E2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E2E0u;
    // 0x25e2e4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A5B0u, 0x25E2E0u, 0x25E2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E2E8u;
label_25e2e8:
    // 0x25e2e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25e2e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25e2ec:
    // 0x25e2ec: 0x56200003  bnel        $s1, $zero, . + 4 + (0x3 << 2)
label_25e2f0:
    if (ctx->pc == 0x25E2F0u) {
        ctx->pc = 0x25E2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E2ECu;
        // 0x25e2f0: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E2F4u;
        goto label_25e2f4;
    }
    ctx->pc = 0x25E2ECu;
    {
        const bool branch_taken_0x25e2ec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x25e2ec) {
            ctx->pc = 0x25E2F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25E2ECu;
            // 0x25e2f0: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25E2FCu;
            goto label_25e2fc;
        }
    }
    ctx->pc = 0x25E2F4u;
label_25e2f4:
    // 0x25e2f4: 0x10000014  b           . + 4 + (0x14 << 2)
label_25e2f8:
    if (ctx->pc == 0x25E2F8u) {
        ctx->pc = 0x25E2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E2F4u;
        // 0x25e2f8: 0x2410000c  addiu       $s0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E2FCu;
        goto label_25e2fc;
    }
    ctx->pc = 0x25E2F4u;
    {
        const bool branch_taken_0x25e2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E2F4u;
        // 0x25e2f8: 0x2410000c  addiu       $s0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e2f4) {
            ctx->pc = 0x25E348u;
            goto label_25e348;
        }
    }
    ctx->pc = 0x25E2FCu;
label_25e2fc:
    // 0x25e2fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25e300:
    // 0x25e300: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x25e300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_25e304:
    // 0x25e304: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25e304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25e308:
    // 0x25e308: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x25e308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_25e30c:
    // 0x25e30c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x25e30cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25e310:
    // 0x25e310: 0x40f809  jalr        $v0
label_25e314:
    if (ctx->pc == 0x25E314u) {
        ctx->pc = 0x25E314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E310u;
        // 0x25e314: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E318u;
        goto label_25e318;
    }
    ctx->pc = 0x25E310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25E318u);
        ctx->pc = 0x25E314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E310u;
        // 0x25e314: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E310u, 0x25E318u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25E318u;
label_25e318:
    // 0x25e318: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25e318u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25e31c:
    // 0x25e31c: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_25e320:
    if (ctx->pc == 0x25E320u) {
        ctx->pc = 0x25E320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E31Cu;
        // 0x25e320: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E324u;
        goto label_25e324;
    }
    ctx->pc = 0x25E31Cu;
    {
        const bool branch_taken_0x25e31c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E31Cu;
        // 0x25e320: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e31c) {
            ctx->pc = 0x25E340u;
            goto label_25e340;
        }
    }
    ctx->pc = 0x25E324u;
label_25e324:
    // 0x25e324: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x25e324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_25e328:
    // 0x25e328: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x25e328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_25e32c:
    // 0x25e32c: 0x72102b  sltu        $v0, $v1, $s2
    ctx->pc = 0x25e32cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_25e330:
    // 0x25e330: 0x62900b  movn        $s2, $v1, $v0
    ctx->pc = 0x25e330u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_25e334:
    // 0x25e334: 0xc08b4f8  jal         func_22D3E0
label_25e338:
    if (ctx->pc == 0x25E338u) {
        ctx->pc = 0x25E338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E334u;
        // 0x25e338: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E33Cu;
        goto label_25e33c;
    }
    ctx->pc = 0x25E334u;
    SET_GPR_U32(ctx, 31, 0x25E33Cu);
    ctx->pc = 0x25E338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E334u;
    // 0x25e338: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x25E334u, 0x25E33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E33Cu;
label_25e33c:
    // 0x25e33c: 0xae920000  sw          $s2, 0x0($s4)
    ctx->pc = 0x25e33cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 18));
label_25e340:
    // 0x25e340: 0xc08a9d6  jal         func_22A758
label_25e344:
    if (ctx->pc == 0x25E344u) {
        ctx->pc = 0x25E344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E340u;
        // 0x25e344: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E348u;
        goto label_25e348;
    }
    ctx->pc = 0x25E340u;
    SET_GPR_U32(ctx, 31, 0x25E348u);
    ctx->pc = 0x25E344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E340u;
    // 0x25e344: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x25E340u, 0x25E348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E348u;
label_25e348:
    // 0x25e348: 0xc0973ac  jal         func_25CEB0
label_25e34c:
    if (ctx->pc == 0x25E34Cu) {
        ctx->pc = 0x25E34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E348u;
        // 0x25e34c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E350u;
        goto label_25e350;
    }
    ctx->pc = 0x25E348u;
    SET_GPR_U32(ctx, 31, 0x25E350u);
    ctx->pc = 0x25E34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E348u;
    // 0x25e34c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CEB0u, 0x25E348u, 0x25E350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E350u;
label_25e350:
    // 0x25e350: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25e350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25e354:
    // 0x25e354: 0xc0972da  jal         func_25CB68
label_25e358:
    if (ctx->pc == 0x25E358u) {
        ctx->pc = 0x25E358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E354u;
        // 0x25e358: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E35Cu;
        goto label_25e35c;
    }
    ctx->pc = 0x25E354u;
    SET_GPR_U32(ctx, 31, 0x25E35Cu);
    ctx->pc = 0x25E358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E354u;
    // 0x25e358: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB68u, 0x25E354u, 0x25E35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E35Cu;
label_25e35c:
    // 0x25e35c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x25e35cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_25e360:
    // 0x25e360: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x25e360u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_25e364:
    // 0x25e364: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x25e364u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_25e368:
    // 0x25e368: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x25e368u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_25e36c:
    // 0x25e36c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x25e36cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_25e370:
    // 0x25e370: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x25e370u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_25e374:
    // 0x25e374: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25e374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25e378:
    // 0x25e378: 0x3e00008  jr          $ra
label_25e37c:
    if (ctx->pc == 0x25E37Cu) {
        ctx->pc = 0x25E37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E378u;
        // 0x25e37c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E380u;
        goto label_fallthrough_0x25e378;
    }
    ctx->pc = 0x25E378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E378u;
        // 0x25e37c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25e378:
    ctx->pc = 0x25E380u;
}
