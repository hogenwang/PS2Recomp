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

// Function: sub_001A6158
// Address: 0x1a6158 - 0x1a63b0
void sub_001A6158_0x1a6158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6158_0x1a6158");
#endif

    switch (ctx->pc) {
        case 0x1a62d8u: goto label_1a62d8;
        default: break;
    }

    ctx->pc = 0x1a6158u;

    // 0x1a6158: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x1a6158u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x1a615c: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A615Cu;
    {
        const bool branch_taken_0x1a615c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1A6160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A615Cu;
        // 0x1a6160: 0x23180  sll         $a2, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a615c) {
            ctx->pc = 0x1A6174u;
            goto label_1a6174;
        }
    }
    ctx->pc = 0x1A6164u;
    // 0x1a6164: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1a6164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1a6168: 0x308203ff  andi        $v0, $a0, 0x3FF
    ctx->pc = 0x1a6168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x1a616c: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A616Cu;
    {
        const bool branch_taken_0x1a616c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A6170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A616Cu;
        // 0x1a6170: 0x3c070037  lui         $a3, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a616c) {
            ctx->pc = 0x1A6180u;
            goto label_1a6180;
        }
    }
    ctx->pc = 0x1A6174u;
label_1a6174:
    // 0x1a6174: 0x3c028106  lui         $v0, 0x8106
    ctx->pc = 0x1a6174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33030 << 16));
    // 0x1a6178: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A617Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6178u;
        // 0x1a617c: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6180u;
label_1a6180:
    // 0x1a6180: 0x24ebe118  addiu       $t3, $a3, -0x1EE8
    ctx->pc = 0x1a6180u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 4294959384));
    // 0x1a6184: 0x8d62001c  lw          $v0, 0x1C($t3)
    ctx->pc = 0x1a6184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 28)));
    // 0x1a6188: 0x54440004  bnel        $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6188u;
    {
        const bool branch_taken_0x1a6188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1a6188) {
            ctx->pc = 0x1A618Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6188u;
            // 0x1a618c: 0x8cc2000c  lw          $v0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A619Cu;
            goto label_1a619c;
        }
    }
    ctx->pc = 0x1A6190u;
    // 0x1a6190: 0x3c028106  lui         $v0, 0x8106
    ctx->pc = 0x1a6190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33030 << 16));
    // 0x1a6194: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6194u;
        // 0x1a6198: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A619Cu;
label_1a619c:
    // 0x1a619c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a619cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a61a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A61A0u;
    {
        const bool branch_taken_0x1a61a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A61A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61A0u;
        // 0x1a61a4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a61a0) {
            ctx->pc = 0x1A61B0u;
            goto label_1a61b0;
        }
    }
    ctx->pc = 0x1A61A8u;
    // 0x1a61a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A61A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A61ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61A8u;
        // 0x1a61ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A61A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A61B0u;
label_1a61b0:
    // 0x1a61b0: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x1a61b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x1a61b4: 0x9c4c0000  lwu         $t4, 0x0($v0)
    ctx->pc = 0x1a61b4u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a61b8: 0x8c480010  lw          $t0, 0x10($v0)
    ctx->pc = 0x1a61b8u;
    SET_GPR_S32(ctx, 8, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 16))); // MMIO: 0x10000010
    // 0x1a61bc: 0xdceae118  ld          $t2, -0x1EE8($a3)
    ctx->pc = 0x1a61bcu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 4294959384)));
    // 0x1a61c0: 0x31090800  andi        $t1, $t0, 0x800
    ctx->pc = 0x1a61c0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2048);
    // 0x1a61c4: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A61C4u;
    {
        const bool branch_taken_0x1a61c4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A61C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61C4u;
        // 0x1a61c8: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a61c4) {
            ctx->pc = 0x1A61D4u;
            goto label_1a61d4;
        }
    }
    ctx->pc = 0x1A61CCu;
    // 0x1a61cc: 0x9c4c0000  lwu         $t4, 0x0($v0)
    ctx->pc = 0x1a61ccu;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a61d0: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x1a61d0u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
label_1a61d4:
    // 0x1a61d4: 0x31080003  andi        $t0, $t0, 0x3
    ctx->pc = 0x1a61d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x1a61d8: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x1a61d8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x1a61dc: 0x8480a  movz        $t1, $zero, $t0
    ctx->pc = 0x1a61dcu;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
    // 0x1a61e0: 0x18a6025  or          $t4, $t4, $t2
    ctx->pc = 0x1a61e0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 10));
    // 0x1a61e4: 0x1094814  dsllv       $t1, $t1, $t0
    ctx->pc = 0x1a61e4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (GPR_U32(ctx, 8) & 0x3F));
    // 0x1a61e8: 0x12c6014  dsllv       $t4, $t4, $t1
    ctx->pc = 0x1a61e8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (GPR_U32(ctx, 9) & 0x3F));
    // 0x1a61ec: 0xdcc50010  ld          $a1, 0x10($a2)
    ctx->pc = 0x1a61ecu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1a61f0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1a61f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1a61f4: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x1a61f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1a61f8: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x1a61f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x1a61fc: 0xdcc30018  ld          $v1, 0x18($a2)
    ctx->pc = 0x1a61fcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1a6200: 0x185282f  dsubu       $a1, $t4, $a1
    ctx->pc = 0x1a6200u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 12) - GPR_U64(ctx, 5));
    // 0x1a6204: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1a6204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1a6208: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x1a6208u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
    // 0x1a620c: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x1a620cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x1a6210: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x1a6210u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x1a6214: 0x10800062  beqz        $a0, . + 4 + (0x62 << 2)
    ctx->pc = 0x1A6214u;
    {
        const bool branch_taken_0x1a6214 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6214u;
        // 0x1a6218: 0xfcc30018  sd          $v1, 0x18($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6214) {
            ctx->pc = 0x1A63A0u;
            goto label_1a63a0;
        }
    }
    ctx->pc = 0x1A621Cu;
    // 0x1a621c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1a621cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1a6220: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6220u;
    {
        const bool branch_taken_0x1a6220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6220u;
        // 0x1a6224: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6220) {
            ctx->pc = 0x1A6230u;
            goto label_1a6230;
        }
    }
    ctx->pc = 0x1A6228u;
    // 0x1a6228: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A6228u;
    {
        const bool branch_taken_0x1a6228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A622Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6228u;
        // 0x1a622c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6228) {
            ctx->pc = 0x1A6234u;
            goto label_1a6234;
        }
    }
    ctx->pc = 0x1A6230u;
label_1a6230:
    // 0x1a6230: 0xad630018  sw          $v1, 0x18($t3)
    ctx->pc = 0x1a6230u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 24), GPR_U32(ctx, 3));
label_1a6234:
    // 0x1a6234: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6234u;
    {
        const bool branch_taken_0x1a6234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6234u;
        // 0x1a6238: 0x24e2e118  addiu       $v0, $a3, -0x1EE8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294959384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6234) {
            ctx->pc = 0x1A6248u;
            goto label_1a6248;
        }
    }
    ctx->pc = 0x1A623Cu;
    // 0x1a623c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1a623cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1a6240: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1a6240u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1a6244: 0x24e2e118  addiu       $v0, $a3, -0x1EE8
    ctx->pc = 0x1a6244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294959384));
label_1a6248:
    // 0x1a6248: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x1a6248u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x1a624c: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1a624cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1a6250: 0x4610053  bgez        $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x1A6250u;
    {
        const bool branch_taken_0x1a6250 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1A6254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6250u;
        // 0x1a6254: 0x8c460018  lw          $a2, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6250) {
            ctx->pc = 0x1A63A0u;
            goto label_1a63a0;
        }
    }
    ctx->pc = 0x1A6258u;
    // 0x1a6258: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a6258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a625c: 0x34420810  ori         $v0, $v0, 0x810
    ctx->pc = 0x1a625cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2064);
    // 0x1a6260: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x1a6260u;
    SET_GPR_S32(ctx, 9, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x1a6264: 0x54c0000b  bnel        $a2, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1A6264u;
    {
        const bool branch_taken_0x1a6264 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a6264) {
            ctx->pc = 0x1A6268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6264u;
            // 0x1a6268: 0xdcc20020  ld          $v0, 0x20($a2) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A6294u;
            goto label_1a6294;
        }
    }
    ctx->pc = 0x1A626Cu;
    // 0x1a626c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a626cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1a6270: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1a6270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1a6274: 0x34630820  ori         $v1, $v1, 0x820
    ctx->pc = 0x1a6274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2080);
    // 0x1a6278: 0x3442f7ff  ori         $v0, $v0, 0xF7FF
    ctx->pc = 0x1a6278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63487);
    // 0x1a627c: 0x1221024  and         $v0, $t1, $v0
    ctx->pc = 0x1a627cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x1a6280: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1a6280u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x1a6284: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x1a6284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x1a6288: 0xac220810  sw          $v0, 0x810($at)
    ctx->pc = 0x1a6288u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 2064), GPR_U32(ctx, 2)); // MMIO: 0x10000810
    // 0x1a628c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A628Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A628Cu;
        // 0x1a6290: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A628Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6294u;
label_1a6294:
    // 0x1a6294: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x1a6294u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1a6298: 0xdcc40018  ld          $a0, 0x18($a2)
    ctx->pc = 0x1a6298u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1a629c: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x1a629cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1a62a0: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x1a62a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a62a4: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x1A62A4u;
    {
        const bool branch_taken_0x1a62a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A62A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A62A4u;
        // 0x1a62a8: 0x44382f  dsubu       $a3, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a62a4) {
            ctx->pc = 0x1A630Cu;
            goto label_1a630c;
        }
    }
    ctx->pc = 0x1A62ACu;
    // 0x1a62ac: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x1a62acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1a62b0: 0x64e37333  daddiu      $v1, $a3, 0x7333
    ctx->pc = 0x1a62b0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)29491);
    // 0x1a62b4: 0xdcc40010  ld          $a0, 0x10($a2)
    ctx->pc = 0x1a62b4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1a62b8: 0xdcc50018  ld          $a1, 0x18($a2)
    ctx->pc = 0x1a62b8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1a62bc: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x1a62bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x1a62c0: 0x45102f  dsubu       $v0, $v0, $a1
    ctx->pc = 0x1a62c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 5));
    // 0x1a62c4: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x1a62c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1a62c8: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A62C8u;
    {
        const bool branch_taken_0x1a62c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A62CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A62C8u;
        // 0x1a62cc: 0x31280003  andi        $t0, $t1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a62c8) {
            ctx->pc = 0x1A630Cu;
            goto label_1a630c;
        }
    }
    ctx->pc = 0x1A62D0u;
    // 0x1a62d0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1a62d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a62d4: 0x0  nop
    ctx->pc = 0x1a62d4u;
    // NOP
label_1a62d8:
    // 0x1a62d8: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x1a62d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a62dc: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x1A62DCu;
    {
        const bool branch_taken_0x1a62dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A62E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A62DCu;
        // 0x1a62e0: 0x64e37333  daddiu      $v1, $a3, 0x7333 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)29491);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a62dc) {
            ctx->pc = 0x1A6310u;
            goto label_1a6310;
        }
    }
    ctx->pc = 0x1A62E4u;
    // 0x1a62e4: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x1a62e4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1a62e8: 0xdcc40010  ld          $a0, 0x10($a2)
    ctx->pc = 0x1a62e8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1a62ec: 0xdcc50018  ld          $a1, 0x18($a2)
    ctx->pc = 0x1a62ecu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1a62f0: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x1a62f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x1a62f4: 0x45102f  dsubu       $v0, $v0, $a1
    ctx->pc = 0x1a62f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 5));
    // 0x1a62f8: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x1a62f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1a62fc: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A62FCu;
    {
        const bool branch_taken_0x1a62fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a62fc) {
            ctx->pc = 0x1A6300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A62FCu;
            // 0x1a6300: 0xec102f  dsubu       $v0, $a3, $t4 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) - GPR_U64(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A6314u;
            goto label_1a6314;
        }
    }
    ctx->pc = 0x1A6304u;
    // 0x1a6304: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1A6304u;
    {
        const bool branch_taken_0x1a6304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6304u;
        // 0x1a6308: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6304) {
            ctx->pc = 0x1A62D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a62d8;
        }
    }
    ctx->pc = 0x1A630Cu;
label_1a630c:
    // 0x1a630c: 0x31280003  andi        $t0, $t1, 0x3
    ctx->pc = 0x1a630cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
label_1a6310:
    // 0x1a6310: 0xec102f  dsubu       $v0, $a3, $t4
    ctx->pc = 0x1a6310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) - GPR_U64(ctx, 12));
label_1a6314:
    // 0x1a6314: 0x28427333  slti        $v0, $v0, 0x7333
    ctx->pc = 0x1a6314u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)29491) ? 1 : 0);
    // 0x1a6318: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A6318u;
    {
        const bool branch_taken_0x1a6318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A631Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6318u;
        // 0x1a631c: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6318) {
            ctx->pc = 0x1A636Cu;
            goto label_1a636c;
        }
    }
    ctx->pc = 0x1A6320u;
    // 0x1a6320: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x1a6320u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1a6324: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x1a6324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x1a6328: 0x24027333  addiu       $v0, $zero, 0x7333
    ctx->pc = 0x1a6328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29491));
    // 0x1a632c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1a632cu;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x1a6330: 0x821016  dsrlv       $v0, $v0, $a0
    ctx->pc = 0x1a6330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 4) & 0x3F));
    // 0x1a6334: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a6334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a6338: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1a6338u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1a633c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1a633cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1a6340: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1a6340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1a6344: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1a6344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1a6348: 0x34840820  ori         $a0, $a0, 0x820
    ctx->pc = 0x1a6348u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2080);
    // 0x1a634c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a634cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a6350: 0x3463f7ff  ori         $v1, $v1, 0xF7FF
    ctx->pc = 0x1a6350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63487);
    // 0x1a6354: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1a6354u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1a6358: 0x1231824  and         $v1, $t1, $v1
    ctx->pc = 0x1a6358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x1a635c: 0x34420810  ori         $v0, $v0, 0x810
    ctx->pc = 0x1a635cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2064);
    // 0x1a6360: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a6360u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x1a6364: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6364u;
        // 0x1a6368: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A636Cu;
label_1a636c:
    // 0x1a636c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1a636cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1a6370: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x1a6370u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1a6374: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1a6374u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1a6378: 0x3463f7ff  ori         $v1, $v1, 0xF7FF
    ctx->pc = 0x1a6378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63487);
    // 0x1a637c: 0x1231824  and         $v1, $t1, $v1
    ctx->pc = 0x1a637cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x1a6380: 0xa72816  dsrlv       $a1, $a3, $a1
    ctx->pc = 0x1a6380u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) >> (GPR_U32(ctx, 5) & 0x3F));
    // 0x1a6384: 0x34840810  ori         $a0, $a0, 0x810
    ctx->pc = 0x1a6384u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2064);
    // 0x1a6388: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a6388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a638c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1a638cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1a6390: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1a6390u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1a6394: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1a6394u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1a6398: 0x34420820  ori         $v0, $v0, 0x820
    ctx->pc = 0x1a6398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2080);
    // 0x1a639c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1a639cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
label_1a63a0:
    // 0x1a63a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a63a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a63a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A63A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A63A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A63ACu;
    // 0x1a63ac: 0x0  nop
    ctx->pc = 0x1a63acu;
    // NOP
}
