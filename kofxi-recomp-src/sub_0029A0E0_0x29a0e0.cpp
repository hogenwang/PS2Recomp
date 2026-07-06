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

// Function: sub_0029A0E0
// Address: 0x29a0e0 - 0x29a1c8
void sub_0029A0E0_0x29a0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A0E0_0x29a0e0");
#endif

    switch (ctx->pc) {
        case 0x29a0e0u: goto label_29a0e0;
        case 0x29a0e4u: goto label_29a0e4;
        case 0x29a0e8u: goto label_29a0e8;
        case 0x29a0ecu: goto label_29a0ec;
        case 0x29a0f0u: goto label_29a0f0;
        case 0x29a0f4u: goto label_29a0f4;
        case 0x29a0f8u: goto label_29a0f8;
        case 0x29a0fcu: goto label_29a0fc;
        case 0x29a100u: goto label_29a100;
        case 0x29a104u: goto label_29a104;
        case 0x29a108u: goto label_29a108;
        case 0x29a10cu: goto label_29a10c;
        case 0x29a110u: goto label_29a110;
        case 0x29a114u: goto label_29a114;
        case 0x29a118u: goto label_29a118;
        case 0x29a11cu: goto label_29a11c;
        case 0x29a120u: goto label_29a120;
        case 0x29a124u: goto label_29a124;
        case 0x29a128u: goto label_29a128;
        case 0x29a12cu: goto label_29a12c;
        case 0x29a130u: goto label_29a130;
        case 0x29a134u: goto label_29a134;
        case 0x29a138u: goto label_29a138;
        case 0x29a13cu: goto label_29a13c;
        case 0x29a140u: goto label_29a140;
        case 0x29a144u: goto label_29a144;
        case 0x29a148u: goto label_29a148;
        case 0x29a14cu: goto label_29a14c;
        case 0x29a150u: goto label_29a150;
        case 0x29a154u: goto label_29a154;
        case 0x29a158u: goto label_29a158;
        case 0x29a15cu: goto label_29a15c;
        case 0x29a160u: goto label_29a160;
        case 0x29a164u: goto label_29a164;
        case 0x29a168u: goto label_29a168;
        case 0x29a16cu: goto label_29a16c;
        case 0x29a170u: goto label_29a170;
        case 0x29a174u: goto label_29a174;
        case 0x29a178u: goto label_29a178;
        case 0x29a17cu: goto label_29a17c;
        case 0x29a180u: goto label_29a180;
        case 0x29a184u: goto label_29a184;
        case 0x29a188u: goto label_29a188;
        case 0x29a18cu: goto label_29a18c;
        case 0x29a190u: goto label_29a190;
        case 0x29a194u: goto label_29a194;
        case 0x29a198u: goto label_29a198;
        case 0x29a19cu: goto label_29a19c;
        case 0x29a1a0u: goto label_29a1a0;
        case 0x29a1a4u: goto label_29a1a4;
        case 0x29a1a8u: goto label_29a1a8;
        case 0x29a1acu: goto label_29a1ac;
        case 0x29a1b0u: goto label_29a1b0;
        case 0x29a1b4u: goto label_29a1b4;
        case 0x29a1b8u: goto label_29a1b8;
        case 0x29a1bcu: goto label_29a1bc;
        case 0x29a1c0u: goto label_29a1c0;
        case 0x29a1c4u: goto label_29a1c4;
        default: break;
    }

    ctx->pc = 0x29a0e0u;

label_29a0e0:
    // 0x29a0e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29a0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_29a0e4:
    // 0x29a0e4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x29a0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_29a0e8:
    // 0x29a0e8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x29a0e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29a0ec:
    // 0x29a0ec: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x29a0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_29a0f0:
    // 0x29a0f0: 0x8c445308  lw          $a0, 0x5308($v0)
    ctx->pc = 0x29a0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21256)));
label_29a0f4:
    // 0x29a0f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29a0f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29a0f8:
    // 0x29a0f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29a0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_29a0fc:
    // 0x29a0fc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x29a0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_29a100:
    // 0x29a100: 0x1080001f  beqz        $a0, . + 4 + (0x1F << 2)
label_29a104:
    if (ctx->pc == 0x29A104u) {
        ctx->pc = 0x29A104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A100u;
        // 0x29a104: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A108u;
        goto label_29a108;
    }
    ctx->pc = 0x29A100u;
    {
        const bool branch_taken_0x29a100 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A100u;
        // 0x29a104: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a100) {
            ctx->pc = 0x29A180u;
            goto label_29a180;
        }
    }
    ctx->pc = 0x29A108u;
label_29a108:
    // 0x29a108: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x29a108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_29a10c:
    // 0x29a10c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x29a10cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_29a110:
    // 0x29a110: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x29a110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
label_29a114:
    // 0x29a114: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29a114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29a118:
    // 0x29a118: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x29a118u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_29a11c:
    // 0x29a11c: 0xc0a6218  jal         func_298860
label_29a120:
    if (ctx->pc == 0x29A120u) {
        ctx->pc = 0x29A120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A11Cu;
        // 0x29a120: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A124u;
        goto label_29a124;
    }
    ctx->pc = 0x29A11Cu;
    SET_GPR_U32(ctx, 31, 0x29A124u);
    ctx->pc = 0x29A120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A11Cu;
    // 0x29a120: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298860u, 0x29A11Cu, 0x29A124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A124u;
label_29a124:
    // 0x29a124: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29a124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29a128:
    // 0x29a128: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
label_29a12c:
    if (ctx->pc == 0x29A12Cu) {
        ctx->pc = 0x29A12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A128u;
        // 0x29a12c: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A130u;
        goto label_29a130;
    }
    ctx->pc = 0x29A128u;
    {
        const bool branch_taken_0x29a128 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A128u;
        // 0x29a12c: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a128) {
            ctx->pc = 0x29A17Cu;
            goto label_29a17c;
        }
    }
    ctx->pc = 0x29A130u;
label_29a130:
    // 0x29a130: 0x8c435318  lw          $v1, 0x5318($v0)
    ctx->pc = 0x29a130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21272)));
label_29a134:
    // 0x29a134: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_29a138:
    if (ctx->pc == 0x29A138u) {
        ctx->pc = 0x29A13Cu;
        goto label_29a13c;
    }
    ctx->pc = 0x29A134u;
    {
        const bool branch_taken_0x29a134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a134) {
            ctx->pc = 0x29A16Cu;
            goto label_29a16c;
        }
    }
    ctx->pc = 0x29A13Cu;
label_29a13c:
    // 0x29a13c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x29a13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_29a140:
    // 0x29a140: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x29a140u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_29a144:
    // 0x29a144: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_29a148:
    if (ctx->pc == 0x29A148u) {
        ctx->pc = 0x29A14Cu;
        goto label_29a14c;
    }
    ctx->pc = 0x29A144u;
    {
        const bool branch_taken_0x29a144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a144) {
            ctx->pc = 0x29A16Cu;
            goto label_29a16c;
        }
    }
    ctx->pc = 0x29A14Cu;
label_29a14c:
    // 0x29a14c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x29a14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_29a150:
    // 0x29a150: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x29a150u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_29a154:
    // 0x29a154: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x29a154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_29a158:
    // 0x29a158: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29a158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_29a15c:
    // 0x29a15c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x29a15cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29a160:
    // 0x29a160: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x29a160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_29a164:
    // 0x29a164: 0x40f809  jalr        $v0
label_29a168:
    if (ctx->pc == 0x29A168u) {
        ctx->pc = 0x29A168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A164u;
        // 0x29a168: 0x8e06000c  lw          $a2, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A16Cu;
        goto label_29a16c;
    }
    ctx->pc = 0x29A164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29A16Cu);
        ctx->pc = 0x29A168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A164u;
        // 0x29a168: 0x8e06000c  lw          $a2, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A164u, 0x29A16Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29A16Cu;
label_29a16c:
    // 0x29a16c: 0xc0a8c0a  jal         func_2A3028
label_29a170:
    if (ctx->pc == 0x29A170u) {
        ctx->pc = 0x29A170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A16Cu;
        // 0x29a170: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A174u;
        goto label_29a174;
    }
    ctx->pc = 0x29A16Cu;
    SET_GPR_U32(ctx, 31, 0x29A174u);
    ctx->pc = 0x29A170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A16Cu;
    // 0x29a170: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x29A16Cu, 0x29A174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A174u;
label_29a174:
    // 0x29a174: 0x10000002  b           . + 4 + (0x2 << 2)
label_29a178:
    if (ctx->pc == 0x29A178u) {
        ctx->pc = 0x29A178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A174u;
        // 0x29a178: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A17Cu;
        goto label_29a17c;
    }
    ctx->pc = 0x29A174u;
    {
        const bool branch_taken_0x29a174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A174u;
        // 0x29a178: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a174) {
            ctx->pc = 0x29A180u;
            goto label_29a180;
        }
    }
    ctx->pc = 0x29A17Cu;
label_29a17c:
    // 0x29a17c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29a17cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29a180:
    // 0x29a180: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29a180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29a184:
    // 0x29a184: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x29a184u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29a188:
    // 0x29a188: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x29a188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29a18c:
    // 0x29a18c: 0x3e00008  jr          $ra
label_29a190:
    if (ctx->pc == 0x29A190u) {
        ctx->pc = 0x29A190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A18Cu;
        // 0x29a190: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A194u;
        goto label_29a194;
    }
    ctx->pc = 0x29A18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A18Cu;
        // 0x29a190: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A18Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A194u;
label_29a194:
    // 0x29a194: 0x0  nop
    ctx->pc = 0x29a194u;
    // NOP
label_29a198:
    // 0x29a198: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x29a198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_29a19c:
    // 0x29a19c: 0x8c4348a8  lw          $v1, 0x48A8($v0)
    ctx->pc = 0x29a19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18600)));
label_29a1a0:
    // 0x29a1a0: 0x4620005  bltzl       $v1, . + 4 + (0x5 << 2)
label_29a1a4:
    if (ctx->pc == 0x29A1A4u) {
        ctx->pc = 0x29A1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A1A0u;
        // 0x29a1a4: 0x8c850000  lw          $a1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A1A8u;
        goto label_29a1a8;
    }
    ctx->pc = 0x29A1A0u;
    {
        const bool branch_taken_0x29a1a0 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x29a1a0) {
            ctx->pc = 0x29A1A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29A1A0u;
            // 0x29a1a4: 0x8c850000  lw          $a1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29A1B8u;
            goto label_29a1b8;
        }
    }
    ctx->pc = 0x29A1A8u;
label_29a1a8:
    // 0x29a1a8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x29a1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29a1ac:
    // 0x29a1ac: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_29a1b0:
    if (ctx->pc == 0x29A1B0u) {
        ctx->pc = 0x29A1B4u;
        goto label_29a1b4;
    }
    ctx->pc = 0x29A1ACu;
    {
        const bool branch_taken_0x29a1ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29a1ac) {
            ctx->pc = 0x29A1C0u;
            goto label_29a1c0;
        }
    }
    ctx->pc = 0x29A1B4u;
label_29a1b4:
    // 0x29a1b4: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x29a1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29a1b8:
    // 0x29a1b8: 0x80a6838  j           func_29A0E0
label_29a1bc:
    if (ctx->pc == 0x29A1BCu) {
        ctx->pc = 0x29A1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A1B8u;
        // 0x29a1bc: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A1C0u;
        goto label_29a1c0;
    }
    ctx->pc = 0x29A1B8u;
    ctx->pc = 0x29A1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A1B8u;
    // 0x29a1bc: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A0E0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_29a0e0;
    ctx->pc = 0x29A1C0u;
label_29a1c0:
    // 0x29a1c0: 0x3e00008  jr          $ra
label_29a1c4:
    if (ctx->pc == 0x29A1C4u) {
        ctx->pc = 0x29A1C8u;
        goto label_fallthrough_0x29a1c0;
    }
    ctx->pc = 0x29A1C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A1C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29a1c0:
    ctx->pc = 0x29A1C8u;
}
