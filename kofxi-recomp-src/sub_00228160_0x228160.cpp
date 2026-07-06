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

// Function: sub_00228160
// Address: 0x228160 - 0x228230
void sub_00228160_0x228160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228160_0x228160");
#endif

    switch (ctx->pc) {
        case 0x2281a0u: goto label_2281a0;
        case 0x2281b8u: goto label_2281b8;
        default: break;
    }

    ctx->pc = 0x228160u;

    // 0x228160: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x228160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x228164: 0x5102a  slt         $v0, $zero, $a1
    ctx->pc = 0x228164u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x228168: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x228168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x22816c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22816cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x228170: 0x3c14003a  lui         $s4, 0x3A
    ctx->pc = 0x228170u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
    // 0x228174: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x228174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x228178: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x228178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22817c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x22817cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x228180: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x228180u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228184: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x228184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x228188: 0xa2880b  movn        $s1, $a1, $v0
    ctx->pc = 0x228188u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 5));
    // 0x22818c: 0x8e84f580  lw          $a0, -0xA80($s4)
    ctx->pc = 0x22818cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294964608)));
    // 0x228190: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x228190u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228194: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x228194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x228198: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x228198u;
    SET_GPR_U32(ctx, 31, 0x2281A0u);
    ctx->pc = 0x22819Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228198u;
    // 0x22819c: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x228198u, 0x2281A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2281A0u;
label_2281a0:
    // 0x2281a0: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x2281a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2281a4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2281a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2281a8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2281A8u;
    {
        const bool branch_taken_0x2281a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2281ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2281A8u;
        // 0x2281ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2281a8) {
            ctx->pc = 0x2281B8u;
            goto label_2281b8;
        }
    }
    ctx->pc = 0x2281B0u;
    // 0x2281b0: 0xc08a08e  jal         func_228238
    ctx->pc = 0x2281B0u;
    SET_GPR_U32(ctx, 31, 0x2281B8u);
    ctx->pc = 0x2281B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2281B0u;
    // 0x2281b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228238u, 0x2281B0u, 0x2281B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2281B8u;
label_2281b8:
    // 0x2281b8: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2281b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2281bc: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x2281bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x2281c0: 0xdc6217d0  ld          $v0, 0x17D0($v1)
    ctx->pc = 0x2281c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 6096)));
    // 0x2281c4: 0x24a5f588  addiu       $a1, $a1, -0xA78
    ctx->pc = 0x2281c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964616));
    // 0x2281c8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2281c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2281cc: 0xae120010  sw          $s2, 0x10($s0)
    ctx->pc = 0x2281ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
    // 0x2281d0: 0x222102d  daddu       $v0, $s1, $v0
    ctx->pc = 0x2281d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2281d4: 0xae130014  sw          $s3, 0x14($s0)
    ctx->pc = 0x2281d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 19));
    // 0x2281d8: 0x3044007f  andi        $a0, $v0, 0x7F
    ctx->pc = 0x2281d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x2281dc: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x2281dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x2281e0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2281e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2281e4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2281e4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2281e8: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x2281e8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x2281ec: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2281ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2281f0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2281f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2281f4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2281f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2281f8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2281f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2281fc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2281fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x228200: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x228200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x228204: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x228204u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x228208: 0xac900004  sw          $s0, 0x4($a0)
    ctx->pc = 0x228208u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 16));
    // 0x22820c: 0x8e84f580  lw          $a0, -0xA80($s4)
    ctx->pc = 0x22820cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294964608)));
    // 0x228210: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x228210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x228214: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x228214u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x228218: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x228218u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22821c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22821cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228220: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x228220u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228224: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x228224u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228228: 0x8043320  j           func_10CC80
    ctx->pc = 0x228228u;
    ctx->pc = 0x22822Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228228u;
    // 0x22822c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    sub_0010CC80_0x10cc80(rdram, ctx, runtime); return;
    ctx->pc = 0x228230u;
}
