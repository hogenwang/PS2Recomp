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

// Function: sub_0022E310
// Address: 0x22e310 - 0x22e3b8
void sub_0022E310_0x22e310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E310_0x22e310");
#endif

    switch (ctx->pc) {
        case 0x22e310u: goto label_22e310;
        case 0x22e314u: goto label_22e314;
        case 0x22e318u: goto label_22e318;
        case 0x22e31cu: goto label_22e31c;
        case 0x22e320u: goto label_22e320;
        case 0x22e324u: goto label_22e324;
        case 0x22e328u: goto label_22e328;
        case 0x22e32cu: goto label_22e32c;
        case 0x22e330u: goto label_22e330;
        case 0x22e334u: goto label_22e334;
        case 0x22e338u: goto label_22e338;
        case 0x22e33cu: goto label_22e33c;
        case 0x22e340u: goto label_22e340;
        case 0x22e344u: goto label_22e344;
        case 0x22e348u: goto label_22e348;
        case 0x22e34cu: goto label_22e34c;
        case 0x22e350u: goto label_22e350;
        case 0x22e354u: goto label_22e354;
        case 0x22e358u: goto label_22e358;
        case 0x22e35cu: goto label_22e35c;
        case 0x22e360u: goto label_22e360;
        case 0x22e364u: goto label_22e364;
        case 0x22e368u: goto label_22e368;
        case 0x22e36cu: goto label_22e36c;
        case 0x22e370u: goto label_22e370;
        case 0x22e374u: goto label_22e374;
        case 0x22e378u: goto label_22e378;
        case 0x22e37cu: goto label_22e37c;
        case 0x22e380u: goto label_22e380;
        case 0x22e384u: goto label_22e384;
        case 0x22e388u: goto label_22e388;
        case 0x22e38cu: goto label_22e38c;
        case 0x22e390u: goto label_22e390;
        case 0x22e394u: goto label_22e394;
        case 0x22e398u: goto label_22e398;
        case 0x22e39cu: goto label_22e39c;
        case 0x22e3a0u: goto label_22e3a0;
        case 0x22e3a4u: goto label_22e3a4;
        case 0x22e3a8u: goto label_22e3a8;
        case 0x22e3acu: goto label_22e3ac;
        case 0x22e3b0u: goto label_22e3b0;
        case 0x22e3b4u: goto label_22e3b4;
        default: break;
    }

    ctx->pc = 0x22e310u;

label_22e310:
    // 0x22e310: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22e310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_22e314:
    // 0x22e314: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22e314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_22e318:
    // 0x22e318: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22e318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_22e31c:
    // 0x22e31c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22e31cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22e320:
    // 0x22e320: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22e320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_22e324:
    // 0x22e324: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22e324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_22e328:
    // 0x22e328: 0xc08c682  jal         func_231A08
label_22e32c:
    if (ctx->pc == 0x22E32Cu) {
        ctx->pc = 0x22E32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E328u;
        // 0x22e32c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E330u;
        goto label_22e330;
    }
    ctx->pc = 0x22E328u;
    SET_GPR_U32(ctx, 31, 0x22E330u);
    ctx->pc = 0x22E32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E328u;
    // 0x22e32c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x22E328u, 0x22E330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E330u;
label_22e330:
    // 0x22e330: 0x96030006  lhu         $v1, 0x6($s0)
    ctx->pc = 0x22e330u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_22e334:
    // 0x22e334: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x22e334u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22e338:
    // 0x22e338: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x22e338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_22e33c:
    // 0x22e33c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_22e340:
    if (ctx->pc == 0x22E340u) {
        ctx->pc = 0x22E340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E33Cu;
        // 0x22e340: 0x3062fffe  andi        $v0, $v1, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E344u;
        goto label_22e344;
    }
    ctx->pc = 0x22E33Cu;
    {
        const bool branch_taken_0x22e33c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E33Cu;
        // 0x22e340: 0x3062fffe  andi        $v0, $v1, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e33c) {
            ctx->pc = 0x22E358u;
            goto label_22e358;
        }
    }
    ctx->pc = 0x22E344u;
label_22e344:
    // 0x22e344: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x22e344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_22e348:
    // 0x22e348: 0xc08b5e0  jal         func_22D780
label_22e34c:
    if (ctx->pc == 0x22E34Cu) {
        ctx->pc = 0x22E34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E348u;
        // 0x22e34c: 0x24844680  addiu       $a0, $a0, 0x4680 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E350u;
        goto label_22e350;
    }
    ctx->pc = 0x22E348u;
    SET_GPR_U32(ctx, 31, 0x22E350u);
    ctx->pc = 0x22E34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E348u;
    // 0x22e34c: 0x24844680  addiu       $a0, $a0, 0x4680 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D780u, 0x22E348u, 0x22E350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E350u;
label_22e350:
    // 0x22e350: 0x96030006  lhu         $v1, 0x6($s0)
    ctx->pc = 0x22e350u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_22e354:
    // 0x22e354: 0x3062fffe  andi        $v0, $v1, 0xFFFE
    ctx->pc = 0x22e354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
label_22e358:
    // 0x22e358: 0x30430800  andi        $v1, $v0, 0x800
    ctx->pc = 0x22e358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_22e35c:
    // 0x22e35c: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_22e360:
    if (ctx->pc == 0x22E360u) {
        ctx->pc = 0x22E360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E35Cu;
        // 0x22e360: 0xa6020006  sh          $v0, 0x6($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E364u;
        goto label_22e364;
    }
    ctx->pc = 0x22E35Cu;
    {
        const bool branch_taken_0x22e35c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E35Cu;
        // 0x22e360: 0xa6020006  sh          $v0, 0x6($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e35c) {
            ctx->pc = 0x22E38Cu;
            goto label_22e38c;
        }
    }
    ctx->pc = 0x22E364u;
label_22e364:
    // 0x22e364: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x22e364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_22e368:
    // 0x22e368: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22e368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22e36c:
    // 0x22e36c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x22e36cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22e370:
    // 0x22e370: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x22e370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_22e374:
    // 0x22e374: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x22e374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_22e378:
    // 0x22e378: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22e378u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e37c:
    // 0x22e37c: 0x40f809  jalr        $v0
label_22e380:
    if (ctx->pc == 0x22E380u) {
        ctx->pc = 0x22E380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E37Cu;
        // 0x22e380: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E384u;
        goto label_22e384;
    }
    ctx->pc = 0x22E37Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22E384u);
        ctx->pc = 0x22E380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E37Cu;
        // 0x22e380: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E37Cu, 0x22E384u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22E384u;
label_22e384:
    // 0x22e384: 0x10000002  b           . + 4 + (0x2 << 2)
label_22e388:
    if (ctx->pc == 0x22E388u) {
        ctx->pc = 0x22E388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E384u;
        // 0x22e388: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E38Cu;
        goto label_22e38c;
    }
    ctx->pc = 0x22E384u;
    {
        const bool branch_taken_0x22e384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E384u;
        // 0x22e388: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e384) {
            ctx->pc = 0x22E390u;
            goto label_22e390;
        }
    }
    ctx->pc = 0x22E38Cu;
label_22e38c:
    // 0x22e38c: 0x24100071  addiu       $s0, $zero, 0x71
    ctx->pc = 0x22e38cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
label_22e390:
    // 0x22e390: 0xc08c698  jal         func_231A60
label_22e394:
    if (ctx->pc == 0x22E394u) {
        ctx->pc = 0x22E394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E390u;
        // 0x22e394: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E398u;
        goto label_22e398;
    }
    ctx->pc = 0x22E390u;
    SET_GPR_U32(ctx, 31, 0x22E398u);
    ctx->pc = 0x22E394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E390u;
    // 0x22e394: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x22E390u, 0x22E398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E398u;
label_22e398:
    // 0x22e398: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22e398u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22e39c:
    // 0x22e39c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22e39cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_22e3a0:
    // 0x22e3a0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22e3a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22e3a4:
    // 0x22e3a4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22e3a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22e3a8:
    // 0x22e3a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22e3a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22e3ac:
    // 0x22e3ac: 0x3e00008  jr          $ra
label_22e3b0:
    if (ctx->pc == 0x22E3B0u) {
        ctx->pc = 0x22E3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E3ACu;
        // 0x22e3b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E3B4u;
        goto label_22e3b4;
    }
    ctx->pc = 0x22E3ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E3ACu;
        // 0x22e3b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E3ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E3B4u;
label_22e3b4:
    // 0x22e3b4: 0x0  nop
    ctx->pc = 0x22e3b4u;
    // NOP
}
