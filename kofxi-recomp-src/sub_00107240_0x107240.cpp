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

// Function: sub_00107240
// Address: 0x107240 - 0x107368
void sub_00107240_0x107240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107240_0x107240");
#endif

    switch (ctx->pc) {
        case 0x107278u: goto label_107278;
        case 0x107298u: goto label_107298;
        case 0x1072d0u: goto label_1072d0;
        case 0x1072ecu: goto label_1072ec;
        case 0x10733cu: goto label_10733c;
        default: break;
    }

    ctx->pc = 0x107240u;

    // 0x107240: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x107240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x107244: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x107244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x107248: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x107248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10724c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10724cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x107250: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x107250u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107254: 0x8e020828  lw          $v0, 0x828($s0)
    ctx->pc = 0x107254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2088)));
    // 0x107258: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x107258u;
    {
        const bool branch_taken_0x107258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10725Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107258u;
        // 0x10725c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107258) {
            ctx->pc = 0x107270u;
            goto label_107270;
        }
    }
    ctx->pc = 0x107260u;
    // 0x107260: 0x8e02084c  lw          $v0, 0x84C($s0)
    ctx->pc = 0x107260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2124)));
    // 0x107264: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x107264u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x107268: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x107268u;
    {
        const bool branch_taken_0x107268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x107268) {
            ctx->pc = 0x10726Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107268u;
            // 0x10726c: 0x8e030848  lw          $v1, 0x848($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1072B0u;
            goto label_1072b0;
        }
    }
    ctx->pc = 0x107270u;
label_107270:
    // 0x107270: 0xc041cda  jal         func_107368
    ctx->pc = 0x107270u;
    SET_GPR_U32(ctx, 31, 0x107278u);
    ctx->pc = 0x107274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107270u;
    // 0x107274: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107368u, 0x107270u, 0x107278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107278u;
label_107278:
    // 0x107278: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x107278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10727c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x10727cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x107280: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x107280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x107284: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x107284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107288: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x107288u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x10728c: 0xae000828  sw          $zero, 0x828($s0)
    ctx->pc = 0x10728cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
    // 0x107290: 0xc041bf6  jal         func_106FD8
    ctx->pc = 0x107290u;
    SET_GPR_U32(ctx, 31, 0x107298u);
    ctx->pc = 0x107294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107290u;
    // 0x107294: 0xae03082c  sw          $v1, 0x82C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106FD8u, 0x107290u, 0x107298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107298u;
label_107298:
    // 0x107298: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x107298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x10729c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x10729cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1072a0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1072a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1072a4: 0xae020848  sw          $v0, 0x848($s0)
    ctx->pc = 0x1072a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2120), GPR_U32(ctx, 2));
    // 0x1072a8: 0xae03084c  sw          $v1, 0x84C($s0)
    ctx->pc = 0x1072a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2124), GPR_U32(ctx, 3));
    // 0x1072ac: 0x8e030848  lw          $v1, 0x848($s0)
    ctx->pc = 0x1072acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
label_1072b0:
    // 0x1072b0: 0x111023  negu        $v0, $s1
    ctx->pc = 0x1072b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x1072b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1072b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1072b8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1072b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1072bc: 0x431006  srlv        $v0, $v1, $v0
    ctx->pc = 0x1072bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1072c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1072c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1072c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1072C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1072C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1072C4u;
        // 0x1072c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1072C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1072CCu;
    // 0x1072cc: 0x0  nop
    ctx->pc = 0x1072ccu;
    // NOP
label_1072d0:
    // 0x1072d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1072d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1072d4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1072d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1072d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1072d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1072dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1072dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1072e0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1072e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1072e4: 0xc041cda  jal         func_107368
    ctx->pc = 0x1072E4u;
    SET_GPR_U32(ctx, 31, 0x1072ECu);
    ctx->pc = 0x1072E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1072E4u;
    // 0x1072e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107368u, 0x1072E4u, 0x1072ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1072ECu;
label_1072ec:
    // 0x1072ec: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x1072ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x1072f0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1072f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1072f4: 0x2048025  or          $s0, $s0, $a0
    ctx->pc = 0x1072f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x1072f8: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1072f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1072fc: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1072fcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16)); // MMIO: 0x10000000
    // 0x107300: 0x3c03f000  lui         $v1, 0xF000
    ctx->pc = 0x107300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61440 << 16));
    // 0x107304: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x107304u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x107308: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x107308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x10730c: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10730Cu;
    {
        const bool branch_taken_0x10730c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x107310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10730Cu;
        // 0x107310: 0xae30082c  sw          $s0, 0x82C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10730c) {
            ctx->pc = 0x107328u;
            goto label_107328;
        }
    }
    ctx->pc = 0x107314u;
    // 0x107314: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x107314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x107318: 0x52020006  beql        $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x107318u;
    {
        const bool branch_taken_0x107318 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x107318) {
            ctx->pc = 0x10731Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107318u;
            // 0x10731c: 0xae200828  sw          $zero, 0x828($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107334u;
            goto label_107334;
        }
    }
    ctx->pc = 0x107320u;
    // 0x107320: 0x16040003  bne         $s0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x107320u;
    {
        const bool branch_taken_0x107320 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        ctx->pc = 0x107324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107320u;
        // 0x107324: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107320) {
            ctx->pc = 0x107330u;
            goto label_107330;
        }
    }
    ctx->pc = 0x107328u;
label_107328:
    // 0x107328: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x107328u;
    {
        const bool branch_taken_0x107328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10732Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107328u;
        // 0x10732c: 0xae200828  sw          $zero, 0x828($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107328) {
            ctx->pc = 0x107334u;
            goto label_107334;
        }
    }
    ctx->pc = 0x107330u;
label_107330:
    // 0x107330: 0xae220828  sw          $v0, 0x828($s1)
    ctx->pc = 0x107330u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 2));
label_107334:
    // 0x107334: 0xc041bf6  jal         func_106FD8
    ctx->pc = 0x107334u;
    SET_GPR_U32(ctx, 31, 0x10733Cu);
    ctx->pc = 0x107338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107334u;
    // 0x107338: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106FD8u, 0x107334u, 0x10733Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10733Cu;
label_10733c:
    // 0x10733c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x10733cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x107340: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x107340u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x107344: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x107344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x107348: 0xae23084c  sw          $v1, 0x84C($s1)
    ctx->pc = 0x107348u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 3));
    // 0x10734c: 0xae220848  sw          $v0, 0x848($s1)
    ctx->pc = 0x10734cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
    // 0x107350: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x107350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x107354: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x107354u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107358: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x107358u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10735c: 0x3e00008  jr          $ra
    ctx->pc = 0x10735Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10735Cu;
        // 0x107360: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10735Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107364u;
    // 0x107364: 0x0  nop
    ctx->pc = 0x107364u;
    // NOP
    if (ctx->pc == 0x107364u) { ctx->pc = 0x107368u; }
}
