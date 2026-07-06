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

// Function: sub_0021DD48
// Address: 0x21dd48 - 0x21e0a8
void sub_0021DD48_0x21dd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021DD48_0x21dd48");
#endif

    switch (ctx->pc) {
        case 0x21dd64u: goto label_21dd64;
        case 0x21dd74u: goto label_21dd74;
        case 0x21dd84u: goto label_21dd84;
        case 0x21dd94u: goto label_21dd94;
        case 0x21dda4u: goto label_21dda4;
        case 0x21ddb4u: goto label_21ddb4;
        case 0x21ddc4u: goto label_21ddc4;
        case 0x21ddd4u: goto label_21ddd4;
        case 0x21dde4u: goto label_21dde4;
        case 0x21ddf4u: goto label_21ddf4;
        case 0x21de04u: goto label_21de04;
        case 0x21de6cu: goto label_21de6c;
        case 0x21de80u: goto label_21de80;
        case 0x21de94u: goto label_21de94;
        case 0x21dea8u: goto label_21dea8;
        case 0x21debcu: goto label_21debc;
        case 0x21ded0u: goto label_21ded0;
        case 0x21dee4u: goto label_21dee4;
        case 0x21def8u: goto label_21def8;
        case 0x21df0cu: goto label_21df0c;
        case 0x21df20u: goto label_21df20;
        case 0x21df34u: goto label_21df34;
        case 0x21df44u: goto label_21df44;
        case 0x21dfacu: goto label_21dfac;
        case 0x21dfc0u: goto label_21dfc0;
        case 0x21dfd4u: goto label_21dfd4;
        case 0x21dfe8u: goto label_21dfe8;
        case 0x21dffcu: goto label_21dffc;
        case 0x21e010u: goto label_21e010;
        case 0x21e024u: goto label_21e024;
        case 0x21e038u: goto label_21e038;
        case 0x21e04cu: goto label_21e04c;
        case 0x21e060u: goto label_21e060;
        case 0x21e074u: goto label_21e074;
        case 0x21e07cu: goto label_21e07c;
        default: break;
    }

    ctx->pc = 0x21dd48u;

label_21dd48:
    // 0x21dd48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21dd48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21dd4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21dd4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21dd50: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21dd50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21dd54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21dd54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dd58: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21dd58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21dd5c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21DD5Cu;
    SET_GPR_U32(ctx, 31, 0x21DD64u);
    ctx->pc = 0x21DD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DD5Cu;
    // 0x21dd60: 0x24841a98  addiu       $a0, $a0, 0x1A98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21DD5Cu, 0x21DD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DD64u;
label_21dd64:
    // 0x21dd64: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21dd64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21dd68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21dd68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dd6c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21DD6Cu;
    SET_GPR_U32(ctx, 31, 0x21DD74u);
    ctx->pc = 0x21DD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DD6Cu;
    // 0x21dd70: 0x24841ab8  addiu       $a0, $a0, 0x1AB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21DD6Cu, 0x21DD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DD74u;
label_21dd74:
    // 0x21dd74: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21dd74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21dd78: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x21dd78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x21dd7c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21DD7Cu;
    SET_GPR_U32(ctx, 31, 0x21DD84u);
    ctx->pc = 0x21DD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DD7Cu;
    // 0x21dd80: 0x24841a88  addiu       $a0, $a0, 0x1A88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21DD7Cu, 0x21DD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DD84u;
label_21dd84:
    // 0x21dd84: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21dd84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21dd88: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x21dd88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x21dd8c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21DD8Cu;
    SET_GPR_U32(ctx, 31, 0x21DD94u);
    ctx->pc = 0x21DD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DD8Cu;
    // 0x21dd90: 0x24841ac8  addiu       $a0, $a0, 0x1AC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21DD8Cu, 0x21DD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DD94u;
label_21dd94:
    // 0x21dd94: 0x8e050080  lw          $a1, 0x80($s0)
    ctx->pc = 0x21dd94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x21dd98: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21dd98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21dd9c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21DD9Cu;
    SET_GPR_U32(ctx, 31, 0x21DDA4u);
    ctx->pc = 0x21DDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DD9Cu;
    // 0x21dda0: 0x24841ad8  addiu       $a0, $a0, 0x1AD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21DD9Cu, 0x21DDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DDA4u;
label_21dda4:
    // 0x21dda4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21dda4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21dda8: 0x26050084  addiu       $a1, $s0, 0x84
    ctx->pc = 0x21dda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x21ddac: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21DDACu;
    SET_GPR_U32(ctx, 31, 0x21DDB4u);
    ctx->pc = 0x21DDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DDACu;
    // 0x21ddb0: 0x24841ae8  addiu       $a0, $a0, 0x1AE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21DDACu, 0x21DDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DDB4u;
label_21ddb4:
    // 0x21ddb4: 0x8e0500c4  lw          $a1, 0xC4($s0)
    ctx->pc = 0x21ddb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x21ddb8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21ddb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21ddbc: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21DDBCu;
    SET_GPR_U32(ctx, 31, 0x21DDC4u);
    ctx->pc = 0x21DDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DDBCu;
    // 0x21ddc0: 0x24841af8  addiu       $a0, $a0, 0x1AF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21DDBCu, 0x21DDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DDC4u;
label_21ddc4:
    // 0x21ddc4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21ddc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21ddc8: 0x260500c8  addiu       $a1, $s0, 0xC8
    ctx->pc = 0x21ddc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
    // 0x21ddcc: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21DDCCu;
    SET_GPR_U32(ctx, 31, 0x21DDD4u);
    ctx->pc = 0x21DDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DDCCu;
    // 0x21ddd0: 0x24841b08  addiu       $a0, $a0, 0x1B08 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21DDCCu, 0x21DDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DDD4u;
label_21ddd4:
    // 0x21ddd4: 0x8e050108  lw          $a1, 0x108($s0)
    ctx->pc = 0x21ddd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x21ddd8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21ddd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21dddc: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21DDDCu;
    SET_GPR_U32(ctx, 31, 0x21DDE4u);
    ctx->pc = 0x21DDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DDDCu;
    // 0x21dde0: 0x24841b18  addiu       $a0, $a0, 0x1B18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21DDDCu, 0x21DDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DDE4u;
label_21dde4:
    // 0x21dde4: 0x8e05010c  lw          $a1, 0x10C($s0)
    ctx->pc = 0x21dde4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x21dde8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21dde8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21ddec: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21DDECu;
    SET_GPR_U32(ctx, 31, 0x21DDF4u);
    ctx->pc = 0x21DDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DDECu;
    // 0x21ddf0: 0x248419b8  addiu       $a0, $a0, 0x19B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21DDECu, 0x21DDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DDF4u;
label_21ddf4:
    // 0x21ddf4: 0x8e050110  lw          $a1, 0x110($s0)
    ctx->pc = 0x21ddf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x21ddf8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21ddf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21ddfc: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21DDFCu;
    SET_GPR_U32(ctx, 31, 0x21DE04u);
    ctx->pc = 0x21DE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DDFCu;
    // 0x21de00: 0x248419c8  addiu       $a0, $a0, 0x19C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21DDFCu, 0x21DE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DE04u;
label_21de04:
    // 0x21de04: 0x26100114  addiu       $s0, $s0, 0x114
    ctx->pc = 0x21de04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 276));
    // 0x21de08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21de08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21de0c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21de0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21de10: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21de10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21de14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21de14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21de18: 0x248419d8  addiu       $a0, $a0, 0x19D8
    ctx->pc = 0x21de18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6616));
    // 0x21de1c: 0x8043e52  j           func_10F948
    ctx->pc = 0x21DE1Cu;
    ctx->pc = 0x21DE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DE1Cu;
    // 0x21de20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x21DE24u;
    // 0x21de24: 0x0  nop
    ctx->pc = 0x21de24u;
    // NOP
    // 0x21de28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21de28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21de2c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21de2cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21de30: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21de30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21de34: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x21de34u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x21de38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21de38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21de3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21de3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21de40: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21de40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21de44: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x21de44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21de48: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21de48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21de4c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21de4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21de50: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21de50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21de54: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21de54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21de58: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21de58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21de5c: 0x8cd30000  lw          $s3, 0x0($a2)
    ctx->pc = 0x21de5cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21de60: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x21de60u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21de64: 0xc08449a  jal         func_211268
    ctx->pc = 0x21DE64u;
    SET_GPR_U32(ctx, 31, 0x21DE6Cu);
    ctx->pc = 0x21DE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DE64u;
    // 0x21de68: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211268u, 0x21DE64u, 0x21DE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DE6Cu;
label_21de6c:
    // 0x21de6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21de6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21de70: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21de70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21de74: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21de74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21de78: 0xc08449a  jal         func_211268
    ctx->pc = 0x21DE78u;
    SET_GPR_U32(ctx, 31, 0x21DE80u);
    ctx->pc = 0x21DE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DE78u;
    // 0x21de7c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211268u, 0x21DE78u, 0x21DE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DE80u;
label_21de80:
    // 0x21de80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21de80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21de84: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21de84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21de88: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21de88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21de8c: 0xc08449a  jal         func_211268
    ctx->pc = 0x21DE8Cu;
    SET_GPR_U32(ctx, 31, 0x21DE94u);
    ctx->pc = 0x21DE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DE8Cu;
    // 0x21de90: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211268u, 0x21DE8Cu, 0x21DE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DE94u;
label_21de94:
    // 0x21de94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21de94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21de98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21de98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21de9c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21de9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dea0: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21DEA0u;
    SET_GPR_U32(ctx, 31, 0x21DEA8u);
    ctx->pc = 0x21DEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DEA0u;
    // 0x21dea4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x21DEA0u, 0x21DEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DEA8u;
label_21dea8:
    // 0x21dea8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21dea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21deac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21deacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21deb0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21deb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21deb4: 0xc08449a  jal         func_211268
    ctx->pc = 0x21DEB4u;
    SET_GPR_U32(ctx, 31, 0x21DEBCu);
    ctx->pc = 0x21DEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DEB4u;
    // 0x21deb8: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211268u, 0x21DEB4u, 0x21DEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DEBCu;
label_21debc:
    // 0x21debc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21debcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dec0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21dec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dec4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21dec4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dec8: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21DEC8u;
    SET_GPR_U32(ctx, 31, 0x21DED0u);
    ctx->pc = 0x21DECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DEC8u;
    // 0x21decc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x21DEC8u, 0x21DED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DED0u;
label_21ded0:
    // 0x21ded0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21ded0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ded4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21ded4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ded8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21ded8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dedc: 0xc08449a  jal         func_211268
    ctx->pc = 0x21DEDCu;
    SET_GPR_U32(ctx, 31, 0x21DEE4u);
    ctx->pc = 0x21DEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DEDCu;
    // 0x21dee0: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211268u, 0x21DEDCu, 0x21DEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DEE4u;
label_21dee4:
    // 0x21dee4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21dee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dee8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21dee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21deec: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21deecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21def0: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21DEF0u;
    SET_GPR_U32(ctx, 31, 0x21DEF8u);
    ctx->pc = 0x21DEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DEF0u;
    // 0x21def4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x21DEF0u, 0x21DEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DEF8u;
label_21def8:
    // 0x21def8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21def8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21defc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21defcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21df00: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21df00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21df04: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21DF04u;
    SET_GPR_U32(ctx, 31, 0x21DF0Cu);
    ctx->pc = 0x21DF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DF04u;
    // 0x21df08: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x21DF04u, 0x21DF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DF0Cu;
label_21df0c:
    // 0x21df0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21df0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21df10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21df10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21df14: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21df14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21df18: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21DF18u;
    SET_GPR_U32(ctx, 31, 0x21DF20u);
    ctx->pc = 0x21DF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DF18u;
    // 0x21df1c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x21DF18u, 0x21DF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DF20u;
label_21df20:
    // 0x21df20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21df20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21df24: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21df24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21df28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21df28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21df2c: 0xc08449a  jal         func_211268
    ctx->pc = 0x21DF2Cu;
    SET_GPR_U32(ctx, 31, 0x21DF34u);
    ctx->pc = 0x21DF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DF2Cu;
    // 0x21df30: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211268u, 0x21DF2Cu, 0x21DF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DF34u;
label_21df34:
    // 0x21df34: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x21df34u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21df38: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x21df38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21df3c: 0xc087752  jal         func_21DD48
    ctx->pc = 0x21DF3Cu;
    SET_GPR_U32(ctx, 31, 0x21DF44u);
    ctx->pc = 0x21DF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DF3Cu;
    // 0x21df40: 0x26f9823  subu        $s3, $s3, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21DD48u;
    goto label_21dd48;
    ctx->pc = 0x21DF44u;
label_21df44:
    // 0x21df44: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x21df44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21df48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21df48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21df4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21df4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21df50: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21df50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21df54: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21df54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21df58: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21df58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21df5c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21df5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21df60: 0x3e00008  jr          $ra
    ctx->pc = 0x21DF60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21DF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DF60u;
        // 0x21df64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21DF60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21DF68u;
    // 0x21df68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21df68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21df6c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21df6cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21df70: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21df70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21df74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21df74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21df78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21df78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21df7c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21df7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21df80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21df80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21df84: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21df84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21df88: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21df88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21df8c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21df8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21df90: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21df90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21df94: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x21df94u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x21df98: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21df98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21df9c: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x21df9cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21dfa0: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x21dfa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x21dfa4: 0xc0845c2  jal         func_211708
    ctx->pc = 0x21DFA4u;
    SET_GPR_U32(ctx, 31, 0x21DFACu);
    ctx->pc = 0x21DFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DFA4u;
    // 0x21dfa8: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211708u, 0x21DFA4u, 0x21DFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DFACu;
label_21dfac:
    // 0x21dfac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21dfacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dfb0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21dfb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dfb4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21dfb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dfb8: 0xc0845c2  jal         func_211708
    ctx->pc = 0x21DFB8u;
    SET_GPR_U32(ctx, 31, 0x21DFC0u);
    ctx->pc = 0x21DFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DFB8u;
    // 0x21dfbc: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211708u, 0x21DFB8u, 0x21DFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DFC0u;
label_21dfc0:
    // 0x21dfc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21dfc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dfc4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21dfc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dfc8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21dfc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dfcc: 0xc0845c2  jal         func_211708
    ctx->pc = 0x21DFCCu;
    SET_GPR_U32(ctx, 31, 0x21DFD4u);
    ctx->pc = 0x21DFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DFCCu;
    // 0x21dfd0: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211708u, 0x21DFCCu, 0x21DFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DFD4u;
label_21dfd4:
    // 0x21dfd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21dfd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dfd8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21dfd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dfdc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21dfdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dfe0: 0xc084612  jal         func_211848
    ctx->pc = 0x21DFE0u;
    SET_GPR_U32(ctx, 31, 0x21DFE8u);
    ctx->pc = 0x21DFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DFE0u;
    // 0x21dfe4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x21DFE0u, 0x21DFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DFE8u;
label_21dfe8:
    // 0x21dfe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21dfe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dfec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21dfecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dff0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21dff0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dff4: 0xc0845c2  jal         func_211708
    ctx->pc = 0x21DFF4u;
    SET_GPR_U32(ctx, 31, 0x21DFFCu);
    ctx->pc = 0x21DFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DFF4u;
    // 0x21dff8: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211708u, 0x21DFF4u, 0x21DFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DFFCu;
label_21dffc:
    // 0x21dffc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21dffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e000: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21e000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e004: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21e004u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e008: 0xc084612  jal         func_211848
    ctx->pc = 0x21E008u;
    SET_GPR_U32(ctx, 31, 0x21E010u);
    ctx->pc = 0x21E00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E008u;
    // 0x21e00c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x21E008u, 0x21E010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E010u;
label_21e010:
    // 0x21e010: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21e010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e014: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21e014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e018: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21e018u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e01c: 0xc0845c2  jal         func_211708
    ctx->pc = 0x21E01Cu;
    SET_GPR_U32(ctx, 31, 0x21E024u);
    ctx->pc = 0x21E020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E01Cu;
    // 0x21e020: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211708u, 0x21E01Cu, 0x21E024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E024u;
label_21e024:
    // 0x21e024: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21e024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e028: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21e028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e02c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21e02cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e030: 0xc084612  jal         func_211848
    ctx->pc = 0x21E030u;
    SET_GPR_U32(ctx, 31, 0x21E038u);
    ctx->pc = 0x21E034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E030u;
    // 0x21e034: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x21E030u, 0x21E038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E038u;
label_21e038:
    // 0x21e038: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21e038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e03c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21e03cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e040: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21e040u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e044: 0xc084612  jal         func_211848
    ctx->pc = 0x21E044u;
    SET_GPR_U32(ctx, 31, 0x21E04Cu);
    ctx->pc = 0x21E048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E044u;
    // 0x21e048: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x21E044u, 0x21E04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E04Cu;
label_21e04c:
    // 0x21e04c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21e04cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e050: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21e050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e054: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21e054u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e058: 0xc084612  jal         func_211848
    ctx->pc = 0x21E058u;
    SET_GPR_U32(ctx, 31, 0x21E060u);
    ctx->pc = 0x21E05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E058u;
    // 0x21e05c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x21E058u, 0x21E060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E060u;
label_21e060:
    // 0x21e060: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21e060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e064: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21e064u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e068: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21e068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e06c: 0xc0845c2  jal         func_211708
    ctx->pc = 0x21E06Cu;
    SET_GPR_U32(ctx, 31, 0x21E074u);
    ctx->pc = 0x21E070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E06Cu;
    // 0x21e070: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211708u, 0x21E06Cu, 0x21E074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E074u;
label_21e074:
    // 0x21e074: 0xc087752  jal         func_21DD48
    ctx->pc = 0x21E074u;
    SET_GPR_U32(ctx, 31, 0x21E07Cu);
    ctx->pc = 0x21E078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E074u;
    // 0x21e078: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21DD48u;
    goto label_21dd48;
    ctx->pc = 0x21E07Cu;
label_21e07c:
    // 0x21e07c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x21e07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21e080: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21e080u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e084: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x21e084u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x21e088: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21e088u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21e08c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21e08cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21e090: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21e090u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21e094: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21e094u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21e098: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21e098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21e09c: 0x3e00008  jr          $ra
    ctx->pc = 0x21E09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E09Cu;
        // 0x21e0a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E09Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E0A4u;
    // 0x21e0a4: 0x0  nop
    ctx->pc = 0x21e0a4u;
    // NOP
    if (ctx->pc == 0x21e0a4u) { ctx->pc = 0x21e0a8u; }
}
