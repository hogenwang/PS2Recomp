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

// Function: sub_0016B220
// Address: 0x16b220 - 0x16b440
void sub_0016B220_0x16b220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B220_0x16b220");
#endif

    switch (ctx->pc) {
        case 0x16b250u: goto label_16b250;
        case 0x16b25cu: goto label_16b25c;
        case 0x16b270u: goto label_16b270;
        case 0x16b290u: goto label_16b290;
        case 0x16b2d0u: goto label_16b2d0;
        case 0x16b2e4u: goto label_16b2e4;
        case 0x16b300u: goto label_16b300;
        case 0x16b324u: goto label_16b324;
        case 0x16b3dcu: goto label_16b3dc;
        case 0x16b408u: goto label_16b408;
        case 0x16b414u: goto label_16b414;
        default: break;
    }

    ctx->pc = 0x16b220u;

    // 0x16b220: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x16b220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x16b224: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x16b224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x16b228: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16b228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x16b22c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16b22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16b230: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x16b230u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b234: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16b234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16b238: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16b238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16b23c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16b23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16b240: 0x949300f0  lhu         $s3, 0xF0($a0)
    ctx->pc = 0x16b240u;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x16b244: 0x8c8400dc  lw          $a0, 0xDC($a0)
    ctx->pc = 0x16b244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x16b248: 0xc0627f8  jal         func_189FE0
    ctx->pc = 0x16B248u;
    SET_GPR_U32(ctx, 31, 0x16B250u);
    ctx->pc = 0x16B24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B248u;
    // 0x16b24c: 0x26920314  addiu       $s2, $s4, 0x314 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 788));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189FE0u, 0x16B248u, 0x16B250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B250u;
label_16b250:
    // 0x16b250: 0x8e8400dc  lw          $a0, 0xDC($s4)
    ctx->pc = 0x16b250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
    // 0x16b254: 0xc062804  jal         func_18A010
    ctx->pc = 0x16B254u;
    SET_GPR_U32(ctx, 31, 0x16B25Cu);
    ctx->pc = 0x16B258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B254u;
    // 0x16b258: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A010u, 0x16B254u, 0x16B25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B25Cu;
label_16b25c:
    // 0x16b25c: 0x8e8400dc  lw          $a0, 0xDC($s4)
    ctx->pc = 0x16b25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
    // 0x16b260: 0x968500ea  lhu         $a1, 0xEA($s4)
    ctx->pc = 0x16b260u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 234)));
    // 0x16b264: 0x928600f7  lbu         $a2, 0xF7($s4)
    ctx->pc = 0x16b264u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 247)));
    // 0x16b268: 0xc063658  jal         func_18D960
    ctx->pc = 0x16B268u;
    SET_GPR_U32(ctx, 31, 0x16B270u);
    ctx->pc = 0x16B26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B268u;
    // 0x16b26c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D960u, 0x16B268u, 0x16B270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B270u;
label_16b270:
    // 0x16b270: 0x9242008b  lbu         $v0, 0x8B($s2)
    ctx->pc = 0x16b270u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 139)));
    // 0x16b274: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16b274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b278: 0x3442003f  ori         $v0, $v0, 0x3F
    ctx->pc = 0x16b278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63);
    // 0x16b27c: 0xa242008b  sb          $v0, 0x8B($s2)
    ctx->pc = 0x16b27cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 139), (uint8_t)GPR_U32(ctx, 2));
    // 0x16b280: 0x8e820270  lw          $v0, 0x270($s4)
    ctx->pc = 0x16b280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 624)));
    // 0x16b284: 0x30420600  andi        $v0, $v0, 0x600
    ctx->pc = 0x16b284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1536);
    // 0x16b288: 0xc0506e4  jal         func_141B90
    ctx->pc = 0x16B288u;
    SET_GPR_U32(ctx, 31, 0x16B290u);
    ctx->pc = 0x16B28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B288u;
    // 0x16b28c: 0xae820270  sw          $v0, 0x270($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 624), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141B90u, 0x16B288u, 0x16B290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B290u;
label_16b290:
    // 0x16b290: 0x968300ec  lhu         $v1, 0xEC($s4)
    ctx->pc = 0x16b290u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 236)));
    // 0x16b294: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x16b294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x16b298: 0xa68300ee  sh          $v1, 0xEE($s4)
    ctx->pc = 0x16b298u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 238), (uint16_t)GPR_U32(ctx, 3));
    // 0x16b29c: 0xa69300ec  sh          $s3, 0xEC($s4)
    ctx->pc = 0x16b29cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 236), (uint16_t)GPR_U32(ctx, 19));
    // 0x16b2a0: 0xa68200f0  sh          $v0, 0xF0($s4)
    ctx->pc = 0x16b2a0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 240), (uint16_t)GPR_U32(ctx, 2));
    // 0x16b2a4: 0xa68200f2  sh          $v0, 0xF2($s4)
    ctx->pc = 0x16b2a4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 242), (uint16_t)GPR_U32(ctx, 2));
    // 0x16b2a8: 0xa68200f4  sh          $v0, 0xF4($s4)
    ctx->pc = 0x16b2a8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 244), (uint16_t)GPR_U32(ctx, 2));
    // 0x16b2ac: 0x8e820498  lw          $v0, 0x498($s4)
    ctx->pc = 0x16b2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1176)));
    // 0x16b2b0: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x16b2b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x16b2b4: 0xae820498  sw          $v0, 0x498($s4)
    ctx->pc = 0x16b2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1176), GPR_U32(ctx, 2));
    // 0x16b2b8: 0x8e8400dc  lw          $a0, 0xDC($s4)
    ctx->pc = 0x16b2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
    // 0x16b2bc: 0x968500ea  lhu         $a1, 0xEA($s4)
    ctx->pc = 0x16b2bcu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 234)));
    // 0x16b2c0: 0x928600f7  lbu         $a2, 0xF7($s4)
    ctx->pc = 0x16b2c0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 247)));
    // 0x16b2c4: 0x968700ec  lhu         $a3, 0xEC($s4)
    ctx->pc = 0x16b2c4u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 236)));
    // 0x16b2c8: 0xc063860  jal         func_18E180
    ctx->pc = 0x16B2C8u;
    SET_GPR_U32(ctx, 31, 0x16B2D0u);
    ctx->pc = 0x16B2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B2C8u;
    // 0x16b2cc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E180u, 0x16B2C8u, 0x16B2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B2D0u;
label_16b2d0:
    // 0x16b2d0: 0x968400ea  lhu         $a0, 0xEA($s4)
    ctx->pc = 0x16b2d0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 234)));
    // 0x16b2d4: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x16b2d4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16b2d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x16b2d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b2dc: 0xc063808  jal         func_18E020
    ctx->pc = 0x16B2DCu;
    SET_GPR_U32(ctx, 31, 0x16B2E4u);
    ctx->pc = 0x16B2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B2DCu;
    // 0x16b2e0: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E020u, 0x16B2DCu, 0x16B2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B2E4u;
label_16b2e4:
    // 0x16b2e4: 0x862304da  lh          $v1, 0x4DA($s1)
    ctx->pc = 0x16b2e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1242)));
    // 0x16b2e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x16b2e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b2ec: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16b2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16b2f0: 0xa62204da  sh          $v0, 0x4DA($s1)
    ctx->pc = 0x16b2f0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1242), (uint16_t)GPR_U32(ctx, 2));
    // 0x16b2f4: 0x968400ea  lhu         $a0, 0xEA($s4)
    ctx->pc = 0x16b2f4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 234)));
    // 0x16b2f8: 0xc063808  jal         func_18E020
    ctx->pc = 0x16B2F8u;
    SET_GPR_U32(ctx, 31, 0x16B300u);
    ctx->pc = 0x16B2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B2F8u;
    // 0x16b2fc: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E020u, 0x16B2F8u, 0x16B300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B300u;
label_16b300:
    // 0x16b300: 0x860304da  lh          $v1, 0x4DA($s0)
    ctx->pc = 0x16b300u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1242)));
    // 0x16b304: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16b304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16b308: 0xa60204da  sh          $v0, 0x4DA($s0)
    ctx->pc = 0x16b308u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1242), (uint16_t)GPR_U32(ctx, 2));
    // 0x16b30c: 0x8e8400dc  lw          $a0, 0xDC($s4)
    ctx->pc = 0x16b30cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
    // 0x16b310: 0x968500ea  lhu         $a1, 0xEA($s4)
    ctx->pc = 0x16b310u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 234)));
    // 0x16b314: 0x928600f7  lbu         $a2, 0xF7($s4)
    ctx->pc = 0x16b314u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 247)));
    // 0x16b318: 0x968700ec  lhu         $a3, 0xEC($s4)
    ctx->pc = 0x16b318u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 236)));
    // 0x16b31c: 0xc063860  jal         func_18E180
    ctx->pc = 0x16B31Cu;
    SET_GPR_U32(ctx, 31, 0x16B324u);
    ctx->pc = 0x16B320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B31Cu;
    // 0x16b320: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E180u, 0x16B31Cu, 0x16B324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B324u;
label_16b324:
    // 0x16b324: 0x8e84049c  lw          $a0, 0x49C($s4)
    ctx->pc = 0x16b324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1180)));
    // 0x16b328: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x16b328u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16b32c: 0x2403f3ff  addiu       $v1, $zero, -0xC01
    ctx->pc = 0x16b32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294964223));
    // 0x16b330: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x16b330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x16b334: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x16b334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16b338: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16B338u;
    {
        const bool branch_taken_0x16b338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B338u;
        // 0x16b33c: 0xae83049c  sw          $v1, 0x49C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1180), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b338) {
            ctx->pc = 0x16B34Cu;
            goto label_16b34c;
        }
    }
    ctx->pc = 0x16B340u;
    // 0x16b340: 0x8e82049c  lw          $v0, 0x49C($s4)
    ctx->pc = 0x16b340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1180)));
    // 0x16b344: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x16b344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x16b348: 0xae82049c  sw          $v0, 0x49C($s4)
    ctx->pc = 0x16b348u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1180), GPR_U32(ctx, 2));
label_16b34c:
    // 0x16b34c: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x16b34cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x16b350: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x16B350u;
    {
        const bool branch_taken_0x16b350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b350) {
            ctx->pc = 0x16B354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B350u;
            // 0x16b354: 0x51943  sra         $v1, $a1, 5 (Delay Slot)
            SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16B368u;
            goto label_16b368;
        }
    }
    ctx->pc = 0x16B358u;
    // 0x16b358: 0x8e82049c  lw          $v0, 0x49C($s4)
    ctx->pc = 0x16b358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1180)));
    // 0x16b35c: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x16b35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x16b360: 0xae82049c  sw          $v0, 0x49C($s4)
    ctx->pc = 0x16b360u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1180), GPR_U32(ctx, 2));
    // 0x16b364: 0x51943  sra         $v1, $a1, 5
    ctx->pc = 0x16b364u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 5));
label_16b368:
    // 0x16b368: 0x30a20008  andi        $v0, $a1, 0x8
    ctx->pc = 0x16b368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
    // 0x16b36c: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x16b36cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x16b370: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16B370u;
    {
        const bool branch_taken_0x16b370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B370u;
        // 0x16b374: 0xa28304ea  sb          $v1, 0x4EA($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1258), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b370) {
            ctx->pc = 0x16B388u;
            goto label_16b388;
        }
    }
    ctx->pc = 0x16B378u;
    // 0x16b378: 0x8e820490  lw          $v0, 0x490($s4)
    ctx->pc = 0x16b378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1168)));
    // 0x16b37c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x16b37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x16b380: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x16B380u;
    {
        const bool branch_taken_0x16b380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B380u;
        // 0x16b384: 0xae820490  sw          $v0, 0x490($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b380) {
            ctx->pc = 0x16B398u;
            goto label_16b398;
        }
    }
    ctx->pc = 0x16B388u;
label_16b388:
    // 0x16b388: 0x8e830490  lw          $v1, 0x490($s4)
    ctx->pc = 0x16b388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1168)));
    // 0x16b38c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x16b38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x16b390: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16b390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16b394: 0xae820490  sw          $v0, 0x490($s4)
    ctx->pc = 0x16b394u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1168), GPR_U32(ctx, 2));
label_16b398:
    // 0x16b398: 0x8e820490  lw          $v0, 0x490($s4)
    ctx->pc = 0x16b398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1168)));
    // 0x16b39c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x16b39cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x16b3a0: 0xae820490  sw          $v0, 0x490($s4)
    ctx->pc = 0x16b3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1168), GPR_U32(ctx, 2));
    // 0x16b3a4: 0x8e8204a0  lw          $v0, 0x4A0($s4)
    ctx->pc = 0x16b3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1184)));
    // 0x16b3a8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x16b3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x16b3ac: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x16B3ACu;
    {
        const bool branch_taken_0x16b3ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b3ac) {
            ctx->pc = 0x16B3B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B3ACu;
            // 0x16b3b0: 0x8e8304a0  lw          $v1, 0x4A0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16B3C0u;
            goto label_16b3c0;
        }
    }
    ctx->pc = 0x16B3B4u;
    // 0x16b3b4: 0x922203ec  lbu         $v0, 0x3EC($s1)
    ctx->pc = 0x16b3b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1004)));
    // 0x16b3b8: 0xa28203ec  sb          $v0, 0x3EC($s4)
    ctx->pc = 0x16b3b8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1004), (uint8_t)GPR_U32(ctx, 2));
    // 0x16b3bc: 0x8e8304a0  lw          $v1, 0x4A0($s4)
    ctx->pc = 0x16b3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1184)));
label_16b3c0:
    // 0x16b3c0: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x16b3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x16b3c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x16b3c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b3c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16b3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16b3cc: 0xae8204a0  sw          $v0, 0x4A0($s4)
    ctx->pc = 0x16b3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1184), GPR_U32(ctx, 2));
    // 0x16b3d0: 0x962400ea  lhu         $a0, 0xEA($s1)
    ctx->pc = 0x16b3d0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 234)));
    // 0x16b3d4: 0xc063808  jal         func_18E020
    ctx->pc = 0x16B3D4u;
    SET_GPR_U32(ctx, 31, 0x16B3DCu);
    ctx->pc = 0x16B3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B3D4u;
    // 0x16b3d8: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E020u, 0x16B3D4u, 0x16B3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B3DCu;
label_16b3dc:
    // 0x16b3dc: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x16b3dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16b3e0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x16b3e0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x16b3e4: 0x8e2200dc  lw          $v0, 0xDC($s1)
    ctx->pc = 0x16b3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x16b3e8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16b3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16b3ec: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x16b3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16b3f0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16b3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16b3f4: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x16b3f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x16b3f8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16b3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16b3fc: 0x22082  srl         $a0, $v0, 2
    ctx->pc = 0x16b3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x16b400: 0xc0634f8  jal         func_18D3E0
    ctx->pc = 0x16B400u;
    SET_GPR_U32(ctx, 31, 0x16B408u);
    ctx->pc = 0x16B404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B400u;
    // 0x16b404: 0x32880  sll         $a1, $v1, 2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D3E0u, 0x16B400u, 0x16B408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B408u;
label_16b408:
    // 0x16b408: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16b408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b40c: 0xc062670  jal         func_1899C0
    ctx->pc = 0x16B40Cu;
    SET_GPR_U32(ctx, 31, 0x16B414u);
    ctx->pc = 0x16B410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B40Cu;
    // 0x16b410: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1899C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1899C0u, 0x16B40Cu, 0x16B414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B414u;
label_16b414:
    // 0x16b414: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x16b414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16b418: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16b418u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16b41c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16b41cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16b420: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16b420u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b424: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16b424u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b428: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16b428u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b42c: 0x3e00008  jr          $ra
    ctx->pc = 0x16B42Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B42Cu;
        // 0x16b430: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B42Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B434u;
    // 0x16b434: 0x0  nop
    ctx->pc = 0x16b434u;
    // NOP
    // 0x16b438: 0x0  nop
    ctx->pc = 0x16b438u;
    // NOP
    // 0x16b43c: 0x0  nop
    ctx->pc = 0x16b43cu;
    // NOP
}
