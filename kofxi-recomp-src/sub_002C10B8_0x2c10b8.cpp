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

// Function: sub_002C10B8
// Address: 0x2c10b8 - 0x2c11b8
void sub_002C10B8_0x2c10b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C10B8_0x2c10b8");
#endif

    switch (ctx->pc) {
        case 0x2c10fcu: goto label_2c10fc;
        case 0x2c1120u: goto label_2c1120;
        case 0x2c1134u: goto label_2c1134;
        case 0x2c1144u: goto label_2c1144;
        case 0x2c1154u: goto label_2c1154;
        case 0x2c1194u: goto label_2c1194;
        default: break;
    }

    ctx->pc = 0x2c10b8u;

    // 0x2c10b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c10b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c10bc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2c10bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2c10c0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2c10c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2c10c4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2c10c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c10c8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c10c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c10cc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2c10ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c10d0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2c10d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c10d4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2c10d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c10d8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2c10d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c10dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c10dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c10e0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C10E0u;
    {
        const bool branch_taken_0x2c10e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C10E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C10E0u;
        // 0x2c10e4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c10e0) {
            ctx->pc = 0x2C10F4u;
            goto label_2c10f4;
        }
    }
    ctx->pc = 0x2C10E8u;
    // 0x2c10e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c10e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c10ec: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C10ECu;
    {
        const bool branch_taken_0x2c10ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C10F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C10ECu;
        // 0x2c10f0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c10ec) {
            ctx->pc = 0x2C1128u;
            goto label_2c1128;
        }
    }
    ctx->pc = 0x2C10F4u;
label_2c10f4:
    // 0x2c10f4: 0xc0b1180  jal         func_2C4600
    ctx->pc = 0x2C10F4u;
    SET_GPR_U32(ctx, 31, 0x2C10FCu);
    ctx->pc = 0x2C4600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4600u, 0x2C10F4u, 0x2C10FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C10FCu;
label_2c10fc:
    // 0x2c10fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c10fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1100: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C1100u;
    {
        const bool branch_taken_0x2c1100 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C1104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1100u;
        // 0x2c1104: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1100) {
            ctx->pc = 0x2C112Cu;
            goto label_2c112c;
        }
    }
    ctx->pc = 0x2C1108u;
    // 0x2c1108: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2c1108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2c110c: 0x240500de  addiu       $a1, $zero, 0xDE
    ctx->pc = 0x2c110cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 222));
    // 0x2c1110: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2c1110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2c1114: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c1114u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1118: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2C1118u;
    SET_GPR_U32(ctx, 31, 0x2C1120u);
    ctx->pc = 0x2C111Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1118u;
    // 0x2c111c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2C1118u, 0x2C1120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1120u;
label_2c1120:
    // 0x2c1120: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2C1120u;
    {
        const bool branch_taken_0x2c1120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1120u;
        // 0x2c1124: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1120) {
            ctx->pc = 0x2C1198u;
            goto label_2c1198;
        }
    }
    ctx->pc = 0x2C1128u;
label_2c1128:
    // 0x2c1128: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c1128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c112c:
    // 0x2c112c: 0xc0b046e  jal         func_2C11B8
    ctx->pc = 0x2C112Cu;
    SET_GPR_U32(ctx, 31, 0x2C1134u);
    ctx->pc = 0x2C1130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C112Cu;
    // 0x2c1130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C11B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C11B8u, 0x2C112Cu, 0x2C1134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1134u;
label_2c1134:
    // 0x2c1134: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C1134u;
    {
        const bool branch_taken_0x2c1134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1134u;
        // 0x2c1138: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1134) {
            ctx->pc = 0x2C1178u;
            goto label_2c1178;
        }
    }
    ctx->pc = 0x2C113Cu;
    // 0x2c113c: 0xc0b0484  jal         func_2C1210
    ctx->pc = 0x2C113Cu;
    SET_GPR_U32(ctx, 31, 0x2C1144u);
    ctx->pc = 0x2C1140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C113Cu;
    // 0x2c1140: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1210u, 0x2C113Cu, 0x2C1144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1144u;
label_2c1144:
    // 0x2c1144: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C1144u;
    {
        const bool branch_taken_0x2c1144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1144u;
        // 0x2c1148: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1144) {
            ctx->pc = 0x2C1178u;
            goto label_2c1178;
        }
    }
    ctx->pc = 0x2C114Cu;
    // 0x2c114c: 0xc0b0490  jal         func_2C1240
    ctx->pc = 0x2C114Cu;
    SET_GPR_U32(ctx, 31, 0x2C1154u);
    ctx->pc = 0x2C1150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C114Cu;
    // 0x2c1150: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1240u, 0x2C114Cu, 0x2C1154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1154u;
label_2c1154:
    // 0x2c1154: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C1154u;
    {
        const bool branch_taken_0x2c1154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1154) {
            ctx->pc = 0x2C1178u;
            goto label_2c1178;
        }
    }
    ctx->pc = 0x2C115Cu;
    // 0x2c115c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x2C115Cu;
    {
        const bool branch_taken_0x2c115c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C115Cu;
        // 0x2c1160: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c115c) {
            ctx->pc = 0x2C1198u;
            goto label_2c1198;
        }
    }
    ctx->pc = 0x2C1164u;
    // 0x2c1164: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c1164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c1168: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2C1168u;
    {
        const bool branch_taken_0x2c1168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1168) {
            ctx->pc = 0x2C116Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1168u;
            // 0x2c116c: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1170u;
            goto label_2c1170;
        }
    }
    ctx->pc = 0x2C1170u;
label_2c1170:
    // 0x2c1170: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C1170u;
    {
        const bool branch_taken_0x2c1170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1170u;
        // 0x2c1174: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1170) {
            ctx->pc = 0x2C1198u;
            goto label_2c1198;
        }
    }
    ctx->pc = 0x2C1178u;
label_2c1178:
    // 0x2c1178: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C1178u;
    {
        const bool branch_taken_0x2c1178 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1178) {
            ctx->pc = 0x2C118Cu;
            goto label_2c118c;
        }
    }
    ctx->pc = 0x2C1180u;
    // 0x2c1180: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c1180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c1184: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C1184u;
    {
        const bool branch_taken_0x2c1184 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C1188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1184u;
        // 0x2c1188: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1184) {
            ctx->pc = 0x2C1198u;
            goto label_2c1198;
        }
    }
    ctx->pc = 0x2C118Cu;
label_2c118c:
    // 0x2c118c: 0xc0b11a4  jal         func_2C4690
    ctx->pc = 0x2C118Cu;
    SET_GPR_U32(ctx, 31, 0x2C1194u);
    ctx->pc = 0x2C1190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C118Cu;
    // 0x2c1190: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4690u, 0x2C118Cu, 0x2C1194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1194u;
label_2c1194:
    // 0x2c1194: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c1194u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c1198:
    // 0x2c1198: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c1198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c119c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2c119cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c11a0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2c11a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c11a4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c11a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c11a8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c11a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c11ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c11acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c11b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C11B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C11B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C11B0u;
        // 0x2c11b4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C11B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C11B8u;
}
