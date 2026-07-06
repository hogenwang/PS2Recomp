#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00125EC8
// Address: 0x125ec8 - 0x125f58
void sub_00125EC8_0x125ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125EC8_0x125ec8");
#endif

    switch (ctx->pc) {
        case 0x125ec8u: goto label_125ec8;
        case 0x125eccu: goto label_125ecc;
        case 0x125ed0u: goto label_125ed0;
        case 0x125ed4u: goto label_125ed4;
        case 0x125ed8u: goto label_125ed8;
        case 0x125edcu: goto label_125edc;
        case 0x125ee0u: goto label_125ee0;
        case 0x125ee4u: goto label_125ee4;
        case 0x125ee8u: goto label_125ee8;
        case 0x125eecu: goto label_125eec;
        case 0x125ef0u: goto label_125ef0;
        case 0x125ef4u: goto label_125ef4;
        case 0x125ef8u: goto label_125ef8;
        case 0x125efcu: goto label_125efc;
        case 0x125f00u: goto label_125f00;
        case 0x125f04u: goto label_125f04;
        case 0x125f08u: goto label_125f08;
        case 0x125f0cu: goto label_125f0c;
        case 0x125f10u: goto label_125f10;
        case 0x125f14u: goto label_125f14;
        case 0x125f18u: goto label_125f18;
        case 0x125f1cu: goto label_125f1c;
        case 0x125f20u: goto label_125f20;
        case 0x125f24u: goto label_125f24;
        case 0x125f28u: goto label_125f28;
        case 0x125f2cu: goto label_125f2c;
        case 0x125f30u: goto label_125f30;
        case 0x125f34u: goto label_125f34;
        case 0x125f38u: goto label_125f38;
        case 0x125f3cu: goto label_125f3c;
        case 0x125f40u: goto label_125f40;
        case 0x125f44u: goto label_125f44;
        case 0x125f48u: goto label_125f48;
        case 0x125f4cu: goto label_125f4c;
        case 0x125f50u: goto label_125f50;
        case 0x125f54u: goto label_125f54;
        default: break;
    }

    ctx->pc = 0x125ec8u;

label_125ec8:
    // 0x125ec8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x125ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_125ecc:
    // 0x125ecc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x125eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_125ed0:
    // 0x125ed0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x125ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_125ed4:
    // 0x125ed4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x125ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_125ed8:
    // 0x125ed8: 0x249201d8  addiu       $s2, $a0, 0x1D8
    ctx->pc = 0x125ed8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 472));
label_125edc:
    // 0x125edc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x125edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_125ee0:
    // 0x125ee0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x125ee0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125ee4:
    // 0x125ee4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x125ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_125ee8:
    // 0x125ee8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x125ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_125eec:
    // 0x125eec: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
label_125ef0:
    if (ctx->pc == 0x125EF0u) {
        ctx->pc = 0x125EF0u;
            // 0x125ef0: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x125EF4u;
        goto label_125ef4;
    }
    ctx->pc = 0x125EECu;
    {
        const bool branch_taken_0x125eec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x125EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125EECu;
            // 0x125ef0: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125eec) {
            ctx->pc = 0x125F34u;
            goto label_125f34;
        }
    }
    ctx->pc = 0x125EF4u;
label_125ef4:
    // 0x125ef4: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x125ef4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_125ef8:
    // 0x125ef8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x125ef8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_125efc:
    // 0x125efc: 0x620000a  bltz        $s1, . + 4 + (0xA << 2)
label_125f00:
    if (ctx->pc == 0x125F00u) {
        ctx->pc = 0x125F00u;
            // 0x125f00: 0x8e500008  lw          $s0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->pc = 0x125F04u;
        goto label_125f04;
    }
    ctx->pc = 0x125EFCu;
    {
        const bool branch_taken_0x125efc = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x125F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125EFCu;
            // 0x125f00: 0x8e500008  lw          $s0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125efc) {
            ctx->pc = 0x125F28u;
            goto label_125f28;
        }
    }
    ctx->pc = 0x125F04u;
label_125f04:
    // 0x125f04: 0x860f000c  lh          $t7, 0xC($s0)
    ctx->pc = 0x125f04u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_125f08:
    // 0x125f08: 0x51e00005  beql        $t7, $zero, . + 4 + (0x5 << 2)
label_125f0c:
    if (ctx->pc == 0x125F0Cu) {
        ctx->pc = 0x125F0Cu;
            // 0x125f0c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->pc = 0x125F10u;
        goto label_125f10;
    }
    ctx->pc = 0x125F08u;
    {
        const bool branch_taken_0x125f08 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x125f08) {
            ctx->pc = 0x125F0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x125F08u;
            // 0x125f0c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x125F20u;
            goto label_125f20;
        }
    }
    ctx->pc = 0x125F10u;
label_125f10:
    // 0x125f10: 0x280f809  jalr        $s4
label_125f14:
    if (ctx->pc == 0x125F14u) {
        ctx->pc = 0x125F14u;
            // 0x125f14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x125F18u;
        goto label_125f18;
    }
    ctx->pc = 0x125F10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x125F18u);
        ctx->pc = 0x125F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125F10u;
            // 0x125f14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x125F18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x125F18u; }
            if (ctx->pc != 0x125F18u) { return; }
        }
        }
    }
    ctx->pc = 0x125F18u;
label_125f18:
    // 0x125f18: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x125f18u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_125f1c:
    // 0x125f1c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x125f1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_125f20:
    // 0x125f20: 0x621fff8  bgez        $s1, . + 4 + (-0x8 << 2)
label_125f24:
    if (ctx->pc == 0x125F24u) {
        ctx->pc = 0x125F24u;
            // 0x125f24: 0x26100058  addiu       $s0, $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
        ctx->pc = 0x125F28u;
        goto label_125f28;
    }
    ctx->pc = 0x125F20u;
    {
        const bool branch_taken_0x125f20 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x125F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125F20u;
            // 0x125f24: 0x26100058  addiu       $s0, $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125f20) {
            ctx->pc = 0x125F04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125f04;
        }
    }
    ctx->pc = 0x125F28u;
label_125f28:
    // 0x125f28: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x125f28u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_125f2c:
    // 0x125f2c: 0x5640fff2  bnel        $s2, $zero, . + 4 + (-0xE << 2)
label_125f30:
    if (ctx->pc == 0x125F30u) {
        ctx->pc = 0x125F30u;
            // 0x125f30: 0x8e510004  lw          $s1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x125F34u;
        goto label_125f34;
    }
    ctx->pc = 0x125F2Cu;
    {
        const bool branch_taken_0x125f2c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x125f2c) {
            ctx->pc = 0x125F30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x125F2Cu;
            // 0x125f30: 0x8e510004  lw          $s1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x125EF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125ef8;
        }
    }
    ctx->pc = 0x125F34u;
label_125f34:
    // 0x125f34: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x125f34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_125f38:
    // 0x125f38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x125f38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_125f3c:
    // 0x125f3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x125f3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_125f40:
    // 0x125f40: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x125f40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_125f44:
    // 0x125f44: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x125f44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_125f48:
    // 0x125f48: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x125f48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_125f4c:
    // 0x125f4c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x125f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_125f50:
    // 0x125f50: 0x3e00008  jr          $ra
label_125f54:
    if (ctx->pc == 0x125F54u) {
        ctx->pc = 0x125F54u;
            // 0x125f54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x125F58u;
        goto label_fallthrough_0x125f50;
    }
    ctx->pc = 0x125F50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125F50u;
            // 0x125f54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x125f50:
    ctx->pc = 0x125F58u;
    ctx->pc = 0x125f58u;
}
