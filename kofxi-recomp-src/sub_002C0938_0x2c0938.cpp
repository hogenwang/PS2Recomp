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

// Function: sub_002C0938
// Address: 0x2c0938 - 0x2c0d00
void sub_002C0938_0x2c0938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0938_0x2c0938");
#endif

    switch (ctx->pc) {
        case 0x2c0998u: goto label_2c0998;
        case 0x2c09acu: goto label_2c09ac;
        case 0x2c09f8u: goto label_2c09f8;
        case 0x2c0a0cu: goto label_2c0a0c;
        case 0x2c0a20u: goto label_2c0a20;
        case 0x2c0a3cu: goto label_2c0a3c;
        case 0x2c0a44u: goto label_2c0a44;
        case 0x2c0a90u: goto label_2c0a90;
        case 0x2c0b08u: goto label_2c0b08;
        case 0x2c0b64u: goto label_2c0b64;
        case 0x2c0ba8u: goto label_2c0ba8;
        case 0x2c0bd0u: goto label_2c0bd0;
        case 0x2c0c14u: goto label_2c0c14;
        case 0x2c0c8cu: goto label_2c0c8c;
        case 0x2c0cb8u: goto label_2c0cb8;
        case 0x2c0cc8u: goto label_2c0cc8;
        default: break;
    }

    ctx->pc = 0x2c0938u;

    // 0x2c0938: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2c0938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2c093c: 0xffb700e0  sd          $s7, 0xE0($sp)
    ctx->pc = 0x2c093cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 23));
    // 0x2c0940: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x2c0940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x2c0944: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2c0944u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0948: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x2c0948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x2c094c: 0xffbe00f0  sd          $fp, 0xF0($sp)
    ctx->pc = 0x2c094cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 30));
    // 0x2c0950: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x2c0950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
    // 0x2c0954: 0xffb500c0  sd          $s5, 0xC0($sp)
    ctx->pc = 0x2c0954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 21));
    // 0x2c0958: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x2c0958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x2c095c: 0xffb300a0  sd          $s3, 0xA0($sp)
    ctx->pc = 0x2c095cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
    // 0x2c0960: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x2c0960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x2c0964: 0xffb10080  sd          $s1, 0x80($sp)
    ctx->pc = 0x2c0964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
    // 0x2c0968: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x2c0968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x2c096c: 0xafa50064  sw          $a1, 0x64($sp)
    ctx->pc = 0x2c096cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 5));
    // 0x2c0970: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C0970u;
    {
        const bool branch_taken_0x2c0970 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0970u;
        // 0x2c0974: 0xafa60068  sw          $a2, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0970) {
            ctx->pc = 0x2C0984u;
            goto label_2c0984;
        }
    }
    ctx->pc = 0x2C0978u;
    // 0x2c0978: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2c0978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2c097c: 0x100000d3  b           . + 4 + (0xD3 << 2)
    ctx->pc = 0x2C097Cu;
    {
        const bool branch_taken_0x2c097c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C097Cu;
        // 0x2c0980: 0x2442ed20  addiu       $v0, $v0, -0x12E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c097c) {
            ctx->pc = 0x2C0CCCu;
            goto label_2c0ccc;
        }
    }
    ctx->pc = 0x2C0984u;
label_2c0984:
    // 0x2c0984: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x2c0984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x2c0988: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C0988u;
    {
        const bool branch_taken_0x2c0988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C098Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0988u;
        // 0x2c098c: 0x8fa20068  lw          $v0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0988) {
            ctx->pc = 0x2C09C4u;
            goto label_2c09c4;
        }
    }
    ctx->pc = 0x2C0990u;
    // 0x2c0990: 0xc0a32b4  jal         func_28CAD0
    ctx->pc = 0x2C0990u;
    SET_GPR_U32(ctx, 31, 0x2C0998u);
    ctx->pc = 0x28CAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CAD0u, 0x2C0990u, 0x2C0998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0998u;
label_2c0998:
    // 0x2c0998: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2c0998u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c099c: 0x12e000c0  beqz        $s7, . + 4 + (0xC0 << 2)
    ctx->pc = 0x2C099Cu;
    {
        const bool branch_taken_0x2c099c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C09A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C099Cu;
        // 0x2c09a0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c099c) {
            ctx->pc = 0x2C0CA0u;
            goto label_2c0ca0;
        }
    }
    ctx->pc = 0x2C09A4u;
    // 0x2c09a4: 0xc0a32e0  jal         func_28CB80
    ctx->pc = 0x2C09A4u;
    SET_GPR_U32(ctx, 31, 0x2C09ACu);
    ctx->pc = 0x2C09A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C09A4u;
    // 0x2c09a8: 0x240500c8  addiu       $a1, $zero, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CB80u, 0x2C09A4u, 0x2C09ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C09ACu;
label_2c09ac:
    // 0x2c09ac: 0x104000bc  beqz        $v0, . + 4 + (0xBC << 2)
    ctx->pc = 0x2C09ACu;
    {
        const bool branch_taken_0x2c09ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C09B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C09ACu;
        // 0x2c09b0: 0x240300c8  addiu       $v1, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c09ac) {
            ctx->pc = 0x2C0CA0u;
            goto label_2c0ca0;
        }
    }
    ctx->pc = 0x2C09B4u;
    // 0x2c09b4: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x2c09b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x2c09b8: 0xafa30068  sw          $v1, 0x68($sp)
    ctx->pc = 0x2c09b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
    // 0x2c09bc: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2c09bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c09c0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c09c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2c09c4:
    // 0x2c09c4: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2c09c4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c09c8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2c09c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c09cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2c09ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c09d0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2c09d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2c09d4: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x2c09d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x2c09d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c09d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c09dc: 0x184000a7  blez        $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x2C09DCu;
    {
        const bool branch_taken_0x2c09dc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C09E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C09DCu;
        // 0x2c09e0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c09dc) {
            ctx->pc = 0x2C0C7Cu;
            goto label_2c0c7c;
        }
    }
    ctx->pc = 0x2C09E4u;
    // 0x2c09e4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2c09e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c09e8: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x2c09e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c09ec: 0xafa4006c  sw          $a0, 0x6C($sp)
    ctx->pc = 0x2c09ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 4));
    // 0x2c09f0: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2c09f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2c09f4: 0x0  nop
    ctx->pc = 0x2c09f4u;
    // NOP
label_2c09f8:
    // 0x2c09f8: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x2c09f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2c09fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c09fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c0a00: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x2c0a00u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c0a04: 0xc0a6a4e  jal         func_29A938
    ctx->pc = 0x2C0A04u;
    SET_GPR_U32(ctx, 31, 0x2C0A0Cu);
    ctx->pc = 0x2C0A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0A04u;
    // 0x2c0a08: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A938u, 0x2C0A04u, 0x2C0A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0A0Cu;
label_2c0a0c:
    // 0x2c0a0c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c0a0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0a10: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C0A10u;
    {
        const bool branch_taken_0x2c0a10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0A10u;
        // 0x2c0a14: 0x8fa4006c  lw          $a0, 0x6C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0a10) {
            ctx->pc = 0x2C0A2Cu;
            goto label_2c0a2c;
        }
    }
    ctx->pc = 0x2C0A18u;
    // 0x2c0a18: 0xc0a69f0  jal         func_29A7C0
    ctx->pc = 0x2C0A18u;
    SET_GPR_U32(ctx, 31, 0x2C0A20u);
    ctx->pc = 0x2C0A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0A18u;
    // 0x2c0a1c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A7C0u, 0x2C0A18u, 0x2C0A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0A20u;
label_2c0a20:
    // 0x2c0a20: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c0a20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0a24: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C0A24u;
    {
        const bool branch_taken_0x2c0a24 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0A24u;
        // 0x2c0a28: 0x8fa4006c  lw          $a0, 0x6C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0a24) {
            ctx->pc = 0x2C0A3Cu;
            goto label_2c0a3c;
        }
    }
    ctx->pc = 0x2C0A2Cu;
label_2c0a2c:
    // 0x2c0a2c: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x2c0a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2c0a30: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x2c0a30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2c0a34: 0xc0a022c  jal         func_2808B0
    ctx->pc = 0x2C0A34u;
    SET_GPR_U32(ctx, 31, 0x2C0A3Cu);
    ctx->pc = 0x2C0A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0A34u;
    // 0x2c0a38: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2808B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2808B0u, 0x2C0A34u, 0x2C0A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0A3Cu;
label_2c0a3c:
    // 0x2c0a3c: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x2C0A3Cu;
    SET_GPR_U32(ctx, 31, 0x2C0A44u);
    ctx->pc = 0x2C0A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0A3Cu;
    // 0x2c0a40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x2C0A3Cu, 0x2C0A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0A44u;
label_2c0a44:
    // 0x2c0a44: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2c0a44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0a48: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x2c0a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2c0a4c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x2c0a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2c0a50: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2c0a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c0a54: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2c0a54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c0a58: 0x14640023  bne         $v1, $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2C0A58u;
    {
        const bool branch_taken_0x2c0a58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2C0A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0A58u;
        // 0x2c0a5c: 0x8c470008  lw          $a3, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0a58) {
            ctx->pc = 0x2C0AE8u;
            goto label_2c0ae8;
        }
    }
    ctx->pc = 0x2C0A60u;
    // 0x2c0a60: 0x32220003  andi        $v0, $s1, 0x3
    ctx->pc = 0x2c0a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
    // 0x2c0a64: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x2C0A64u;
    {
        const bool branch_taken_0x2c0a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c0a64) {
            ctx->pc = 0x2C0A68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0A64u;
            // 0x2c0a68: 0xafb6000c  sw          $s6, 0xC($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0AECu;
            goto label_2c0aec;
        }
    }
    ctx->pc = 0x2C0A6Cu;
    // 0x2c0a6c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2c0a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x2c0a70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c0a70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0a74: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2c0a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2c0a78: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2c0a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2c0a7c: 0x1a20000e  blez        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x2C0A7Cu;
    {
        const bool branch_taken_0x2c0a7c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x2C0A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0A7Cu;
        // 0x2c0a80: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0a7c) {
            ctx->pc = 0x2C0AB8u;
            goto label_2c0ab8;
        }
    }
    ctx->pc = 0x2C0A84u;
    // 0x2c0a84: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c0a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0a88: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x2c0a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2c0a8c: 0x0  nop
    ctx->pc = 0x2c0a8cu;
    // NOP
label_2c0a90:
    // 0x2c0a90: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2c0a90u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c0a94: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C0A94u;
    {
        const bool branch_taken_0x2c0a94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0A94u;
        // 0x2c0a98: 0x30c20003  andi        $v0, $a2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0a94) {
            ctx->pc = 0x2C0AA8u;
            goto label_2c0aa8;
        }
    }
    ctx->pc = 0x2C0A9Cu;
    // 0x2c0a9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c0a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c0aa0: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x2c0aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2c0aa4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2c0aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_2c0aa8:
    // 0x2c0aa8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2c0aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2c0aac: 0xd1102a  slt         $v0, $a2, $s1
    ctx->pc = 0x2c0aacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2c0ab0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2C0AB0u;
    {
        const bool branch_taken_0x2c0ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0AB0u;
        // 0x2c0ab4: 0xe61021  addu        $v0, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0ab0) {
            ctx->pc = 0x2C0A90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c0a90;
        }
    }
    ctx->pc = 0x2C0AB8u;
label_2c0ab8:
    // 0x2c0ab8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2c0ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c0abc: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2c0abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2c0ac0: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2c0ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c0ac4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c0ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c0ac8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2c0ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2c0acc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C0ACCu;
    {
        const bool branch_taken_0x2c0acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c0acc) {
            ctx->pc = 0x2C0AD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0ACCu;
            // 0x2c0ad0: 0xafb6000c  sw          $s6, 0xC($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0AECu;
            goto label_2c0aec;
        }
    }
    ctx->pc = 0x2C0AD4u;
    // 0x2c0ad4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2c0ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2c0ad8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2c0ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2c0adc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2c0adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2c0ae0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2C0AE0u;
    {
        const bool branch_taken_0x2c0ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0AE0u;
        // 0x2c0ae4: 0xafb6000c  sw          $s6, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0ae0) {
            ctx->pc = 0x2C0AF8u;
            goto label_2c0af8;
        }
    }
    ctx->pc = 0x2C0AE8u;
label_2c0ae8:
    // 0x2c0ae8: 0xafb6000c  sw          $s6, 0xC($sp)
    ctx->pc = 0x2c0ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 22));
label_2c0aec:
    // 0x2c0aec: 0xafb60008  sw          $s6, 0x8($sp)
    ctx->pc = 0x2c0aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 22));
    // 0x2c0af0: 0xafb60004  sw          $s6, 0x4($sp)
    ctx->pc = 0x2c0af0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 22));
    // 0x2c0af4: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x2c0af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
label_2c0af8:
    // 0x2c0af8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c0af8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0afc: 0x1a200011  blez        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C0AFCu;
    {
        const bool branch_taken_0x2c0afc = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x2C0B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0AFCu;
        // 0x2c0b00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0afc) {
            ctx->pc = 0x2C0B44u;
            goto label_2c0b44;
        }
    }
    ctx->pc = 0x2C0B04u;
    // 0x2c0b04: 0x30c20003  andi        $v0, $a2, 0x3
    ctx->pc = 0x2c0b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
label_2c0b08:
    // 0x2c0b08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c0b08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c0b0c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x2c0b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2c0b10: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c0b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c0b14: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C0B14u;
    {
        const bool branch_taken_0x2c0b14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B14u;
        // 0x2c0b18: 0xe61021  addu        $v0, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0b14) {
            ctx->pc = 0x2C0B34u;
            goto label_2c0b34;
        }
    }
    ctx->pc = 0x2C0B1Cu;
    // 0x2c0b1c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2c0b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2c0b20: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2c0b20u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c0b24: 0x24a40003  addiu       $a0, $a1, 0x3
    ctx->pc = 0x2c0b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x2c0b28: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x2c0b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x2c0b2c: 0x2c63005f  sltiu       $v1, $v1, 0x5F
    ctx->pc = 0x2c0b2cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)95) ? 1 : 0);
    // 0x2c0b30: 0x83280a  movz        $a1, $a0, $v1
    ctx->pc = 0x2c0b30u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
label_2c0b34:
    // 0x2c0b34: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2c0b34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2c0b38: 0xd1102a  slt         $v0, $a2, $s1
    ctx->pc = 0x2c0b38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2c0b3c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2C0B3Cu;
    {
        const bool branch_taken_0x2c0b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B3Cu;
        // 0x2c0b40: 0x30c20003  andi        $v0, $a2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0b3c) {
            ctx->pc = 0x2C0B08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c0b08;
        }
    }
    ctx->pc = 0x2C0B44u;
label_2c0b44:
    // 0x2c0b44: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x2c0b44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0b48: 0x24a30002  addiu       $v1, $a1, 0x2
    ctx->pc = 0x2c0b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x2c0b4c: 0x2151021  addu        $v0, $s0, $s5
    ctx->pc = 0x2c0b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x2c0b50: 0x12e00009  beqz        $s7, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C0B50u;
    {
        const bool branch_taken_0x2c0b50 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B50u;
        // 0x2c0b54: 0x43f021  addu        $fp, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0b50) {
            ctx->pc = 0x2C0B78u;
            goto label_2c0b78;
        }
    }
    ctx->pc = 0x2C0B58u;
    // 0x2c0b58: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2c0b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0b5c: 0xc0a32e0  jal         func_28CB80
    ctx->pc = 0x2C0B5Cu;
    SET_GPR_U32(ctx, 31, 0x2C0B64u);
    ctx->pc = 0x2C0B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0B5Cu;
    // 0x2c0b60: 0x27c50001  addiu       $a1, $fp, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CB80u, 0x2C0B5Cu, 0x2C0B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0B64u;
label_2c0b64:
    // 0x2c0b64: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x2C0B64u;
    {
        const bool branch_taken_0x2c0b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B64u;
        // 0x2c0b68: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0b64) {
            ctx->pc = 0x2C0CA4u;
            goto label_2c0ca4;
        }
    }
    ctx->pc = 0x2C0B6Cu;
    // 0x2c0b6c: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x2c0b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x2c0b70: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C0B70u;
    {
        const bool branch_taken_0x2c0b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B70u;
        // 0x2c0b74: 0x508021  addu        $s0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0b70) {
            ctx->pc = 0x2C0B8Cu;
            goto label_2c0b8c;
        }
    }
    ctx->pc = 0x2C0B78u;
label_2c0b78:
    // 0x2c0b78: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c0b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c0b7c: 0x7e102a  slt         $v0, $v1, $fp
    ctx->pc = 0x2c0b7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x2c0b80: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2C0B80u;
    {
        const bool branch_taken_0x2c0b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B80u;
        // 0x2c0b84: 0x8fa40064  lw          $a0, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0b80) {
            ctx->pc = 0x2C0C7Cu;
            goto label_2c0c7c;
        }
    }
    ctx->pc = 0x2C0B88u;
    // 0x2c0b88: 0x908021  addu        $s0, $a0, $s0
    ctx->pc = 0x2c0b88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_2c0b8c:
    // 0x2c0b8c: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x2c0b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x2c0b90: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c0b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0b94: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x2c0b94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c0b98: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2c0b98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0b9c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2c0b9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c0ba0: 0xc049c48  jal         func_127120
    ctx->pc = 0x2C0BA0u;
    SET_GPR_U32(ctx, 31, 0x2C0BA8u);
    ctx->pc = 0x2C0BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0BA0u;
    // 0x2c0ba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2C0BA0u, 0x2C0BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0BA8u;
label_2c0ba8:
    // 0x2c0ba8: 0x2158021  addu        $s0, $s0, $s5
    ctx->pc = 0x2c0ba8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x2c0bac: 0x2402003d  addiu       $v0, $zero, 0x3D
    ctx->pc = 0x2c0bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x2c0bb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c0bb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0bb4: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x2c0bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c0bb8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2c0bb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c0bbc: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x2c0bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2c0bc0: 0x1a200025  blez        $s1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2C0BC0u;
    {
        const bool branch_taken_0x2c0bc0 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x2C0BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0BC0u;
        // 0x2c0bc4: 0x8c470008  lw          $a3, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0bc0) {
            ctx->pc = 0x2C0C58u;
            goto label_2c0c58;
        }
    }
    ctx->pc = 0x2C0BC8u;
    // 0x2c0bc8: 0x26680001  addiu       $t0, $s3, 0x1
    ctx->pc = 0x2c0bc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2c0bcc: 0x30c20003  andi        $v0, $a2, 0x3
    ctx->pc = 0x2c0bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
label_2c0bd0:
    // 0x2c0bd0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c0bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c0bd4: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x2c0bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2c0bd8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c0bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c0bdc: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2C0BDCu;
    {
        const bool branch_taken_0x2c0bdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0BDCu;
        // 0x2c0be0: 0xe61821  addu        $v1, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0bdc) {
            ctx->pc = 0x2C0C40u;
            goto label_2c0c40;
        }
    }
    ctx->pc = 0x2C0BE4u;
    // 0x2c0be4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2c0be4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c0be8: 0x2462ffe0  addiu       $v0, $v1, -0x20
    ctx->pc = 0x2c0be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x2c0bec: 0x2c42005f  sltiu       $v0, $v0, 0x5F
    ctx->pc = 0x2c0becu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)95) ? 1 : 0);
    // 0x2c0bf0: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C0BF0u;
    {
        const bool branch_taken_0x2c0bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c0bf0) {
            ctx->pc = 0x2C0BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0BF0u;
            // 0x2c0bf4: 0xa2030000  sb          $v1, 0x0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0C3Cu;
            goto label_2c0c3c;
        }
    }
    ctx->pc = 0x2C0BF8u;
    // 0x2c0bf8: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x2c0bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2c0bfc: 0x32102  srl         $a0, $v1, 4
    ctx->pc = 0x2c0bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2c0c00: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x2c0c00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c0c04: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x2c0c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x2c0c08: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2c0c08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c0c0c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2c0c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2c0c10: 0xa2050000  sb          $a1, 0x0($s0)
    ctx->pc = 0x2c0c10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 5));
label_2c0c14:
    // 0x2c0c14: 0x24427e48  addiu       $v0, $v0, 0x7E48
    ctx->pc = 0x2c0c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32328));
    // 0x2c0c18: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2c0c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2c0c1c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2c0c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c0c20: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c0c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c0c24: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2c0c24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c0c28: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2c0c28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c0c2c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x2c0c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c0c30: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2c0c30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c0c34: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2c0c34u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c0c38: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x2c0c38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_2c0c3c:
    // 0x2c0c3c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2c0c3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2c0c40:
    // 0x2c0c40: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2c0c40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2c0c44: 0xd1102a  slt         $v0, $a2, $s1
    ctx->pc = 0x2c0c44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2c0c48: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x2C0C48u;
    {
        const bool branch_taken_0x2c0c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0C48u;
        // 0x2c0c4c: 0x30c20003  andi        $v0, $a2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0c48) {
            ctx->pc = 0x2C0BD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c0bd0;
        }
    }
    ctx->pc = 0x2C0C50u;
    // 0x2c0c50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0C50u;
    {
        const bool branch_taken_0x2c0c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0C50u;
        // 0x2c0c54: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0c50) {
            ctx->pc = 0x2C0C60u;
            goto label_2c0c60;
        }
    }
    ctx->pc = 0x2C0C58u;
label_2c0c58:
    // 0x2c0c58: 0x26680001  addiu       $t0, $s3, 0x1
    ctx->pc = 0x2c0c58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2c0c5c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x2c0c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_2c0c60:
    // 0x2c0c60: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2c0c60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0c64: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2c0c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c0c68: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2c0c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2c0c6c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c0c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c0c70: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x2c0c70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c0c74: 0x5440ff60  bnel        $v0, $zero, . + 4 + (-0xA0 << 2)
    ctx->pc = 0x2C0C74u;
    {
        const bool branch_taken_0x2c0c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c0c74) {
            ctx->pc = 0x2C0C78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0C74u;
            // 0x2c0c78: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C09F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c09f8;
        }
    }
    ctx->pc = 0x2C0C7Cu;
label_2c0c7c:
    // 0x2c0c7c: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C0C7Cu;
    {
        const bool branch_taken_0x2c0c7c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0C7Cu;
        // 0x2c0c80: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0c7c) {
            ctx->pc = 0x2C0C94u;
            goto label_2c0c94;
        }
    }
    ctx->pc = 0x2C0C84u;
    // 0x2c0c84: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x2C0C84u;
    SET_GPR_U32(ctx, 31, 0x2C0C8Cu);
    ctx->pc = 0x2C0C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0C84u;
    // 0x2c0c88: 0x8ef00004  lw          $s0, 0x4($s7) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x2C0C84u, 0x2C0C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0C8Cu;
label_2c0c8c:
    // 0x2c0c8c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2C0C8Cu;
    {
        const bool branch_taken_0x2c0c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0C8Cu;
        // 0x2c0c90: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0c8c) {
            ctx->pc = 0x2C0CCCu;
            goto label_2c0ccc;
        }
    }
    ctx->pc = 0x2C0C94u;
label_2c0c94:
    // 0x2c0c94: 0x8fb00064  lw          $s0, 0x64($sp)
    ctx->pc = 0x2c0c94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x2c0c98: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2C0C98u;
    {
        const bool branch_taken_0x2c0c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0C98u;
        // 0x2c0c9c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0c98) {
            ctx->pc = 0x2C0CCCu;
            goto label_2c0ccc;
        }
    }
    ctx->pc = 0x2C0CA0u;
label_2c0ca0:
    // 0x2c0ca0: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2c0ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2c0ca4:
    // 0x2c0ca4: 0x240500e6  addiu       $a1, $zero, 0xE6
    ctx->pc = 0x2c0ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
    // 0x2c0ca8: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2c0ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2c0cac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c0cacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0cb0: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2C0CB0u;
    SET_GPR_U32(ctx, 31, 0x2C0CB8u);
    ctx->pc = 0x2C0CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0CB0u;
    // 0x2c0cb4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2C0CB0u, 0x2C0CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0CB8u;
label_2c0cb8:
    // 0x2c0cb8: 0x12e00004  beqz        $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C0CB8u;
    {
        const bool branch_taken_0x2c0cb8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0CB8u;
        // 0x2c0cbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0cb8) {
            ctx->pc = 0x2C0CCCu;
            goto label_2c0ccc;
        }
    }
    ctx->pc = 0x2C0CC0u;
    // 0x2c0cc0: 0xc0a32ca  jal         func_28CB28
    ctx->pc = 0x2C0CC0u;
    SET_GPR_U32(ctx, 31, 0x2C0CC8u);
    ctx->pc = 0x2C0CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0CC0u;
    // 0x2c0cc4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CB28u, 0x2C0CC0u, 0x2C0CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0CC8u;
label_2c0cc8:
    // 0x2c0cc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c0cc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c0ccc:
    // 0x2c0ccc: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x2c0cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2c0cd0: 0xdfbe00f0  ld          $fp, 0xF0($sp)
    ctx->pc = 0x2c0cd0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2c0cd4: 0xdfb700e0  ld          $s7, 0xE0($sp)
    ctx->pc = 0x2c0cd4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2c0cd8: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x2c0cd8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2c0cdc: 0xdfb500c0  ld          $s5, 0xC0($sp)
    ctx->pc = 0x2c0cdcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2c0ce0: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x2c0ce0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2c0ce4: 0xdfb300a0  ld          $s3, 0xA0($sp)
    ctx->pc = 0x2c0ce4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c0ce8: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x2c0ce8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c0cec: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x2c0cecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c0cf0: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x2c0cf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c0cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0CF4u;
        // 0x2c0cf8: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0CFCu;
    // 0x2c0cfc: 0x0  nop
    ctx->pc = 0x2c0cfcu;
    // NOP
    if (ctx->pc == 0x2c0cfcu) { ctx->pc = 0x2c0d00u; }
}
