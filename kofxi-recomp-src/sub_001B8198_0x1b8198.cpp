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

// Function: sub_001B8198
// Address: 0x1b8198 - 0x1b8298
void sub_001B8198_0x1b8198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8198_0x1b8198");
#endif

    switch (ctx->pc) {
        case 0x1b81c4u: goto label_1b81c4;
        case 0x1b81e0u: goto label_1b81e0;
        case 0x1b81ecu: goto label_1b81ec;
        case 0x1b8204u: goto label_1b8204;
        case 0x1b8214u: goto label_1b8214;
        case 0x1b822cu: goto label_1b822c;
        case 0x1b8234u: goto label_1b8234;
        case 0x1b825cu: goto label_1b825c;
        case 0x1b8280u: goto label_1b8280;
        default: break;
    }

    ctx->pc = 0x1b8198u;

    // 0x1b8198: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1b8198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1b819c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b819cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b81a0: 0x2442c328  addiu       $v0, $v0, -0x3CD8
    ctx->pc = 0x1b81a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951720));
    // 0x1b81a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b81a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b81a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b81a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b81ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b81acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b81b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b81b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b81b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b81b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b81b8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1b81b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b81bc: 0xc049c22  jal         func_127088
    ctx->pc = 0x1B81BCu;
    SET_GPR_U32(ctx, 31, 0x1B81C4u);
    ctx->pc = 0x1B81C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B81BCu;
    // 0x1b81c0: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127088u, 0x1B81BCu, 0x1B81C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B81C4u;
label_1b81c4:
    // 0x1b81c4: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1b81c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1b81c8: 0x2484c338  addiu       $a0, $a0, -0x3CC8
    ctx->pc = 0x1b81c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951736));
    // 0x1b81cc: 0x3c10001c  lui         $s0, 0x1C
    ctx->pc = 0x1b81ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)28 << 16));
    // 0x1b81d0: 0x240600e8  addiu       $a2, $zero, 0xE8
    ctx->pc = 0x1b81d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x1b81d4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1b81d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b81d8: 0xc049c22  jal         func_127088
    ctx->pc = 0x1B81D8u;
    SET_GPR_U32(ctx, 31, 0x1B81E0u);
    ctx->pc = 0x1B81DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B81D8u;
    // 0x1b81dc: 0x26108180  addiu       $s0, $s0, -0x7E80 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127088u, 0x1B81D8u, 0x1B81E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B81E0u;
label_1b81e0:
    // 0x1b81e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b81e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b81e4: 0xc06fe74  jal         func_1BF9D0
    ctx->pc = 0x1B81E4u;
    SET_GPR_U32(ctx, 31, 0x1B81ECu);
    ctx->pc = 0x1B81E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B81E4u;
    // 0x1b81e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF9D0u, 0x1B81E4u, 0x1B81ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B81ECu;
label_1b81ec:
    // 0x1b81ec: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1b81ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1b81f0: 0x3c05001c  lui         $a1, 0x1C
    ctx->pc = 0x1b81f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
    // 0x1b81f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b81f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b81f8: 0x24847fa8  addiu       $a0, $a0, 0x7FA8
    ctx->pc = 0x1b81f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32680));
    // 0x1b81fc: 0xc06f892  jal         func_1BE248
    ctx->pc = 0x1B81FCu;
    SET_GPR_U32(ctx, 31, 0x1B8204u);
    ctx->pc = 0x1B8200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B81FCu;
    // 0x1b8200: 0x24a570f8  addiu       $a1, $a1, 0x70F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE248u, 0x1B81FCu, 0x1B8204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8204u;
label_1b8204:
    // 0x1b8204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b8204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8208: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b8208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b820c: 0xc06fe74  jal         func_1BF9D0
    ctx->pc = 0x1B820Cu;
    SET_GPR_U32(ctx, 31, 0x1B8214u);
    ctx->pc = 0x1B8210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B820Cu;
    // 0x1b8210: 0x3c10003e  lui         $s0, 0x3E (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)62 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF9D0u, 0x1B820Cu, 0x1B8214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8214u;
label_1b8214:
    // 0x1b8214: 0x3c05001c  lui         $a1, 0x1C
    ctx->pc = 0x1b8214u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
    // 0x1b8218: 0x26107fb0  addiu       $s0, $s0, 0x7FB0
    ctx->pc = 0x1b8218u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32688));
    // 0x1b821c: 0x24a52720  addiu       $a1, $a1, 0x2720
    ctx->pc = 0x1b821cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10016));
    // 0x1b8220: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b8220u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8224: 0xc06f892  jal         func_1BE248
    ctx->pc = 0x1B8224u;
    SET_GPR_U32(ctx, 31, 0x1B822Cu);
    ctx->pc = 0x1B8228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8224u;
    // 0x1b8228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE248u, 0x1B8224u, 0x1B822Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B822Cu;
label_1b822c:
    // 0x1b822c: 0xc06f95e  jal         func_1BE578
    ctx->pc = 0x1B822Cu;
    SET_GPR_U32(ctx, 31, 0x1B8234u);
    ctx->pc = 0x1B8230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B822Cu;
    // 0x1b8230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE578u, 0x1B822Cu, 0x1B8234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8234u;
label_1b8234:
    // 0x1b8234: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8238: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b8238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b823c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b823cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8240: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x1B8240u;
    {
        const bool branch_taken_0x1b8240 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8240u;
        // 0x1b8244: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8240) {
            ctx->pc = 0x1B8278u;
            goto label_1b8278;
        }
    }
    ctx->pc = 0x1B8248u;
    // 0x1b8248: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1b8248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1b824c: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x1b824cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1b8250: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x1b8250u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1b8254: 0xc071000  jal         func_1C4000
    ctx->pc = 0x1B8254u;
    SET_GPR_U32(ctx, 31, 0x1B825Cu);
    ctx->pc = 0x1B8258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8254u;
    // 0x1b8258: 0x8e270004  lw          $a3, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4000u, 0x1B8254u, 0x1B825Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B825Cu;
label_1b825c:
    // 0x1b825c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1b825cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b8260: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b8260u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8264: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b8264u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b8268: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b8268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b826c: 0x8071008  j           func_1C4020
    ctx->pc = 0x1B826Cu;
    ctx->pc = 0x1B8270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B826Cu;
    // 0x1b8270: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4020u;
    sub_001C4020_0x1c4020(rdram, ctx, runtime); return;
    ctx->pc = 0x1B8274u;
    // 0x1b8274: 0x0  nop
    ctx->pc = 0x1b8274u;
    // NOP
label_1b8278:
    // 0x1b8278: 0xc071000  jal         func_1C4000
    ctx->pc = 0x1B8278u;
    SET_GPR_U32(ctx, 31, 0x1B8280u);
    ctx->pc = 0x1C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4000u, 0x1B8278u, 0x1B8280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8280u;
label_1b8280:
    // 0x1b8280: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8284: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b8284u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8288: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b8288u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b828c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b828cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8290: 0x8071008  j           func_1C4020
    ctx->pc = 0x1B8290u;
    ctx->pc = 0x1B8294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8290u;
    // 0x1b8294: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4020u;
    sub_001C4020_0x1c4020(rdram, ctx, runtime); return;
    ctx->pc = 0x1B8298u;
}
