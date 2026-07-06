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

// Function: sub_002150A0
// Address: 0x2150a0 - 0x215360
void sub_002150A0_0x2150a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002150A0_0x2150a0");
#endif

    switch (ctx->pc) {
        case 0x2150bcu: goto label_2150bc;
        case 0x2150ccu: goto label_2150cc;
        case 0x2150dcu: goto label_2150dc;
        case 0x2150ecu: goto label_2150ec;
        case 0x2150fcu: goto label_2150fc;
        case 0x21510cu: goto label_21510c;
        case 0x21511cu: goto label_21511c;
        case 0x215184u: goto label_215184;
        case 0x215198u: goto label_215198;
        case 0x2151acu: goto label_2151ac;
        case 0x2151c0u: goto label_2151c0;
        case 0x2151d4u: goto label_2151d4;
        case 0x2151e8u: goto label_2151e8;
        case 0x2151fcu: goto label_2151fc;
        case 0x21520cu: goto label_21520c;
        case 0x215224u: goto label_215224;
        case 0x215294u: goto label_215294;
        case 0x2152a8u: goto label_2152a8;
        case 0x2152bcu: goto label_2152bc;
        case 0x2152d0u: goto label_2152d0;
        case 0x2152e4u: goto label_2152e4;
        case 0x2152f8u: goto label_2152f8;
        case 0x21530cu: goto label_21530c;
        case 0x21531cu: goto label_21531c;
        case 0x215330u: goto label_215330;
        default: break;
    }

    ctx->pc = 0x2150a0u;

label_2150a0:
    // 0x2150a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2150a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2150a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2150a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2150a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2150a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2150ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2150acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2150b0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2150b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2150b4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2150B4u;
    SET_GPR_U32(ctx, 31, 0x2150BCu);
    ctx->pc = 0x2150B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2150B4u;
    // 0x2150b8: 0x24840a28  addiu       $a0, $a0, 0xA28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2150B4u, 0x2150BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2150BCu;
label_2150bc:
    // 0x2150bc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2150bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2150c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2150c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2150c4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2150C4u;
    SET_GPR_U32(ctx, 31, 0x2150CCu);
    ctx->pc = 0x2150C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2150C4u;
    // 0x2150c8: 0x24840868  addiu       $a0, $a0, 0x868 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2150C4u, 0x2150CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2150CCu;
label_2150cc:
    // 0x2150cc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2150ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2150d0: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x2150d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2150d4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2150D4u;
    SET_GPR_U32(ctx, 31, 0x2150DCu);
    ctx->pc = 0x2150D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2150D4u;
    // 0x2150d8: 0x24840a48  addiu       $a0, $a0, 0xA48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2150D4u, 0x2150DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2150DCu;
label_2150dc:
    // 0x2150dc: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x2150dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2150e0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2150e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2150e4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2150E4u;
    SET_GPR_U32(ctx, 31, 0x2150ECu);
    ctx->pc = 0x2150E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2150E4u;
    // 0x2150e8: 0x248409e8  addiu       $a0, $a0, 0x9E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2150E4u, 0x2150ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2150ECu;
label_2150ec:
    // 0x2150ec: 0x8e050044  lw          $a1, 0x44($s0)
    ctx->pc = 0x2150ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x2150f0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2150f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2150f4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2150F4u;
    SET_GPR_U32(ctx, 31, 0x2150FCu);
    ctx->pc = 0x2150F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2150F4u;
    // 0x2150f8: 0x248409f8  addiu       $a0, $a0, 0x9F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2150F4u, 0x2150FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2150FCu;
label_2150fc:
    // 0x2150fc: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x2150fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x215100: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x215100u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x215104: 0xc043e52  jal         func_10F948
    ctx->pc = 0x215104u;
    SET_GPR_U32(ctx, 31, 0x21510Cu);
    ctx->pc = 0x215108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215104u;
    // 0x215108: 0x248408d8  addiu       $a0, $a0, 0x8D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x215104u, 0x21510Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21510Cu;
label_21510c:
    // 0x21510c: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x21510cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x215110: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x215110u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x215114: 0xc043e52  jal         func_10F948
    ctx->pc = 0x215114u;
    SET_GPR_U32(ctx, 31, 0x21511Cu);
    ctx->pc = 0x215118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215114u;
    // 0x215118: 0x248408e8  addiu       $a0, $a0, 0x8E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x215114u, 0x21511Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21511Cu;
label_21511c:
    // 0x21511c: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x21511cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x215120: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x215120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215124: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x215124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x215128: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x215128u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21512c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21512cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215130: 0x248408f8  addiu       $a0, $a0, 0x8F8
    ctx->pc = 0x215130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2296));
    // 0x215134: 0x8043e52  j           func_10F948
    ctx->pc = 0x215134u;
    ctx->pc = 0x215138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215134u;
    // 0x215138: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x21513Cu;
    // 0x21513c: 0x0  nop
    ctx->pc = 0x21513cu;
    // NOP
    // 0x215140: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x215140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x215144: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x215144u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x215148: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x215148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21514c: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x21514cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x215150: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x215150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x215154: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x215154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x215158: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x215158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21515c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21515cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215160: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x215160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x215164: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x215164u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215168: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x215168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21516c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x21516cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215170: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x215170u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215174: 0x8cd40000  lw          $s4, 0x0($a2)
    ctx->pc = 0x215174u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x215178: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x215178u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21517c: 0xc08447c  jal         func_2111F0
    ctx->pc = 0x21517Cu;
    SET_GPR_U32(ctx, 31, 0x215184u);
    ctx->pc = 0x215180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21517Cu;
    // 0x215180: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2111F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2111F0u, 0x21517Cu, 0x215184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215184u;
label_215184:
    // 0x215184: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x215184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215188: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x215188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21518c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x21518cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x215190: 0xc08449a  jal         func_211268
    ctx->pc = 0x215190u;
    SET_GPR_U32(ctx, 31, 0x215198u);
    ctx->pc = 0x215194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215190u;
    // 0x215194: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211268u, 0x215190u, 0x215198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215198u;
label_215198:
    // 0x215198: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x215198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21519c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21519cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2151a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2151a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2151a4: 0xc0844dc  jal         func_211370
    ctx->pc = 0x2151A4u;
    SET_GPR_U32(ctx, 31, 0x2151ACu);
    ctx->pc = 0x2151A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2151A4u;
    // 0x2151a8: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x2151A4u, 0x2151ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2151ACu;
label_2151ac:
    // 0x2151ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2151acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2151b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2151b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2151b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2151b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2151b8: 0xc0844dc  jal         func_211370
    ctx->pc = 0x2151B8u;
    SET_GPR_U32(ctx, 31, 0x2151C0u);
    ctx->pc = 0x2151BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2151B8u;
    // 0x2151bc: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x2151B8u, 0x2151C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2151C0u;
label_2151c0:
    // 0x2151c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2151c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2151c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2151c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2151c8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2151c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2151cc: 0xc0844dc  jal         func_211370
    ctx->pc = 0x2151CCu;
    SET_GPR_U32(ctx, 31, 0x2151D4u);
    ctx->pc = 0x2151D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2151CCu;
    // 0x2151d0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x2151CCu, 0x2151D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2151D4u;
label_2151d4:
    // 0x2151d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2151d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2151d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2151d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2151dc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2151dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2151e0: 0xc0844dc  jal         func_211370
    ctx->pc = 0x2151E0u;
    SET_GPR_U32(ctx, 31, 0x2151E8u);
    ctx->pc = 0x2151E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2151E0u;
    // 0x2151e4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x2151E0u, 0x2151E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2151E8u;
label_2151e8:
    // 0x2151e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2151e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2151ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2151ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2151f0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2151f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2151f4: 0xc08449a  jal         func_211268
    ctx->pc = 0x2151F4u;
    SET_GPR_U32(ctx, 31, 0x2151FCu);
    ctx->pc = 0x2151F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2151F4u;
    // 0x2151f8: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211268u, 0x2151F4u, 0x2151FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2151FCu;
label_2151fc:
    // 0x2151fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2151fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215200: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x215200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215204: 0xc0849ec  jal         func_2127B0
    ctx->pc = 0x215204u;
    SET_GPR_U32(ctx, 31, 0x21520Cu);
    ctx->pc = 0x215208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215204u;
    // 0x215208: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2127B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2127B0u, 0x215204u, 0x21520Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21520Cu;
label_21520c:
    // 0x21520c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21520cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215210: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x215210u;
    {
        const bool branch_taken_0x215210 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x215214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215210u;
        // 0x215214: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215210) {
            ctx->pc = 0x215228u;
            goto label_215228;
        }
    }
    ctx->pc = 0x215218u;
    // 0x215218: 0x8e6f0000  lw          $t7, 0x0($s3)
    ctx->pc = 0x215218u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x21521c: 0xc085428  jal         func_2150A0
    ctx->pc = 0x21521Cu;
    SET_GPR_U32(ctx, 31, 0x215224u);
    ctx->pc = 0x215220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21521Cu;
    // 0x215220: 0x28fa023  subu        $s4, $s4, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2150A0u;
    goto label_2150a0;
    ctx->pc = 0x215224u;
label_215224:
    // 0x215224: 0x280782d  daddu       $t7, $s4, $zero
    ctx->pc = 0x215224u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_215228:
    // 0x215228: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x215228u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21522c: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x21522cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215230: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x215230u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x215234: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x215234u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215238: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x215238u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21523c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21523cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215240: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x215240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x215244: 0x3e00008  jr          $ra
    ctx->pc = 0x215244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215244u;
        // 0x215248: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21524Cu;
    // 0x21524c: 0x0  nop
    ctx->pc = 0x21524cu;
    // NOP
    // 0x215250: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x215250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x215254: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x215254u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x215258: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x215258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21525c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21525cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x215260: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x215260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x215264: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x215264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x215268: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x215268u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21526c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21526cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x215270: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x215270u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215274: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x215274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x215278: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x215278u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21527c: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x21527cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x215280: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x215280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x215284: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x215284u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x215288: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x215288u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21528c: 0xc084582  jal         func_211608
    ctx->pc = 0x21528Cu;
    SET_GPR_U32(ctx, 31, 0x215294u);
    ctx->pc = 0x215290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21528Cu;
    // 0x215290: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211608u, 0x21528Cu, 0x215294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215294u;
label_215294:
    // 0x215294: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x215294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215298: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x215298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21529c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x21529cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2152a0: 0xc0845c2  jal         func_211708
    ctx->pc = 0x2152A0u;
    SET_GPR_U32(ctx, 31, 0x2152A8u);
    ctx->pc = 0x2152A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2152A0u;
    // 0x2152a4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211708u, 0x2152A0u, 0x2152A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2152A8u;
label_2152a8:
    // 0x2152a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2152a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2152ac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2152acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2152b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2152b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2152b4: 0xc084612  jal         func_211848
    ctx->pc = 0x2152B4u;
    SET_GPR_U32(ctx, 31, 0x2152BCu);
    ctx->pc = 0x2152B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2152B4u;
    // 0x2152b8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x2152B4u, 0x2152BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2152BCu;
label_2152bc:
    // 0x2152bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2152bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2152c0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2152c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2152c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2152c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2152c8: 0xc084612  jal         func_211848
    ctx->pc = 0x2152C8u;
    SET_GPR_U32(ctx, 31, 0x2152D0u);
    ctx->pc = 0x2152CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2152C8u;
    // 0x2152cc: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x2152C8u, 0x2152D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2152D0u;
label_2152d0:
    // 0x2152d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2152d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2152d4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2152d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2152d8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2152d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2152dc: 0xc084612  jal         func_211848
    ctx->pc = 0x2152DCu;
    SET_GPR_U32(ctx, 31, 0x2152E4u);
    ctx->pc = 0x2152E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2152DCu;
    // 0x2152e0: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x2152DCu, 0x2152E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2152E4u;
label_2152e4:
    // 0x2152e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2152e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2152e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2152e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2152ec: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2152ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2152f0: 0xc084612  jal         func_211848
    ctx->pc = 0x2152F0u;
    SET_GPR_U32(ctx, 31, 0x2152F8u);
    ctx->pc = 0x2152F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2152F0u;
    // 0x2152f4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x2152F0u, 0x2152F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2152F8u;
label_2152f8:
    // 0x2152f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2152f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2152fc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2152fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215300: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x215300u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215304: 0xc0845c2  jal         func_211708
    ctx->pc = 0x215304u;
    SET_GPR_U32(ctx, 31, 0x21530Cu);
    ctx->pc = 0x215308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215304u;
    // 0x215308: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211708u, 0x215304u, 0x21530Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21530Cu;
label_21530c:
    // 0x21530c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21530cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215310: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x215310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215314: 0xc084a6a  jal         func_2129A8
    ctx->pc = 0x215314u;
    SET_GPR_U32(ctx, 31, 0x21531Cu);
    ctx->pc = 0x215318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215314u;
    // 0x215318: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2129A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2129A8u, 0x215314u, 0x21531Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21531Cu;
label_21531c:
    // 0x21531c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21531cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215320: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x215320u;
    {
        const bool branch_taken_0x215320 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x215324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215320u;
        // 0x215324: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215320) {
            ctx->pc = 0x215338u;
            goto label_215338;
        }
    }
    ctx->pc = 0x215328u;
    // 0x215328: 0xc085428  jal         func_2150A0
    ctx->pc = 0x215328u;
    SET_GPR_U32(ctx, 31, 0x215330u);
    ctx->pc = 0x2150A0u;
    goto label_2150a0;
    ctx->pc = 0x215330u;
label_215330:
    // 0x215330: 0x8e6f0000  lw          $t7, 0x0($s3)
    ctx->pc = 0x215330u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x215334: 0x1f42823  subu        $a1, $t7, $s4
    ctx->pc = 0x215334u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 20)));
label_215338:
    // 0x215338: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x215338u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21533c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x21533cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215340: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x215340u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x215344: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x215344u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215348: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x215348u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21534c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21534cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215350: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x215350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x215354: 0x3e00008  jr          $ra
    ctx->pc = 0x215354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215354u;
        // 0x215358: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21535Cu;
    // 0x21535c: 0x0  nop
    ctx->pc = 0x21535cu;
    // NOP
    if (ctx->pc == 0x21535cu) { ctx->pc = 0x215360u; }
}
