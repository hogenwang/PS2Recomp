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

// Function: sub_001FD118
// Address: 0x1fd118 - 0x1fd1c0
void sub_001FD118_0x1fd118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD118_0x1fd118");
#endif

    switch (ctx->pc) {
        case 0x1fd118u: goto label_1fd118;
        case 0x1fd11cu: goto label_1fd11c;
        case 0x1fd120u: goto label_1fd120;
        case 0x1fd124u: goto label_1fd124;
        case 0x1fd128u: goto label_1fd128;
        case 0x1fd12cu: goto label_1fd12c;
        case 0x1fd130u: goto label_1fd130;
        case 0x1fd134u: goto label_1fd134;
        case 0x1fd138u: goto label_1fd138;
        case 0x1fd13cu: goto label_1fd13c;
        case 0x1fd140u: goto label_1fd140;
        case 0x1fd144u: goto label_1fd144;
        case 0x1fd148u: goto label_1fd148;
        case 0x1fd14cu: goto label_1fd14c;
        case 0x1fd150u: goto label_1fd150;
        case 0x1fd154u: goto label_1fd154;
        case 0x1fd158u: goto label_1fd158;
        case 0x1fd15cu: goto label_1fd15c;
        case 0x1fd160u: goto label_1fd160;
        case 0x1fd164u: goto label_1fd164;
        case 0x1fd168u: goto label_1fd168;
        case 0x1fd16cu: goto label_1fd16c;
        case 0x1fd170u: goto label_1fd170;
        case 0x1fd174u: goto label_1fd174;
        case 0x1fd178u: goto label_1fd178;
        case 0x1fd17cu: goto label_1fd17c;
        case 0x1fd180u: goto label_1fd180;
        case 0x1fd184u: goto label_1fd184;
        case 0x1fd188u: goto label_1fd188;
        case 0x1fd18cu: goto label_1fd18c;
        case 0x1fd190u: goto label_1fd190;
        case 0x1fd194u: goto label_1fd194;
        case 0x1fd198u: goto label_1fd198;
        case 0x1fd19cu: goto label_1fd19c;
        case 0x1fd1a0u: goto label_1fd1a0;
        case 0x1fd1a4u: goto label_1fd1a4;
        case 0x1fd1a8u: goto label_1fd1a8;
        case 0x1fd1acu: goto label_1fd1ac;
        case 0x1fd1b0u: goto label_1fd1b0;
        case 0x1fd1b4u: goto label_1fd1b4;
        case 0x1fd1b8u: goto label_1fd1b8;
        case 0x1fd1bcu: goto label_1fd1bc;
        default: break;
    }

    ctx->pc = 0x1fd118u;

label_1fd118:
    // 0x1fd118: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fd118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1fd11c:
    // 0x1fd11c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fd11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1fd120:
    // 0x1fd120: 0xc080dd0  jal         func_203740
label_1fd124:
    if (ctx->pc == 0x1FD124u) {
        ctx->pc = 0x1FD128u;
        goto label_1fd128;
    }
    ctx->pc = 0x1FD120u;
    SET_GPR_U32(ctx, 31, 0x1FD128u);
    ctx->pc = 0x203740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203740u, 0x1FD120u, 0x1FD128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD128u;
label_1fd128:
    // 0x1fd128: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1fd128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_1fd12c:
    // 0x1fd12c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1fd130:
    if (ctx->pc == 0x1FD130u) {
        ctx->pc = 0x1FD130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD12Cu;
        // 0x1fd130: 0x24631540  addiu       $v1, $v1, 0x1540 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5440));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD134u;
        goto label_1fd134;
    }
    ctx->pc = 0x1FD12Cu;
    {
        const bool branch_taken_0x1fd12c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD12Cu;
        // 0x1fd130: 0x24631540  addiu       $v1, $v1, 0x1540 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd12c) {
            ctx->pc = 0x1FD150u;
            goto label_1fd150;
        }
    }
    ctx->pc = 0x1FD134u;
label_1fd134:
    // 0x1fd134: 0xc080dda  jal         func_203768
label_1fd138:
    if (ctx->pc == 0x1FD138u) {
        ctx->pc = 0x1FD13Cu;
        goto label_1fd13c;
    }
    ctx->pc = 0x1FD134u;
    SET_GPR_U32(ctx, 31, 0x1FD13Cu);
    ctx->pc = 0x203768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203768u, 0x1FD134u, 0x1FD13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD13Cu;
label_1fd13c:
    // 0x1fd13c: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x1fd13cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
label_1fd140:
    // 0x1fd140: 0xc080d86  jal         func_203618
label_1fd144:
    if (ctx->pc == 0x1FD144u) {
        ctx->pc = 0x1FD144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD140u;
        // 0x1fd144: 0xfc629b88  sd          $v0, -0x6478($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 4294941576), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD148u;
        goto label_1fd148;
    }
    ctx->pc = 0x1FD140u;
    SET_GPR_U32(ctx, 31, 0x1FD148u);
    ctx->pc = 0x1FD144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD140u;
    // 0x1fd144: 0xfc629b88  sd          $v0, -0x6478($v1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294941576), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203618u, 0x1FD140u, 0x1FD148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD148u;
label_1fd148:
    // 0x1fd148: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1fd14c:
    if (ctx->pc == 0x1FD14Cu) {
        ctx->pc = 0x1FD14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD148u;
        // 0x1fd14c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD150u;
        goto label_1fd150;
    }
    ctx->pc = 0x1FD148u;
    {
        const bool branch_taken_0x1fd148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD148u;
        // 0x1fd14c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd148) {
            ctx->pc = 0x1FD1B4u;
            goto label_1fd1b4;
        }
    }
    ctx->pc = 0x1FD150u;
label_1fd150:
    // 0x1fd150: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1fd150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1fd154:
    // 0x1fd154: 0x8c441538  lw          $a0, 0x1538($v0)
    ctx->pc = 0x1fd154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5432)));
label_1fd158:
    // 0x1fd158: 0x50800010  beql        $a0, $zero, . + 4 + (0x10 << 2)
label_1fd15c:
    if (ctx->pc == 0x1FD15Cu) {
        ctx->pc = 0x1FD15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD158u;
        // 0x1fd15c: 0x8c6401c0  lw          $a0, 0x1C0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 448)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD160u;
        goto label_1fd160;
    }
    ctx->pc = 0x1FD158u;
    {
        const bool branch_taken_0x1fd158 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd158) {
            ctx->pc = 0x1FD15Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD158u;
            // 0x1fd15c: 0x8c6401c0  lw          $a0, 0x1C0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 448)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD19Cu;
            goto label_1fd19c;
        }
    }
    ctx->pc = 0x1FD160u;
label_1fd160:
    // 0x1fd160: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x1fd160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_1fd164:
    // 0x1fd164: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_1fd168:
    if (ctx->pc == 0x1FD168u) {
        ctx->pc = 0x1FD168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD164u;
        // 0x1fd168: 0x8c6401c0  lw          $a0, 0x1C0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 448)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD16Cu;
        goto label_1fd16c;
    }
    ctx->pc = 0x1FD164u;
    {
        const bool branch_taken_0x1fd164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd164) {
            ctx->pc = 0x1FD168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD164u;
            // 0x1fd168: 0x8c6401c0  lw          $a0, 0x1C0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 448)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD19Cu;
            goto label_1fd19c;
        }
    }
    ctx->pc = 0x1FD16Cu;
label_1fd16c:
    // 0x1fd16c: 0x8c82105c  lw          $v0, 0x105C($a0)
    ctx->pc = 0x1fd16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4188)));
label_1fd170:
    // 0x1fd170: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1fd174:
    if (ctx->pc == 0x1FD174u) {
        ctx->pc = 0x1FD174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD170u;
        // 0x1fd174: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD178u;
        goto label_1fd178;
    }
    ctx->pc = 0x1FD170u;
    {
        const bool branch_taken_0x1fd170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD170u;
        // 0x1fd174: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd170) {
            ctx->pc = 0x1FD198u;
            goto label_1fd198;
        }
    }
    ctx->pc = 0x1FD178u;
label_1fd178:
    // 0x1fd178: 0x8c841070  lw          $a0, 0x1070($a0)
    ctx->pc = 0x1fd178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4208)));
label_1fd17c:
    // 0x1fd17c: 0x40f809  jalr        $v0
label_1fd180:
    if (ctx->pc == 0x1FD180u) {
        ctx->pc = 0x1FD180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD17Cu;
        // 0x1fd180: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD184u;
        goto label_1fd184;
    }
    ctx->pc = 0x1FD17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FD184u);
        ctx->pc = 0x1FD180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD17Cu;
        // 0x1fd180: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD17Cu, 0x1FD184u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FD184u;
label_1fd184:
    // 0x1fd184: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x1fd184u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
label_1fd188:
    // 0x1fd188: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1fd188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1fd18c:
    // 0x1fd18c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1fd18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1fd190:
    // 0x1fd190: 0x10000007  b           . + 4 + (0x7 << 2)
label_1fd194:
    if (ctx->pc == 0x1FD194u) {
        ctx->pc = 0x1FD194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD190u;
        // 0x1fd194: 0xfc839b88  sd          $v1, -0x6478($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 4294941576), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD198u;
        goto label_1fd198;
    }
    ctx->pc = 0x1FD190u;
    {
        const bool branch_taken_0x1fd190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD190u;
        // 0x1fd194: 0xfc839b88  sd          $v1, -0x6478($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 4294941576), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd190) {
            ctx->pc = 0x1FD1B0u;
            goto label_1fd1b0;
        }
    }
    ctx->pc = 0x1FD198u;
label_1fd198:
    // 0x1fd198: 0x8c6401c0  lw          $a0, 0x1C0($v1)
    ctx->pc = 0x1fd198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 448)));
label_1fd19c:
    // 0x1fd19c: 0x8c6201b0  lw          $v0, 0x1B0($v1)
    ctx->pc = 0x1fd19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 432)));
label_1fd1a0:
    // 0x1fd1a0: 0x8c6501bc  lw          $a1, 0x1BC($v1)
    ctx->pc = 0x1fd1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 444)));
label_1fd1a4:
    // 0x1fd1a4: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x1fd1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
label_1fd1a8:
    // 0x1fd1a8: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1fd1a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1fd1ac:
    // 0x1fd1ac: 0xfc659b88  sd          $a1, -0x6478($v1)
    ctx->pc = 0x1fd1acu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294941576), GPR_U64(ctx, 5));
label_1fd1b0:
    // 0x1fd1b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fd1b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fd1b4:
    // 0x1fd1b4: 0x3e00008  jr          $ra
label_1fd1b8:
    if (ctx->pc == 0x1FD1B8u) {
        ctx->pc = 0x1FD1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD1B4u;
        // 0x1fd1b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD1BCu;
        goto label_1fd1bc;
    }
    ctx->pc = 0x1FD1B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD1B4u;
        // 0x1fd1b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD1B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD1BCu;
label_1fd1bc:
    // 0x1fd1bc: 0x0  nop
    ctx->pc = 0x1fd1bcu;
    // NOP
}
